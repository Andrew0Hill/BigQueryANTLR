#ifndef PYTHON_SQL_LISTENER_H
#define PYTHON_SQL_LISTENER_H
#include "bigqueryBaseListener.h"
#include "SelectTable.h"
#include "QueryPart.h"
#include "SortedColumns.h"
#include <memory>
#include <stack>
#define DEBUG
typedef std::shared_ptr<SelectTable> TablePtr;
typedef std::shared_ptr<Table> BaseTablePtr;

class Python_SQL_Listener : public bigqueryBaseListener {
public:
	Python_SQL_Listener(){
		// Make the root lookup table.
		root_table = std::make_shared<SelectTable>(nullptr);
		#ifdef DEBUG
			std::cout << "Constructor called" << std::endl;
		#endif
		current_table = root_table;
	}
	void reset(){
		part_of_query.clear();
		current_table = nullptr;
		root_table = nullptr;
		current_table = nullptr;

		root_table = std::make_shared<SelectTable>(nullptr);
		table_tree = antlr4::tree::ParseTreeProperty<TablePtr>();
		cexpr_seen = antlr4::tree::ParseTreeProperty<bool>();
	}
	void get_columns(std::vector<Column> &all_columns){
		#ifdef DEBUG
			std::cout << "Clearing columns" << std::endl;
		#endif
		all_columns.clear();
		#ifdef DEBUG
			std::cout << "Inserting column list" << std::endl;
		#endif
		if(final_table == NULL){
			return;
		}
		all_columns.insert(all_columns.end(), final_table->column_list.begin(), final_table->column_list.end());
		#ifdef DEBUG
			std::cout << "Inserting column reference list" << std::endl;
		#endif
		all_columns.insert(all_columns.end(), final_table->column_ref_list.begin(), final_table->column_ref_list.end());
		#ifdef DEBUG
			std::cout << "Done Inserting column reference list" << std::endl;
		#endif
	}
	// Set the callback that is called for each column ID.
	void setCallback(PyObject* callback_ptr){
		callback = callback_ptr;
	}



   /*
	* BEGIN PARSE
	*/
	void enterParse(bigqueryParser::ParseContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: enterParse()" << std::endl;
		#endif
		current_table = root_table;
		#ifdef DEBUG
			std::cout << "Adding Root Table." << std::endl;
		#endif
		table_tree.put(ctx, root_table);
		#ifdef DEBUG
			std::cout << "Exit: enterParse()" << std::endl;
		#endif
	}
	void exitParse(bigqueryParser::ParseContext *ctx) override {

		#ifdef DEBUG
			std::cout << "Enter: exitParse()" << std::endl;
		#endif
		if(current_table != nullptr && !current_table->children.empty())
			final_table = current_table->children[0];
		#ifdef DEBUG
			std::cout << "Final Lookup Table" <<std::endl;
			if(current_table != nullptr && !current_table->children.empty()){
				for (Column &c : current_table->children[0]->column_list){
					std::cout << c << std::endl;
				}
			}else{
				std::cout << "Table is NULL!" << std::endl;
			}
			std::cout << "Final Column Reference Table" << std::endl;
			if(current_table != nullptr && !current_table->children.empty()){
				for (Column &c : current_table->children[0]->column_ref_list){
					std::cout << c << std::endl;
				}
			}else{
				std::cout << "Table is NULL!" << std::endl;
			}
			std::cout << "Exit: exitParse()" << std::endl;
		#endif
	}
   /*
	* END PARSE
	*/


