
// Generated from bigquery.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  bigqueryParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, INT = 25, FLOAT = 26, 
    DIGITS = 27, QUOTE = 28, DQOUTE = 29, ALL = 30, AND = 31, ANY = 32, 
    ARRAY = 33, AS = 34, ASC = 35, ASSERT_ROWS_MODIFIED = 36, AT = 37, BETWEEN = 38, 
    BY = 39, CASE = 40, CAST = 41, COLLATE = 42, CONTAINS = 43, CREATE = 44, 
    CROSS = 45, CUBE = 46, CURRENT = 47, DEFAULT = 48, DEFINE = 49, DESC = 50, 
    DISTINCT = 51, ELSE = 52, END = 53, ENUM = 54, ESCAPE = 55, EXCEPT = 56, 
    EXCLUDE = 57, EXISTS = 58, EXTRACT = 59, FALSE = 60, FETCH = 61, FOLLOWING = 62, 
    FOR = 63, FROM = 64, FULL = 65, GROUP = 66, GROUPING = 67, GROUPS = 68, 
    HASH = 69, HAVING = 70, IF = 71, IGNORE = 72, IN = 73, INNER = 74, INTERSECT = 75, 
    INTERVAL = 76, INTO = 77, IS = 78, JOIN = 79, LATERAL = 80, LEFT = 81, 
    LIKE = 82, LIMIT = 83, LOOKUP = 84, MERGE = 85, NATURAL = 86, NEW = 87, 
    NO = 88, NOT = 89, S_NULL = 90, NULLS = 91, OF = 92, OFFSET = 93, ON = 94, 
    OR = 95, ORDER = 96, ORDINAL = 97, OUTER = 98, OVER = 99, PARTITION = 100, 
    PRECEDING = 101, PROTO = 102, RANGE = 103, RECURSIVE = 104, REPLACE = 105, 
    RESPECT = 106, RIGHT = 107, ROLLUP = 108, ROWS = 109, SAFE_OFFSET = 110, 
    SAFE_ORDINAL = 111, SELECT = 112, SET = 113, SOME = 114, SSTRUCT = 115, 
    SYSTEM = 116, TABLESAMPLE = 117, THEN = 118, TIME = 119, TO = 120, TREAT = 121, 
    TRUE = 122, UNBOUNDED = 123, UNION = 124, UNNEST = 125, USING = 126, 
    WHEN = 127, WHERE = 128, WINDOW = 129, WITH = 130, WITHIN = 131, WS = 132, 
    CMT = 133, M_CMT = 134, QUOTED_STRING = 135, TRIPLE_QUOTED_STRING = 136, 
    RAW_STRING = 137, BYTE_STRING = 138, RAW_BYTE_STRING = 139, ID = 140, 
    RB = 141
  };

  enum {
    RuleParse = 0, RuleQuery_statement = 1, RuleQuery_expr = 2, RuleSelect_statement = 3, 
    RuleExpression_list = 4, RuleStar_expr = 5, RuleAlias_expr = 6, RuleFrom_statement = 7, 
    RuleFrom_item = 8, RuleWhere_statement = 9, RuleGroup_statement = 10, 
    RuleHaving_statement = 11, RuleOrder_clause = 12, RuleLimit_clause = 13, 
    RuleUnary_operator = 14, RuleExpr = 15, RuleCast_expr = 16, RuleColumn_expr = 17, 
    RuleExcept_statement = 18, RuleReplace_statement = 19, RuleJoin_type = 20, 
    RuleOn_clause = 21, RuleSet_op = 22, RuleUsing_clause = 23, RuleSstruct = 24, 
    RuleArray_expr = 25, RuleBool_expression = 26, RuleCount = 27, RuleSkip_rows = 28, 
    RuleWith_statement = 29, RuleCte_expr = 30, RuleName = 31, RuleAlias_name = 32, 
    RuleArray_name = 33, RuleColumn_name = 34, RuleCte_name = 35, RuleDataset_name = 36, 
    RuleDatatype_name = 37, RuleFunction_name = 38, RuleJoin_name = 39, 
    RuleMember_name = 40, RuleProject_name = 41, RuleStruct_name = 42, RuleTable_name = 43, 
    RuleTable_expr = 44, RuleNumber = 45, RuleInteger_type = 46, RuleFloat_type = 47, 
    RuleString = 48, RuleQuoted_string = 49, RuleTriple_quoted_string = 50, 
    RuleRaw_string = 51, RuleByte_string = 52, RuleRaw_byte_string = 53, 
    RuleSpecial_string = 54, RuleKeyword = 55
  };

  bigqueryParser(antlr4::TokenStream *input);
  ~bigqueryParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ParseContext;
  class Query_statementContext;
  class Query_exprContext;
  class Select_statementContext;
  class Expression_listContext;
  class Star_exprContext;
  class Alias_exprContext;
  class From_statementContext;
  class From_itemContext;
  class Where_statementContext;
  class Group_statementContext;
  class Having_statementContext;
  class Order_clauseContext;
  class Limit_clauseContext;
  class Unary_operatorContext;
  class ExprContext;
  class Cast_exprContext;
  class Column_exprContext;
  class Except_statementContext;
  class Replace_statementContext;
  class Join_typeContext;
  class On_clauseContext;
  class Set_opContext;
  class Using_clauseContext;
  class SstructContext;
  class Array_exprContext;
  class Bool_expressionContext;
  class CountContext;
  class Skip_rowsContext;
  class With_statementContext;
  class Cte_exprContext;
  class NameContext;
  class Alias_nameContext;
  class Array_nameContext;
  class Column_nameContext;
  class Cte_nameContext;
  class Dataset_nameContext;
  class Datatype_nameContext;
  class Function_nameContext;
  class Join_nameContext;
  class Member_nameContext;
  class Project_nameContext;
  class Struct_nameContext;
  class Table_nameContext;
  class Table_exprContext;
  class NumberContext;
  class Integer_typeContext;
  class Float_typeContext;
  class StringContext;
  class Quoted_stringContext;
  class Triple_quoted_stringContext;
  class Raw_stringContext;
  class Byte_stringContext;
  class Raw_byte_stringContext;
  class Special_stringContext;
  class KeywordContext; 

  class  ParseContext : public antlr4::ParserRuleContext {
  public:
    ParseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_statementContext *query_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParseContext* parse();

  class  Query_statementContext : public antlr4::ParserRuleContext {
  public:
    Query_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Query_exprContext *query_expr();
    With_statementContext *with_statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Query_statementContext* query_statement();

  class  Query_exprContext : public antlr4::ParserRuleContext {
  public:
    Query_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Select_statementContext *> select_statement();
    Select_statementContext* select_statement(size_t i);
    std::vector<Set_opContext *> set_op();
    Set_opContext* set_op(size_t i);
    Order_clauseContext *order_clause();
    Limit_clauseContext *limit_clause();
    Query_exprContext *query_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Query_exprContext* query_expr();

  class  Select_statementContext : public antlr4::ParserRuleContext {
  public:
    Select_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    Expression_listContext *expression_list();
    From_statementContext *from_statement();
    Where_statementContext *where_statement();
    Group_statementContext *group_statement();
    Having_statementContext *having_statement();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Select_statementContext* select_statement();

  class  Expression_listContext : public antlr4::ParserRuleContext {
  public:
    Expression_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Alias_exprContext *> alias_expr();
    Alias_exprContext* alias_expr(size_t i);
    std::vector<Star_exprContext *> star_expr();
    Star_exprContext* star_expr(size_t i);
    std::vector<Except_statementContext *> except_statement();
    Except_statementContext* except_statement(size_t i);
    std::vector<Replace_statementContext *> replace_statement();
    Replace_statementContext* replace_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Expression_listContext* expression_list();

  class  Star_exprContext : public antlr4::ParserRuleContext {
  public:
    Star_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Star_exprContext* star_expr();

  class  Alias_exprContext : public antlr4::ParserRuleContext {
  public:
    Alias_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    Alias_nameContext *alias_name();
    antlr4::tree::TerminalNode *AS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alias_exprContext* alias_expr();

  class  From_statementContext : public antlr4::ParserRuleContext {
  public:
    From_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    std::vector<From_itemContext *> from_item();
    From_itemContext* from_item(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  From_statementContext* from_statement();

  class  From_itemContext : public antlr4::ParserRuleContext {
  public:
    From_itemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_exprContext *table_expr();
    Alias_nameContext *alias_name();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *TIME();
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);
    antlr4::tree::TerminalNode *OF();
    StringContext *string();
    Query_statementContext *query_statement();
    std::vector<From_itemContext *> from_item();
    From_itemContext* from_item(size_t i);
    antlr4::tree::TerminalNode *JOIN();
    On_clauseContext *on_clause();
    Using_clauseContext *using_clause();
    Join_typeContext *join_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  From_itemContext* from_item();
  From_itemContext* from_item(int precedence);
  class  Where_statementContext : public antlr4::ParserRuleContext {
  public:
    Where_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    Bool_expressionContext *bool_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Where_statementContext* where_statement();

  class  Group_statementContext : public antlr4::ParserRuleContext {
  public:
    Group_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *ROLLUP();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Group_statementContext* group_statement();

  class  Having_statementContext : public antlr4::ParserRuleContext {
  public:
    Having_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    Bool_expressionContext *bool_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Having_statementContext* having_statement();

  class  Order_clauseContext : public antlr4::ParserRuleContext {
  public:
    Order_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASC();
    antlr4::tree::TerminalNode* ASC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DESC();
    antlr4::tree::TerminalNode* DESC(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Order_clauseContext* order_clause();

  class  Limit_clauseContext : public antlr4::ParserRuleContext {
  public:
    Limit_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    CountContext *count();
    antlr4::tree::TerminalNode *OFFSET();
    Skip_rowsContext *skip_rows();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Limit_clauseContext* limit_clause();

  class  Unary_operatorContext : public antlr4::ParserRuleContext {
  public:
    Unary_operatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Unary_operatorContext* unary_operator();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    StringContext *string();
    Array_nameContext *array_name();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *ORDINAL();
    antlr4::tree::TerminalNode *SAFE_OFFSET();
    antlr4::tree::TerminalNode *SAFE_ORDINAL();
    Unary_operatorContext *unary_operator();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FALSE();
    Function_nameContext *function_name();
    Cast_exprContext *cast_expr();
    Column_exprContext *column_expr();
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *S_NULL();
    antlr4::tree::TerminalNode *IN();
    Query_statementContext *query_statement();
    antlr4::tree::TerminalNode *UNNEST();
    Array_exprContext *array_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  Cast_exprContext : public antlr4::ParserRuleContext {
  public:
    Cast_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAST();
    ExprContext *expr();
    antlr4::tree::TerminalNode *AS();
    Datatype_nameContext *datatype_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cast_exprContext* cast_expr();

  class  Column_exprContext : public antlr4::ParserRuleContext {
  public:
    Column_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Column_exprContext *column_expr();
    Column_nameContext *column_name();
    Table_nameContext *table_name();
    Dataset_nameContext *dataset_name();
    Project_nameContext *project_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Column_exprContext* column_expr();

  class  Except_statementContext : public antlr4::ParserRuleContext {
  public:
    Except_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXCEPT();
    std::vector<Column_nameContext *> column_name();
    Column_nameContext* column_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Except_statementContext* except_statement();

  class  Replace_statementContext : public antlr4::ParserRuleContext {
  public:
    Replace_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPLACE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<Alias_nameContext *> alias_name();
    Alias_nameContext* alias_name(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AS();
    antlr4::tree::TerminalNode* AS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Replace_statementContext* replace_statement();

  class  Join_typeContext : public antlr4::ParserRuleContext {
  public:
    Join_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Join_typeContext* join_type();

  class  On_clauseContext : public antlr4::ParserRuleContext {
  public:
    On_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    Bool_expressionContext *bool_expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  On_clauseContext* on_clause();

  class  Set_opContext : public antlr4::ParserRuleContext {
  public:
    Set_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *EXCEPT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Set_opContext* set_op();

  class  Using_clauseContext : public antlr4::ParserRuleContext {
  public:
    Using_clauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USING();
    std::vector<Join_nameContext *> join_name();
    Join_nameContext* join_name(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Using_clauseContext* using_clause();

  class  SstructContext : public antlr4::ParserRuleContext {
  public:
    SstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SSTRUCT();
    Datatype_nameContext *datatype_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SstructContext* sstruct();

  class  Array_exprContext : public antlr4::ParserRuleContext {
  public:
    Array_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    Datatype_nameContext *datatype_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_exprContext* array_expr();

  class  Bool_expressionContext : public antlr4::ParserRuleContext {
  public:
    Bool_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bool_expressionContext* bool_expression();

  class  CountContext : public antlr4::ParserRuleContext {
  public:
    CountContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CountContext* count();

  class  Skip_rowsContext : public antlr4::ParserRuleContext {
  public:
    Skip_rowsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Skip_rowsContext* skip_rows();

  class  With_statementContext : public antlr4::ParserRuleContext {
  public:
    With_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<Cte_exprContext *> cte_expr();
    Cte_exprContext* cte_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  With_statementContext* with_statement();

  class  Cte_exprContext : public antlr4::ParserRuleContext {
  public:
    Cte_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cte_nameContext *cte_name();
    antlr4::tree::TerminalNode *AS();
    Query_exprContext *query_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cte_exprContext* cte_expr();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NameContext* name();

  class  Alias_nameContext : public antlr4::ParserRuleContext {
  public:
    Alias_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Alias_nameContext* alias_name();

  class  Array_nameContext : public antlr4::ParserRuleContext {
  public:
    Array_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Array_nameContext* array_name();

  class  Column_nameContext : public antlr4::ParserRuleContext {
  public:
    Column_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Column_nameContext* column_name();

  class  Cte_nameContext : public antlr4::ParserRuleContext {
  public:
    Cte_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cte_nameContext* cte_name();

  class  Dataset_nameContext : public antlr4::ParserRuleContext {
  public:
    Dataset_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Dataset_nameContext* dataset_name();

  class  Datatype_nameContext : public antlr4::ParserRuleContext {
  public:
    Datatype_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Datatype_nameContext* datatype_name();

  class  Function_nameContext : public antlr4::ParserRuleContext {
  public:
    Function_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_nameContext* function_name();

  class  Join_nameContext : public antlr4::ParserRuleContext {
  public:
    Join_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Join_nameContext* join_name();

  class  Member_nameContext : public antlr4::ParserRuleContext {
  public:
    Member_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Member_nameContext* member_name();

  class  Project_nameContext : public antlr4::ParserRuleContext {
  public:
    Project_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Project_nameContext* project_name();

  class  Struct_nameContext : public antlr4::ParserRuleContext {
  public:
    Struct_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Struct_nameContext* struct_name();

  class  Table_nameContext : public antlr4::ParserRuleContext {
  public:
    Table_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_nameContext* table_name();

  class  Table_exprContext : public antlr4::ParserRuleContext {
  public:
    Table_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Table_nameContext *table_name();
    Dataset_nameContext *dataset_name();
    Project_nameContext *project_name();
    Table_exprContext *table_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Table_exprContext* table_expr();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Integer_typeContext *integer_type();
    Float_typeContext *float_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  Integer_typeContext : public antlr4::ParserRuleContext {
  public:
    Integer_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Integer_typeContext* integer_type();

  class  Float_typeContext : public antlr4::ParserRuleContext {
  public:
    Float_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Float_typeContext* float_type();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Quoted_stringContext *quoted_string();
    Triple_quoted_stringContext *triple_quoted_string();
    Raw_stringContext *raw_string();
    Byte_stringContext *byte_string();
    Raw_byte_stringContext *raw_byte_string();
    Special_stringContext *special_string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringContext* string();

  class  Quoted_stringContext : public antlr4::ParserRuleContext {
  public:
    Quoted_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Quoted_stringContext* quoted_string();

  class  Triple_quoted_stringContext : public antlr4::ParserRuleContext {
  public:
    Triple_quoted_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRIPLE_QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Triple_quoted_stringContext* triple_quoted_string();

  class  Raw_stringContext : public antlr4::ParserRuleContext {
  public:
    Raw_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAW_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_stringContext* raw_string();

  class  Byte_stringContext : public antlr4::ParserRuleContext {
  public:
    Byte_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Byte_stringContext* byte_string();

  class  Raw_byte_stringContext : public antlr4::ParserRuleContext {
  public:
    Raw_byte_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RAW_BYTE_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Raw_byte_stringContext* raw_byte_string();

  class  Special_stringContext : public antlr4::ParserRuleContext {
  public:
    Special_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Datatype_nameContext *datatype_name();
    antlr4::tree::TerminalNode *QUOTED_STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Special_stringContext* special_string();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *ASSERT_ROWS_MODIFIED();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *CONTAINS();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *CUBE();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *ESCAPE();
    antlr4::tree::TerminalNode *EXCEPT();
    antlr4::tree::TerminalNode *EXCLUDE();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FETCH();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *GROUPS();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IGNORE();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INTERSECT();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *LATERAL();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LOOKUP();
    antlr4::tree::TerminalNode *MERGE();
    antlr4::tree::TerminalNode *NATURAL();
    antlr4::tree::TerminalNode *NEW();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *S_NULL();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *ORDINAL();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *PROTO();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *RECURSIVE();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *RESPECT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *ROLLUP();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *SAFE_OFFSET();
    antlr4::tree::TerminalNode *SAFE_ORDINAL();
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *SSTRUCT();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TREAT();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *UNNEST();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *WINDOW();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *WITHIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordContext* keyword();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool from_itemSempred(From_itemContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

