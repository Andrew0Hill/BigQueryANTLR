
// Generated from bigquery.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "bigqueryParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by bigqueryParser.
 */
class  bigqueryListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterParse(bigqueryParser::ParseContext *ctx) = 0;
  virtual void exitParse(bigqueryParser::ParseContext *ctx) = 0;

  virtual void enterQuery_statement(bigqueryParser::Query_statementContext *ctx) = 0;
  virtual void exitQuery_statement(bigqueryParser::Query_statementContext *ctx) = 0;

  virtual void enterQuery_expr(bigqueryParser::Query_exprContext *ctx) = 0;
  virtual void exitQuery_expr(bigqueryParser::Query_exprContext *ctx) = 0;

  virtual void enterSelect_statement(bigqueryParser::Select_statementContext *ctx) = 0;
  virtual void exitSelect_statement(bigqueryParser::Select_statementContext *ctx) = 0;

  virtual void enterExpression_list(bigqueryParser::Expression_listContext *ctx) = 0;
  virtual void exitExpression_list(bigqueryParser::Expression_listContext *ctx) = 0;

  virtual void enterStar_expr(bigqueryParser::Star_exprContext *ctx) = 0;
  virtual void exitStar_expr(bigqueryParser::Star_exprContext *ctx) = 0;

  virtual void enterAlias_expr(bigqueryParser::Alias_exprContext *ctx) = 0;
  virtual void exitAlias_expr(bigqueryParser::Alias_exprContext *ctx) = 0;

  virtual void enterFrom_statement(bigqueryParser::From_statementContext *ctx) = 0;
  virtual void exitFrom_statement(bigqueryParser::From_statementContext *ctx) = 0;

  virtual void enterFrom_item(bigqueryParser::From_itemContext *ctx) = 0;
  virtual void exitFrom_item(bigqueryParser::From_itemContext *ctx) = 0;

  virtual void enterWhere_statement(bigqueryParser::Where_statementContext *ctx) = 0;
  virtual void exitWhere_statement(bigqueryParser::Where_statementContext *ctx) = 0;

  virtual void enterGroup_statement(bigqueryParser::Group_statementContext *ctx) = 0;
  virtual void exitGroup_statement(bigqueryParser::Group_statementContext *ctx) = 0;

  virtual void enterHaving_statement(bigqueryParser::Having_statementContext *ctx) = 0;
  virtual void exitHaving_statement(bigqueryParser::Having_statementContext *ctx) = 0;

  virtual void enterOrder_clause(bigqueryParser::Order_clauseContext *ctx) = 0;
  virtual void exitOrder_clause(bigqueryParser::Order_clauseContext *ctx) = 0;

  virtual void enterLimit_clause(bigqueryParser::Limit_clauseContext *ctx) = 0;
  virtual void exitLimit_clause(bigqueryParser::Limit_clauseContext *ctx) = 0;

  virtual void enterUnary_operator(bigqueryParser::Unary_operatorContext *ctx) = 0;
  virtual void exitUnary_operator(bigqueryParser::Unary_operatorContext *ctx) = 0;

  virtual void enterExpr(bigqueryParser::ExprContext *ctx) = 0;
  virtual void exitExpr(bigqueryParser::ExprContext *ctx) = 0;

  virtual void enterCast_expr(bigqueryParser::Cast_exprContext *ctx) = 0;
  virtual void exitCast_expr(bigqueryParser::Cast_exprContext *ctx) = 0;

  virtual void enterColumn_expr(bigqueryParser::Column_exprContext *ctx) = 0;
  virtual void exitColumn_expr(bigqueryParser::Column_exprContext *ctx) = 0;

  virtual void enterExcept_statement(bigqueryParser::Except_statementContext *ctx) = 0;
  virtual void exitExcept_statement(bigqueryParser::Except_statementContext *ctx) = 0;

  virtual void enterReplace_statement(bigqueryParser::Replace_statementContext *ctx) = 0;
  virtual void exitReplace_statement(bigqueryParser::Replace_statementContext *ctx) = 0;

  virtual void enterJoin_type(bigqueryParser::Join_typeContext *ctx) = 0;
  virtual void exitJoin_type(bigqueryParser::Join_typeContext *ctx) = 0;

  virtual void enterOn_clause(bigqueryParser::On_clauseContext *ctx) = 0;
  virtual void exitOn_clause(bigqueryParser::On_clauseContext *ctx) = 0;

  virtual void enterSet_op(bigqueryParser::Set_opContext *ctx) = 0;
  virtual void exitSet_op(bigqueryParser::Set_opContext *ctx) = 0;

  virtual void enterUsing_clause(bigqueryParser::Using_clauseContext *ctx) = 0;
  virtual void exitUsing_clause(bigqueryParser::Using_clauseContext *ctx) = 0;

  virtual void enterSstruct(bigqueryParser::SstructContext *ctx) = 0;
  virtual void exitSstruct(bigqueryParser::SstructContext *ctx) = 0;

  virtual void enterArray_expr(bigqueryParser::Array_exprContext *ctx) = 0;
  virtual void exitArray_expr(bigqueryParser::Array_exprContext *ctx) = 0;

  virtual void enterBool_expression(bigqueryParser::Bool_expressionContext *ctx) = 0;
  virtual void exitBool_expression(bigqueryParser::Bool_expressionContext *ctx) = 0;

  virtual void enterCount(bigqueryParser::CountContext *ctx) = 0;
  virtual void exitCount(bigqueryParser::CountContext *ctx) = 0;

  virtual void enterSkip_rows(bigqueryParser::Skip_rowsContext *ctx) = 0;
  virtual void exitSkip_rows(bigqueryParser::Skip_rowsContext *ctx) = 0;

  virtual void enterWith_statement(bigqueryParser::With_statementContext *ctx) = 0;
  virtual void exitWith_statement(bigqueryParser::With_statementContext *ctx) = 0;

  virtual void enterCte_expr(bigqueryParser::Cte_exprContext *ctx) = 0;
  virtual void exitCte_expr(bigqueryParser::Cte_exprContext *ctx) = 0;

  virtual void enterName(bigqueryParser::NameContext *ctx) = 0;
  virtual void exitName(bigqueryParser::NameContext *ctx) = 0;

  virtual void enterAlias_name(bigqueryParser::Alias_nameContext *ctx) = 0;
  virtual void exitAlias_name(bigqueryParser::Alias_nameContext *ctx) = 0;

  virtual void enterArray_name(bigqueryParser::Array_nameContext *ctx) = 0;
  virtual void exitArray_name(bigqueryParser::Array_nameContext *ctx) = 0;

  virtual void enterColumn_name(bigqueryParser::Column_nameContext *ctx) = 0;
  virtual void exitColumn_name(bigqueryParser::Column_nameContext *ctx) = 0;

  virtual void enterCte_name(bigqueryParser::Cte_nameContext *ctx) = 0;
  virtual void exitCte_name(bigqueryParser::Cte_nameContext *ctx) = 0;

  virtual void enterDataset_name(bigqueryParser::Dataset_nameContext *ctx) = 0;
  virtual void exitDataset_name(bigqueryParser::Dataset_nameContext *ctx) = 0;

  virtual void enterDatatype_name(bigqueryParser::Datatype_nameContext *ctx) = 0;
  virtual void exitDatatype_name(bigqueryParser::Datatype_nameContext *ctx) = 0;

  virtual void enterFunction_name(bigqueryParser::Function_nameContext *ctx) = 0;
  virtual void exitFunction_name(bigqueryParser::Function_nameContext *ctx) = 0;

  virtual void enterJoin_name(bigqueryParser::Join_nameContext *ctx) = 0;
  virtual void exitJoin_name(bigqueryParser::Join_nameContext *ctx) = 0;

  virtual void enterMember_name(bigqueryParser::Member_nameContext *ctx) = 0;
  virtual void exitMember_name(bigqueryParser::Member_nameContext *ctx) = 0;

  virtual void enterProject_name(bigqueryParser::Project_nameContext *ctx) = 0;
  virtual void exitProject_name(bigqueryParser::Project_nameContext *ctx) = 0;

  virtual void enterStruct_name(bigqueryParser::Struct_nameContext *ctx) = 0;
  virtual void exitStruct_name(bigqueryParser::Struct_nameContext *ctx) = 0;

  virtual void enterTable_name(bigqueryParser::Table_nameContext *ctx) = 0;
  virtual void exitTable_name(bigqueryParser::Table_nameContext *ctx) = 0;

  virtual void enterTable_expr(bigqueryParser::Table_exprContext *ctx) = 0;
  virtual void exitTable_expr(bigqueryParser::Table_exprContext *ctx) = 0;

  virtual void enterNumber(bigqueryParser::NumberContext *ctx) = 0;
  virtual void exitNumber(bigqueryParser::NumberContext *ctx) = 0;

  virtual void enterInteger_type(bigqueryParser::Integer_typeContext *ctx) = 0;
  virtual void exitInteger_type(bigqueryParser::Integer_typeContext *ctx) = 0;

  virtual void enterFloat_type(bigqueryParser::Float_typeContext *ctx) = 0;
  virtual void exitFloat_type(bigqueryParser::Float_typeContext *ctx) = 0;

  virtual void enterString(bigqueryParser::StringContext *ctx) = 0;
  virtual void exitString(bigqueryParser::StringContext *ctx) = 0;

  virtual void enterQuoted_string(bigqueryParser::Quoted_stringContext *ctx) = 0;
  virtual void exitQuoted_string(bigqueryParser::Quoted_stringContext *ctx) = 0;

  virtual void enterTriple_quoted_string(bigqueryParser::Triple_quoted_stringContext *ctx) = 0;
  virtual void exitTriple_quoted_string(bigqueryParser::Triple_quoted_stringContext *ctx) = 0;

  virtual void enterRaw_string(bigqueryParser::Raw_stringContext *ctx) = 0;
  virtual void exitRaw_string(bigqueryParser::Raw_stringContext *ctx) = 0;

  virtual void enterByte_string(bigqueryParser::Byte_stringContext *ctx) = 0;
  virtual void exitByte_string(bigqueryParser::Byte_stringContext *ctx) = 0;

  virtual void enterRaw_byte_string(bigqueryParser::Raw_byte_stringContext *ctx) = 0;
  virtual void exitRaw_byte_string(bigqueryParser::Raw_byte_stringContext *ctx) = 0;

  virtual void enterSpecial_string(bigqueryParser::Special_stringContext *ctx) = 0;
  virtual void exitSpecial_string(bigqueryParser::Special_stringContext *ctx) = 0;

  virtual void enterKeyword(bigqueryParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(bigqueryParser::KeywordContext *ctx) = 0;


};