   /*
	* BEGIN SELECT STATEMENT
	*/
	void enterSelect_statement(bigqueryParser::Select_statementContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: enterSelect_statement()" << std::endl;
		#endif
		TablePtr table = std::make_shared<SelectTable>(current_table);
		table_tree.put(ctx, table);
		// If we're in a subquery, we should add this table as a cte_child of the current table.
		if(!part_of_query.empty() && part_of_query.back() == "WITH"){
			#ifdef DEBUG
				std::cout << "Inside a CTE statement" << std::endl;
			#endif
			current_table->cte_children.push_back(table);
		}
		// Otherwise add it as the child of this table.
		else{
			current_table->children.push_back(table);
		}
		current_table = table;
		// Push a SELECT statement onto the stack
		part_of_query.push_back(QueryPart::SELECT);
		#ifdef DEBUG
			std::cout << "Exit: enterSelect_statement()" << std::endl;
		#endif
	}
	void exitSelect_statement(bigqueryParser::Select_statementContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: exitSelect_statement()" << std::endl;
		#endif
		//std::cout << std::endl << "Exiting SELECT statement" << std::endl << "Current Table ID: " << current_table->tid << " with Parent ID: " << current_table->parent->tid << std::endl;
		//std::cout << "Table Column List: " << std::endl;
		//for(Column &c : current_table->column_list){
		//	std::cout << c << std::endl;
		//}

		//std::cout << "Internal Lookup Table: " << std::endl << current_table->lookup_table << std::endl;

		// If there is a single "normal" table in the FROM list, then we can assume that all columns referenced in the SELECT list belong to that
		// table. (Columns don't need to have the table name specified like <table_name>.<column_name> if there is only one table).
		#ifdef DEBUG
			std::cout << "Checking lookup table size." << std::endl;
		#endif
		if(current_table->lookup_table.size() == 1 && current_table->sq_lookup_table.size() == 0){
			// Get a reference to the first (only) table in the lookup table list.
			#ifdef DEBUG
				std::cout << "Get Table reference." << std::endl;
			#endif
			auto table = current_table->lookup_table.begin()->second;
			for(Column &c : current_table->column_list){
				#ifdef DEBUG
					std::cout << "Updating tables name to: '" << table->table_name << "' from: '"   << c.table_name << "'." << std::endl;
				#endif
				c.table_name = table->table_name;
			}
		}
		// If there is a single subquery table in the FROM list, do the same as above but also update the column and table names from the subquery.
		else if (current_table->sq_lookup_table.size() == 1 && current_table->lookup_table.size() == 0){
			// Get a reference to the first (only) subquery table.
			#ifdef DEBUG
				std::cout << "Get SelectTable reference." << std::endl;
			#endif
			auto table = current_table->sq_lookup_table.begin()->second;
			// Iterate through each column from the SELECT list of the query.
			#ifdef DEBUG
				std::cout << "Iterate columns in list." << std::endl;
			#endif
			for(Column &c : current_table->column_list){
				#ifdef DEBUG
					std::cout << "Current column name: " << c.real_name << std::endl;
				#endif
				// Get the vector of columns that are associated with this column's real name in the SELECT list. 
				std::vector<Column> columns = table->column_lookup[c.real_name];
				// Column object to hold the matched column if it exists. 
				Column found_col;
				// Boolean value so we can check if a match was found or not.
				bool match_found = false;
				// Iterate through all columns that have this real_name.
				for(Column &t_col : columns){
					#ifdef DEBUG
						std::cout << "Candidate column: "  << t_col.real_name << std::endl;
					#endif
					if(t_col.alias == c.real_name){
						#ifdef DEBUG
							std::cout << "Match found." << std::endl;
						#endif
						found_col = t_col;
						match_found = true;
						break;
					}
				}
				// If a match was found, update the table name and real name for the column.
				if(match_found){
					c.real_name = found_col.real_name;
					c.table_name = found_col.table_name;
				}else{
					std::cout << "Error: Could not complete lookup for column '" << c.real_name << "'.\n";
				}

			}


		}
		// If there are 1 or more tables in either the "normal" or "subquery" lookup tables, then we cannot assume that every column comes from the same table.
		// In this case we must rely on the table name from each <table_name>.<column_name> expression in order to resolve table names.
		else{
			for(Column &c : current_table->column_list){
				// Check if this column comes from a normal table.
				if(current_table->lookup_table.find(c.table_name) != current_table->lookup_table.end()){
					// Get a reference to the Table that matches with the table name of this column.
					auto table = current_table->lookup_table[c.table_name];
					// For a non-subquery table all we need to do is update the column's table name to be that of the table it matched with.
					c.table_name = table->table_name;
				}
				// Check if this column comes from a subquery table.
				else if (current_table->sq_lookup_table.find(c.table_name) != current_table->sq_lookup_table.end()){
					auto table = current_table->sq_lookup_table[c.table_name];
					// Get the vector of columns that are associated with this column's real name in the SELECT list. 
					std::vector<Column> columns = table->column_lookup[c.real_name];
					// Column object to hold the matched column if it exists. 
					Column found_col;
					// Boolean value so we can check if a match was found or not.
					bool match_found = false;
					// Iterate through all columns that have this real_name.
					for(Column &t_col : columns){
						if(t_col.real_name == c.real_name){
							found_col = t_col;
							match_found = true;
							break;
						}
					}
					// If a match was found, update the table name and real name for the column.
					if(match_found){
						c.real_name = found_col.real_name;
						c.table_name = found_col.table_name;
					}else{
						std::cout << "Error: Could not complete lookup for column '" << c.real_name << "'.\n";
					}
				}
				// Error out otherwise.
				else{
					std::cout << "Error: Table '" << c.table_name << "' could not be found in lookup tables." << std::endl;
				}
			}
		}
		// Iterate each column in the column list. Add the values to the lookup table at this level.
		for(Column &c : current_table->column_list){
			/*if(current_table->column_lookup.find(c.alias) == current_table->column_lookup.end()){
				std::vector<Column> list = {c};
				current_table->column_lookup[c.alias] = list;
			}else{
				current_table->column_lookup[c.alias].push_back(c);
			}*/
			INSERT_OR_MAKE_VEC(current_table->column_lookup, c.alias, Column, c)
		}

		// Iterate each column in the column reference list, and resolve them to real column names if possible.
		for(Column &c : current_table->column_ref_list){
			// Check if we have an entry for this column in the column_lookup table.
			if(current_table->column_lookup.find(c.real_name) != current_table->column_lookup.end()){
				if(current_table->column_lookup[c.real_name].size() == 1){
					Column temp = current_table->column_lookup[c.real_name][0];
					c.real_name = temp.real_name;
					c.table_name = temp.table_name;
				}
				else{
					// If so, iterate through the entries that match this alias and try to find one where the aliased table name
					// matches the name 
					for(Column &cand_col : current_table->column_lookup[c.real_name]){
						if(cand_col.table_alias_name == c.table_name){
							c.real_name = cand_col.real_name;
							c.table_name = cand_col.table_name;
						}
					}
				}
			}
		}




		#ifdef DEBUG
			std::cout << "Exit: exitSelect_statement()" << std::endl;
		#endif
		current_table = current_table->parent;
		part_of_query.pop_back();
	}
   /*
	* END SELECT STATEMENT
	*/


