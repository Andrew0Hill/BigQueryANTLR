#ifndef SELECT_TABLE_H
#define SELECT_TABLE_H
#include "Table.h"
#include "Column.h"
#include <memory>
#include <vector>
#include <unordered_map>
// Insert all elements of one list into another list
#define LIST_INSERT_ALL(target, source) target.insert(target.end(), source.begin(), source.end());
// Insert all elements of a map into another map
#define MAP_INSERT_ALL(target, source) target.insert(source.begin(), source.end());
// Check if a key value (kval) exists in a map. If not, create a std::vector<ttype> and add tval as an element. 
#define INSERT_OR_MAKE_VEC(target, kval, ttype, tval)    \
               if(target.find(kval) != target.end()) {   \
                    target[kval] = std::vector<ttype>(); \
               }                                         \
               target[kval].push_back(tval);
class SelectTable : public Table{
    public:
        std::shared_ptr<SelectTable> parent;

        // Vector of all children of this SelectTable.
        std::vector<std::shared_ptr<SelectTable>> children;

        // TODO: get rid of this?
        std::vector<std::shared_ptr<SelectTable>> cte_children;
        // List of names for each CTE
        std::vector<std::string> cte_names;
        // List of all columns in the SelectTable's SELECT list.
        std::vector<Column> column_list;
        // List of references to columns that come from different parts of the SELECT query, i.e. WHERE, GROUP BY, etc.
        // This needs to be a separate list because we need to cross-reference these column names with the aliases of columns in the SELECT list
        // after we've built the lookup table at that level.
        std::vector<Column> column_ref_list;
        // Lookup table for subqueries.
        std::unordered_map<std::string, std::shared_ptr<SelectTable>> sq_lookup_table;
        // Lookup table for normal tables (i.e. not a subquery, just a table w/ or w/out an alias)
        std::unordered_map<std::string, std::shared_ptr<Table>> lookup_table;
        // Lookup table for all columns in the SelectTable. 
        // This is a mapping of real name (std::string) -> Columns with this name (std::vector<Column>)
        std::unordered_map<std::string, std::vector<Column>> column_lookup;
        // This is a mapping of alias (std::string) -> Columns with this alias (std::vector<Column>)
        //std::unordered_map<std::string, std::vector<Column>> alias_lookup;
        // Unique table ID for this table.
        int tid;

        SelectTable(std::shared_ptr<SelectTable> par){
            tid = id++; 
            parent = par;
        }
        bool is_select_table() override {return true;}
        static inline std::shared_ptr<SelectTable> merge(std::shared_ptr<SelectTable> t1, std::shared_ptr<SelectTable> t2){
            std::shared_ptr<SelectTable> merged_table = std::make_shared<SelectTable>(t2->parent);

            // Add column lists together.
            merged_table->column_list.insert(merged_table->column_list.end(), t1->column_list.begin(), t1->column_list.end());
            merged_table->column_list.insert(merged_table->column_list.end(), t2->column_list.begin(), t2->column_list.end());
            
            // Add column lookups together
            merged_table->column_lookup.insert(t1->column_lookup.begin(), t1->column_lookup.end());
            merged_table->column_lookup.insert(t2->column_lookup.begin(), t2->column_lookup.end());

            //merged_table->alias_lookup.insert(t1->alias_lookup.begin(), t1->alias_lookup.end());
            //merged_table->alias_lookup.insert(t2->alias_lookup.begin(), t2->alias_lookup.end());

            merged_table->lookup_table.insert(t1->lookup_table.begin(), t1->lookup_table.end());
            merged_table->lookup_table.insert(t2->lookup_table.begin(), t2->lookup_table.end());

            merged_table->sq_lookup_table.insert(t1->sq_lookup_table.begin(), t1->sq_lookup_table.end());
            merged_table->sq_lookup_table.insert(t2->sq_lookup_table.begin(), t2->sq_lookup_table.end());
            return merged_table;
        }
        static int id;
};
#endif