
// Generated from bigquery.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "bigqueryListener.h"


/**
 * This class provides an empty implementation of bigqueryListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  bigqueryBaseListener : public bigqueryListener {
public:

  virtual void enterParse(bigqueryParser::ParseContext * /*ctx*/) override { }
  virtual void exitParse(bigqueryParser::ParseContext * /*ctx*/) override { }

  virtual void enterQuery_statement(bigqueryParser::Query_statementContext * /*ctx*/) override { }
  virtual void exitQuery_statement(bigqueryParser::Query_statementContext * /*ctx*/) override { }

  virtual void enterQuery_expr(bigqueryParser::Query_exprContext * /*ctx*/) override { }
  virtual void exitQuery_expr(bigqueryParser::Query_exprContext * /*ctx*/) override { }

  virtual void enterSelect_statement(bigqueryParser::Select_statementContext * /*ctx*/) override { }
  virtual void exitSelect_statement(bigqueryParser::Select_statementContext * /*ctx*/) override { }

  virtual void enterExpression_list(bigqueryParser::Expression_listContext * /*ctx*/) override { }
  virtual void exitExpression_list(bigqueryParser::Expression_listContext * /*ctx*/) override { }

  virtual void enterStar_expr(bigqueryParser::Star_exprContext * /*ctx*/) override { }
  virtual void exitStar_expr(bigqueryParser::Star_exprContext * /*ctx*/) override { }

  virtual void enterAlias_expr(bigqueryParser::Alias_exprContext * /*ctx*/) override { }
  virtual void exitAlias_expr(bigqueryParser::Alias_exprContext * /*ctx*/) override { }

  virtual void enterFrom_statement(bigqueryParser::From_statementContext * /*ctx*/) override { }
  virtual void exitFrom_statement(bigqueryParser::From_statementContext * /*ctx*/) override { }

  virtual void enterFrom_item(bigqueryParser::From_itemContext * /*ctx*/) override { }
  virtual void exitFrom_item(bigqueryParser::From_itemContext * /*ctx*/) override { }

  virtual void enterWhere_statement(bigqueryParser::Where_statementContext * /*ctx*/) override { }
  virtual void exitWhere_statement(bigqueryParser::Where_statementContext * /*ctx*/) override { }

  virtual void enterGroup_statement(bigqueryParser::Group_statementContext * /*ctx*/) override { }
  virtual void exitGroup_statement(bigqueryParser::Group_statementContext * /*ctx*/) override { }

  virtual void enterHaving_statement(bigqueryParser::Having_statementContext * /*ctx*/) override { }
  virtual void exitHaving_statement(bigqueryParser::Having_statementContext * /*ctx*/) override { }

  virtual void enterOrder_clause(bigqueryParser::Order_clauseContext * /*ctx*/) override { }
  virtual void exitOrder_clause(bigqueryParser::Order_clauseContext * /*ctx*/) override { }

  virtual void enterLimit_clause(bigqueryParser::Limit_clauseContext * /*ctx*/) override { }
  virtual void exitLimit_clause(bigqueryParser::Limit_clauseContext * /*ctx*/) override { }

  virtual void enterUnary_operator(bigqueryParser::Unary_operatorContext * /*ctx*/) override { }
  virtual void exitUnary_operator(bigqueryParser::Unary_operatorContext * /*ctx*/) override { }

  virtual void enterExpr(bigqueryParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(bigqueryParser::ExprContext * /*ctx*/) override { }

  virtual void enterCast_expr(bigqueryParser::Cast_exprContext * /*ctx*/) override { }
  virtual void exitCast_expr(bigqueryParser::Cast_exprContext * /*ctx*/) override { }

  virtual void enterColumn_expr(bigqueryParser::Column_exprContext * /*ctx*/) override { }
  virtual void exitColumn_expr(bigqueryParser::Column_exprContext * /*ctx*/) override { }

  virtual void enterExcept_statement(bigqueryParser::Except_statementContext * /*ctx*/) override { }
  virtual void exitExcept_statement(bigqueryParser::Except_statementContext * /*ctx*/) override { }

  virtual void enterReplace_statement(bigqueryParser::Replace_statementContext * /*ctx*/) override { }
  virtual void exitReplace_statement(bigqueryParser::Replace_statementContext * /*ctx*/) override { }

  virtual void enterJoin_type(bigqueryParser::Join_typeContext * /*ctx*/) override { }
  virtual void exitJoin_type(bigqueryParser::Join_typeContext * /*ctx*/) override { }

  virtual void enterOn_clause(bigqueryParser::On_clauseContext * /*ctx*/) override { }
  virtual void exitOn_clause(bigqueryParser::On_clauseContext * /*ctx*/) override { }

  virtual void enterSet_op(bigqueryParser::Set_opContext * /*ctx*/) override { }
  virtual void exitSet_op(bigqueryParser::Set_opContext * /*ctx*/) override { }

  virtual void enterUsing_clause(bigqueryParser::Using_clauseContext * /*ctx*/) override { }
  virtual void exitUsing_clause(bigqueryParser::Using_clauseContext * /*ctx*/) override { }

  virtual void enterSstruct(bigqueryParser::SstructContext * /*ctx*/) override { }
  virtual void exitSstruct(bigqueryParser::SstructContext * /*ctx*/) override { }

  virtual void enterArray_expr(bigqueryParser::Array_exprContext * /*ctx*/) override { }
  virtual void exitArray_expr(bigqueryParser::Array_exprContext * /*ctx*/) override { }

  virtual void enterBool_expression(bigqueryParser::Bool_expressionContext * /*ctx*/) override { }
  virtual void exitBool_expression(bigqueryParser::Bool_expressionContext * /*ctx*/) override { }

  virtual void enterCount(bigqueryParser::CountContext * /*ctx*/) override { }
  virtual void exitCount(bigqueryParser::CountContext * /*ctx*/) override { }

  virtual void enterSkip_rows(bigqueryParser::Skip_rowsContext * /*ctx*/) override { }
  virtual void exitSkip_rows(bigqueryParser::Skip_rowsContext * /*ctx*/) override { }

  virtual void enterWith_statement(bigqueryParser::With_statementContext * /*ctx*/) override { }
  virtual void exitWith_statement(bigqueryParser::With_statementContext * /*ctx*/) override { }

  virtual void enterCte_expr(bigqueryParser::Cte_exprContext * /*ctx*/) override { }
  virtual void exitCte_expr(bigqueryParser::Cte_exprContext * /*ctx*/) override { }

  virtual void enterName(bigqueryParser::NameContext * /*ctx*/) override { }
  virtual void exitName(bigqueryParser::NameContext * /*ctx*/) override { }

  virtual void enterAlias_name(bigqueryParser::Alias_nameContext * /*ctx*/) override { }
  virtual void exitAlias_name(bigqueryParser::Alias_nameContext * /*ctx*/) override { }

  virtual void enterArray_name(bigqueryParser::Array_nameContext * /*ctx*/) override { }
  virtual void exitArray_name(bigqueryParser::Array_nameContext * /*ctx*/) override { }

  virtual void enterColumn_name(bigqueryParser::Column_nameContext * /*ctx*/) override { }
  virtual void exitColumn_name(bigqueryParser::Column_nameContext * /*ctx*/) override { }

  virtual void enterCte_name(bigqueryParser::Cte_nameContext * /*ctx*/) override { }
  virtual void exitCte_name(bigqueryParser::Cte_nameContext * /*ctx*/) override { }

  virtual void enterDataset_name(bigqueryParser::Dataset_nameContext * /*ctx*/) override { }
  virtual void exitDataset_name(bigqueryParser::Dataset_nameContext * /*ctx*/) override { }

  virtual void enterDatatype_name(bigqueryParser::Datatype_nameContext * /*ctx*/) override { }
  virtual void exitDatatype_name(bigqueryParser::Datatype_nameContext * /*ctx*/) override { }

  virtual void enterFunction_name(bigqueryParser::Function_nameContext * /*ctx*/) override { }
  virtual void exitFunction_name(bigqueryParser::Function_nameContext * /*ctx*/) override { }

  virtual void enterJoin_name(bigqueryParser::Join_nameContext * /*ctx*/) override { }
  virtual void exitJoin_name(bigqueryParser::Join_nameContext * /*ctx*/) override { }

  virtual void enterMember_name(bigqueryParser::Member_nameContext * /*ctx*/) override { }
  virtual void exitMember_name(bigqueryParser::Member_nameContext * /*ctx*/) override { }

  virtual void enterProject_name(bigqueryParser::Project_nameContext * /*ctx*/) override { }
  virtual void exitProject_name(bigqueryParser::Project_nameContext * /*ctx*/) override { }

  virtual void enterStruct_name(bigqueryParser::Struct_nameContext * /*ctx*/) override { }
  virtual void exitStruct_name(bigqueryParser::Struct_nameContext * /*ctx*/) override { }

  virtual void enterTable_name(bigqueryParser::Table_nameContext * /*ctx*/) override { }
  virtual void exitTable_name(bigqueryParser::Table_nameContext * /*ctx*/) override { }

  virtual void enterTable_expr(bigqueryParser::Table_exprContext * /*ctx*/) override { }
  virtual void exitTable_expr(bigqueryParser::Table_exprContext * /*ctx*/) override { }

  virtual void enterNumber(bigqueryParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(bigqueryParser::NumberContext * /*ctx*/) override { }

  virtual void enterInteger_type(bigqueryParser::Integer_typeContext * /*ctx*/) override { }
  virtual void exitInteger_type(bigqueryParser::Integer_typeContext * /*ctx*/) override { }

  virtual void enterFloat_type(bigqueryParser::Float_typeContext * /*ctx*/) override { }
  virtual void exitFloat_type(bigqueryParser::Float_typeContext * /*ctx*/) override { }

  virtual void enterString(bigqueryParser::StringContext * /*ctx*/) override { }
  virtual void exitString(bigqueryParser::StringContext * /*ctx*/) override { }

  virtual void enterQuoted_string(bigqueryParser::Quoted_stringContext * /*ctx*/) override { }
  virtual void exitQuoted_string(bigqueryParser::Quoted_stringContext * /*ctx*/) override { }

  virtual void enterTriple_quoted_string(bigqueryParser::Triple_quoted_stringContext * /*ctx*/) override { }
  virtual void exitTriple_quoted_string(bigqueryParser::Triple_quoted_stringContext * /*ctx*/) override { }

  virtual void enterRaw_string(bigqueryParser::Raw_stringContext * /*ctx*/) override { }
  virtual void exitRaw_string(bigqueryParser::Raw_stringContext * /*ctx*/) override { }

  virtual void enterByte_string(bigqueryParser::Byte_stringContext * /*ctx*/) override { }
  virtual void exitByte_string(bigqueryParser::Byte_stringContext * /*ctx*/) override { }

  virtual void enterRaw_byte_string(bigqueryParser::Raw_byte_stringContext * /*ctx*/) override { }
  virtual void exitRaw_byte_string(bigqueryParser::Raw_byte_stringContext * /*ctx*/) override { }

  virtual void enterSpecial_string(bigqueryParser::Special_stringContext * /*ctx*/) override { }
  virtual void exitSpecial_string(bigqueryParser::Special_stringContext * /*ctx*/) override { }

  virtual void enterKeyword(bigqueryParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(bigqueryParser::KeywordContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