	/*
	* BEGIN FROM STATEMENT
	*/
	void enterFrom_statement(bigqueryParser::From_statementContext *ctx) override{
		// Add a FROM statement context to the stack.
		//part_of_query.push_back(QueryPart::FROM);
	}

	void exitFrom_statement(bigqueryParser::From_statementContext *ctx) override {
		// Remove the FROM statement context from the stack.
		//part_of_query.pop_back();
	}
   /*
	* END FROM STATEMENT
	*/



   /*
	* BEGIN FROM ITEM
	*/
	void enterFrom_item(bigqueryParser::From_itemContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: enterFrom_item()" << std::endl;
		#endif
		// If this From_item is a Table Expression
		if(ctx->table_expr() != NULL){
			std::string table_name;
			if(ctx->table_expr()->table_expr() != NULL){
				table_name = ctx->table_expr()->table_expr()->table_name()->getText();
			}else{
				table_name = ctx->table_expr()->table_name()->getText();
			}

			std::string table_alias = ctx->alias_name() == NULL ? table_name : ctx->alias_name()->getText();
			BaseTablePtr table = std::make_shared<Table>();

			table->table_name = table_name;
			table->table_alias = table_alias;
			#ifdef DEBUG
				std::cout << "Table name is: '" << table_name << "' with Alias: '" << table_alias << "'." << std::endl;
			#endif
			current_table->lookup_table[table_alias] = table;
		}
		#ifdef DEBUG
			std::cout << "Exit: enterFrom_item()" << std::endl;
		#endif
	}

	void exitFrom_item(bigqueryParser::From_itemContext *ctx) override {
		typedef bigqueryParser::Select_statementContext SelectContext;
		if(ctx->query_statement() != NULL){
			std::string alias_name = "";
			if(ctx->alias_name() != NULL){
				alias_name = ctx->alias_name()->getText();
			}
			// Get a vector of all the SelectContexts in the query expression.
			std::vector<SelectContext*> select_contexts = ctx->query_statement()->query_expr()->select_statement();
			// Make a new table pointer.
			TablePtr table = std::make_shared<SelectTable>(nullptr);
			// For each select_statement (all of which have been processed at this point)
			// merge them into a single SelectTable 'table'. 
			for(SelectContext* &sc : select_contexts){
				TablePtr current_table = table_tree.get(sc);
				table = SelectTable::merge(table, current_table);
			}
			// Add this table to the lookup table for subqueries so we can access it later.
			current_table->sq_lookup_table[alias_name] = table;
			//current_table->lookup_table.put()
		}
	}
   /*
	* END FROM ITEM
	*/

   /*
    * BEGIN GROUP BY
	*/
	void enterGroup_statement(bigqueryParser::Group_statementContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: enterGroup_statement()" << std::endl;
		#endif
		part_of_query.push_back(QueryPart::GROUP_BY);
		#ifdef DEBUG
			std::cout << "Exit: enterGroup_statement()" << std::endl;
		#endif
	}
	void exitGroup_statement(bigqueryParser::Group_statementContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: exitGroup_statement()" << std::endl;
		#endif
		part_of_query.pop_back();
		#ifdef DEBUG
			std::cout << "Exit: exitGroup_statement()" << std::endl;
		#endif
	}

   /*
    * END GROUP BY
	*/

   /*
    * BEGIN ON CLAUSE
	*/
	void enterOn_clause(bigqueryParser::On_clauseContext *ctx) override {
		part_of_query.push_back(QueryPart::JOIN);
	}

	void exitOn_clause(bigqueryParser::On_clauseContext *ctx) override {
		part_of_query.pop_back();
	}
   /*
    * END ON CLAUSE
	*/

   /*
	* BEGIN QUERY EXPRESSION
	*/
	void enterQuery_expr(bigqueryParser::Query_exprContext *ctx) override {
		// A Query Expression can contain one or more Select Statements within it. 
		// We create a new SelectTable for each Query Expression we enter.
		// When we exit the Query Expression, we merge all of the Select Statements within that
		// Query Expression into a single SelectTable.

		// Create a new table with the current table as its parent
		TablePtr query_table = std::make_shared<SelectTable>(current_table);

		// Add this table to the children of the current table.
		current_table->children.push_back(query_table);

		// Set the current table to this table.
		current_table = query_table;

	}

	void exitQuery_expr(bigqueryParser::Query_exprContext *ctx) override {
		// If this is a query expression (i.e. a SELECT inside some parentheses)
		// We can just copy the child query_expr's table up into this one. 
		#ifdef DEBUG
			std::cout << "Enter: exitQuery_expr()" << std::endl;
		#endif
		if(ctx->query_expr() != NULL && table_tree.get(ctx->query_expr()) != NULL){
			#ifdef DEBUG
				std::cout << "Copying table up" << std::endl;
			#endif
			TablePtr t = table_tree.get(ctx->query_expr());
			LIST_INSERT_ALL(current_table->column_list, t->column_list);
			LIST_INSERT_ALL(current_table->column_ref_list, t->column_ref_list);
			for(Column &c : t->column_list){
				INSERT_OR_MAKE_VEC(current_table->column_lookup, c.real_name, Column, c)
			}
			MAP_INSERT_ALL(current_table->sq_lookup_table, t->sq_lookup_table)
			MAP_INSERT_ALL(current_table->lookup_table, t->lookup_table)
		}
		else{
			for(bigqueryParser::Select_statementContext* &sctx : ctx->select_statement()){
				TablePtr t = table_tree.get(sctx);
				// We can simply concatenate the column lists together.
				LIST_INSERT_ALL(current_table->column_list, t->column_list)
				LIST_INSERT_ALL(current_table->column_ref_list, t->column_ref_list)
				//current_table->column_list.insert(current_table->column_list.end(), t->column_list.begin(), t->column_list.end())
				// For the column lookup we need to do a little more because there might be columns from two separate select statements
				// that have the same aliased name. 
				for(Column &c : t->column_list){
					// If this column's real name doesn't already have an entry in the table associated with it,
					// create the vector and set up the entry.
					/*if(current_table->column_lookup.find(c.real_name) == current_table->column_lookup.end()){
						current_table->column_lookup[c.real_name] = std::vector<Column>();
					}
					// Add the column to the vector for this entry.
					current_table->column_lookup[c.real_name].push_back(c);*/
					INSERT_OR_MAKE_VEC(current_table->column_lookup, c.real_name, Column, c)
				}


				// The other two lookup tables only deal with table pointers, so they can be concatenated.
				//current_table->sq_lookup_table.insert(current_table->sq_lookup_table.end(), t->lookup_table.begin(), t->lookup_table.end());
				MAP_INSERT_ALL(current_table->sq_lookup_table, t->sq_lookup_table)
				//current_table->lookup_table.insert(current_table->lookup_table.begin(), current_table->lookup_table.end());
				MAP_INSERT_ALL(current_table->lookup_table, t->lookup_table)
			}
		}
		table_tree.put(ctx, current_table);
		current_table = current_table->parent;
		#ifdef DEBUG
			std::cout << "Exit: exitQuery_expr()" << std::endl;
		#endif
	}
   /*
	* END QUERY EXPRESSION
	*/

   /*
    * BEGIN WHERE
    */
   void enterWhere_statement(bigqueryParser::Where_statementContext *ctx) override {
	   	#ifdef DEBUG
			std::cout << "Enter: enterWhere_statement()" << std::endl;
		#endif
	   part_of_query.push_back(QueryPart::WHERE);
	   	#ifdef DEBUG
			std::cout << "Exit: enterWhere_statement()" << std::endl;
		#endif
   }
   void exitWhere_statement(bigqueryParser::Where_statementContext *ctx) override {
	   	#ifdef DEBUG
			std::cout << "Enter: exitWhere_statement()" << std::endl;
		#endif
	   part_of_query.pop_back();
	   	#ifdef DEBUG
			std::cout << "Exit: exitWhere_statement()" << std::endl;
		#endif
   }
   /*
    * END WHERE
    */

   /*
    * BEGIN WITH
	*/
	void enterWith_statement(bigqueryParser::With_statementContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: enterWith_statement()" << std::endl;
		#endif
	   part_of_query.push_back(QueryPart::WITH);
	   	#ifdef DEBUG
			std::cout << "Exit: enterWith_statement()" << std::endl;
		#endif
	}
	void exitWith_statement(bigqueryParser::With_statementContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: exitWith_statement()" << std::endl;
		#endif
	   part_of_query.pop_back();
	   	#ifdef DEBUG
			std::cout << "Exit: exitWith_statement()" << std::endl;
		#endif
	}
   /*
    * END WITH
	*/
   /*
   	* BEGIN COLUMN EXPRESSION
	*/
	void enterColumn_expr(bigqueryParser::Column_exprContext *ctx) override{
		#ifdef DEBUG
			std::cout << "Enter: enterColumn_expr()" << std::endl;
		#endif
		if(cexpr_seen.get(ctx))
			return;
		if(!part_of_query.empty() && (part_of_query.back() != "SELECT" || part_of_query.front() == "WITH")){
			bigqueryParser::Column_exprContext *temp = ctx;
			cexpr_seen.put(ctx,true);
			while(temp->column_expr() != NULL){
				cexpr_seen.put(temp->column_expr(),true);
				temp = temp->column_expr();
			}
			if(temp->column_name() == NULL){
				#ifdef DEBUG
					std::cout << "Error: column name is NULL. This probably means an error occurred during parsing." << std::endl;
				#endif
				return;
			}
			std::string column_name = temp->column_name()->getText();
			std::string table_name = temp->table_name() == NULL ? "" : temp->table_name()->getText();
			std::string alias_name = temp->column_name()->getText();

			std::vector<std::string> query_context = part_of_query;

			current_table->column_ref_list.push_back(Column(alias_name,column_name,table_name,query_context));
		}
		#ifdef DEBUG
			std::cout << "Exit: enterColumn_expr()" << std::endl;
		#endif
	}
	void exitColumn_expr(bigqueryParser::Column_exprContext *ctx) override{

	}
   /*
	* BEGIN ALIAS EXPRESSION
	*/
	// For each alias expression we encounter, we should add a new Column object to the current level SELECT statement. 
	void enterAlias_expr(bigqueryParser::Alias_exprContext *ctx) override {
		#ifdef DEBUG
			std::cout << "Enter: enterAlias_expr()" << std::endl;
		#endif
		if(ctx->expr() != NULL && ctx->expr()->column_expr() != NULL){
			#ifdef DEBUG
				std::cout << "Check if column_expr is NULL." << std::endl;
			#endif
			bigqueryParser::Column_exprContext *temp = ctx->expr()->column_expr();
			#ifdef DEBUG
				std::cout << "Iterate until column_name" << std::endl;
			#endif
			while(temp->column_expr() != NULL){
				temp = temp->column_expr();
			}
			#ifdef DEBUG
				std::cout << "Get column_name" << std::endl;
			#endif
			std::string column_name = temp->column_name()->getText();
			#ifdef DEBUG
				std::cout << "Get alias_name" << std::endl;
			#endif
			std::string alias_name = ctx->alias_name() == NULL ? column_name : ctx->alias_name()->getText();
			#ifdef DEBUG
				std::cout << "Get table_name" << std::endl;
			#endif
			std::string table_name = temp->table_name() == NULL ? "" : temp->table_name()->getText();
			#ifdef DEBUG
				std::cout << "Get context" << std::endl;
			#endif
			std::vector<std::string> query_context = part_of_query;
			#ifdef DEBUG
				std::cout << "Add new column" << std::endl;
			#endif
			current_table->column_list.push_back(Column(alias_name,column_name,table_name,query_context));
		}
		#ifdef DEBUG
			std::cout << "Exit: enterAlias_expr()" << std::endl;
		#endif
	}
	/*void enterColumn_name(bigqueryParser::Column_nameContext *ctx) override {
		if (callback != NULL) {
			std::string id_string = ctx->getText();
			PyEval_CallFunction(callback, "(s)", id_string.c_str());
		}
	}*/
private:
    antlr4::tree::ParseTreeProperty<TablePtr> table_tree;
	antlr4::tree::ParseTreeProperty<bool> cexpr_seen;
	std::vector<std::string> part_of_query; 
    TablePtr current_table;
    TablePtr root_table;
	TablePtr final_table;
    PyObject* callback; 
};
#endif