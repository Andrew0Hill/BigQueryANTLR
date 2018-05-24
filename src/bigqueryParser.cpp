
// Generated from bigquery.g4 by ANTLR 4.7.1


#include "bigqueryListener.h"

#include "bigqueryParser.h"


using namespace antlrcpp;
using namespace antlr4;

bigqueryParser::bigqueryParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

bigqueryParser::~bigqueryParser() {
  delete _interpreter;
}

std::string bigqueryParser::getGrammarFileName() const {
  return "bigquery.g4";
}

const std::vector<std::string>& bigqueryParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& bigqueryParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ParseContext ------------------------------------------------------------------

bigqueryParser::ParseContext::ParseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Query_statementContext* bigqueryParser::ParseContext::query_statement() {
  return getRuleContext<bigqueryParser::Query_statementContext>(0);
}


size_t bigqueryParser::ParseContext::getRuleIndex() const {
  return bigqueryParser::RuleParse;
}

void bigqueryParser::ParseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParse(this);
}

void bigqueryParser::ParseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParse(this);
}

bigqueryParser::ParseContext* bigqueryParser::parse() {
  ParseContext *_localctx = _tracker.createInstance<ParseContext>(_ctx, getState());
  enterRule(_localctx, 0, bigqueryParser::RuleParse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    query_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_statementContext ------------------------------------------------------------------

bigqueryParser::Query_statementContext::Query_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Query_exprContext* bigqueryParser::Query_statementContext::query_expr() {
  return getRuleContext<bigqueryParser::Query_exprContext>(0);
}

bigqueryParser::With_statementContext* bigqueryParser::Query_statementContext::with_statement() {
  return getRuleContext<bigqueryParser::With_statementContext>(0);
}


size_t bigqueryParser::Query_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleQuery_statement;
}

void bigqueryParser::Query_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_statement(this);
}

void bigqueryParser::Query_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_statement(this);
}

bigqueryParser::Query_statementContext* bigqueryParser::query_statement() {
  Query_statementContext *_localctx = _tracker.createInstance<Query_statementContext>(_ctx, getState());
  enterRule(_localctx, 2, bigqueryParser::RuleQuery_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == bigqueryParser::WITH) {
      setState(114);
      with_statement();
    }
    setState(117);
    query_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Query_exprContext ------------------------------------------------------------------

bigqueryParser::Query_exprContext::Query_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<bigqueryParser::Select_statementContext *> bigqueryParser::Query_exprContext::select_statement() {
  return getRuleContexts<bigqueryParser::Select_statementContext>();
}

bigqueryParser::Select_statementContext* bigqueryParser::Query_exprContext::select_statement(size_t i) {
  return getRuleContext<bigqueryParser::Select_statementContext>(i);
}

std::vector<bigqueryParser::Set_opContext *> bigqueryParser::Query_exprContext::set_op() {
  return getRuleContexts<bigqueryParser::Set_opContext>();
}

bigqueryParser::Set_opContext* bigqueryParser::Query_exprContext::set_op(size_t i) {
  return getRuleContext<bigqueryParser::Set_opContext>(i);
}

bigqueryParser::Order_clauseContext* bigqueryParser::Query_exprContext::order_clause() {
  return getRuleContext<bigqueryParser::Order_clauseContext>(0);
}

bigqueryParser::Limit_clauseContext* bigqueryParser::Query_exprContext::limit_clause() {
  return getRuleContext<bigqueryParser::Limit_clauseContext>(0);
}

bigqueryParser::Query_exprContext* bigqueryParser::Query_exprContext::query_expr() {
  return getRuleContext<bigqueryParser::Query_exprContext>(0);
}


size_t bigqueryParser::Query_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleQuery_expr;
}

void bigqueryParser::Query_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery_expr(this);
}

void bigqueryParser::Query_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery_expr(this);
}

bigqueryParser::Query_exprContext* bigqueryParser::query_expr() {
  Query_exprContext *_localctx = _tracker.createInstance<Query_exprContext>(_ctx, getState());
  enterRule(_localctx, 4, bigqueryParser::RuleQuery_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bigqueryParser::SELECT: {
        enterOuterAlt(_localctx, 1);
        setState(119);
        select_statement();
        setState(125);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(120);
            set_op();
            setState(121);
            select_statement(); 
          }
          setState(127);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        }
        setState(129);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          setState(128);
          order_clause();
          break;
        }

        }
        setState(132);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          setState(131);
          limit_clause();
          break;
        }

        }
        break;
      }

      case bigqueryParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(134);
        match(bigqueryParser::T__0);
        setState(135);
        query_expr();
        setState(136);
        match(bigqueryParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Select_statementContext ------------------------------------------------------------------

bigqueryParser::Select_statementContext::Select_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Select_statementContext::SELECT() {
  return getToken(bigqueryParser::SELECT, 0);
}

bigqueryParser::Expression_listContext* bigqueryParser::Select_statementContext::expression_list() {
  return getRuleContext<bigqueryParser::Expression_listContext>(0);
}

bigqueryParser::From_statementContext* bigqueryParser::Select_statementContext::from_statement() {
  return getRuleContext<bigqueryParser::From_statementContext>(0);
}

bigqueryParser::Where_statementContext* bigqueryParser::Select_statementContext::where_statement() {
  return getRuleContext<bigqueryParser::Where_statementContext>(0);
}

bigqueryParser::Group_statementContext* bigqueryParser::Select_statementContext::group_statement() {
  return getRuleContext<bigqueryParser::Group_statementContext>(0);
}

bigqueryParser::Having_statementContext* bigqueryParser::Select_statementContext::having_statement() {
  return getRuleContext<bigqueryParser::Having_statementContext>(0);
}

tree::TerminalNode* bigqueryParser::Select_statementContext::ALL() {
  return getToken(bigqueryParser::ALL, 0);
}

tree::TerminalNode* bigqueryParser::Select_statementContext::DISTINCT() {
  return getToken(bigqueryParser::DISTINCT, 0);
}


size_t bigqueryParser::Select_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleSelect_statement;
}

void bigqueryParser::Select_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelect_statement(this);
}

void bigqueryParser::Select_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelect_statement(this);
}

bigqueryParser::Select_statementContext* bigqueryParser::select_statement() {
  Select_statementContext *_localctx = _tracker.createInstance<Select_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, bigqueryParser::RuleSelect_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(bigqueryParser::SELECT);
    setState(142);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(141);
      _la = _input->LA(1);
      if (!(_la == bigqueryParser::ALL

      || _la == bigqueryParser::DISTINCT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
    setState(144);
    expression_list();
    setState(146);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(145);
      from_statement();
      break;
    }

    }
    setState(149);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(148);
      where_statement();
      break;
    }

    }
    setState(152);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(151);
      group_statement();
      break;
    }

    }
    setState(155);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(154);
      having_statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_listContext ------------------------------------------------------------------

bigqueryParser::Expression_listContext::Expression_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<bigqueryParser::Alias_exprContext *> bigqueryParser::Expression_listContext::alias_expr() {
  return getRuleContexts<bigqueryParser::Alias_exprContext>();
}

bigqueryParser::Alias_exprContext* bigqueryParser::Expression_listContext::alias_expr(size_t i) {
  return getRuleContext<bigqueryParser::Alias_exprContext>(i);
}

std::vector<bigqueryParser::Star_exprContext *> bigqueryParser::Expression_listContext::star_expr() {
  return getRuleContexts<bigqueryParser::Star_exprContext>();
}

bigqueryParser::Star_exprContext* bigqueryParser::Expression_listContext::star_expr(size_t i) {
  return getRuleContext<bigqueryParser::Star_exprContext>(i);
}

std::vector<bigqueryParser::Except_statementContext *> bigqueryParser::Expression_listContext::except_statement() {
  return getRuleContexts<bigqueryParser::Except_statementContext>();
}

bigqueryParser::Except_statementContext* bigqueryParser::Expression_listContext::except_statement(size_t i) {
  return getRuleContext<bigqueryParser::Except_statementContext>(i);
}

std::vector<bigqueryParser::Replace_statementContext *> bigqueryParser::Expression_listContext::replace_statement() {
  return getRuleContexts<bigqueryParser::Replace_statementContext>();
}

bigqueryParser::Replace_statementContext* bigqueryParser::Expression_listContext::replace_statement(size_t i) {
  return getRuleContext<bigqueryParser::Replace_statementContext>(i);
}


size_t bigqueryParser::Expression_listContext::getRuleIndex() const {
  return bigqueryParser::RuleExpression_list;
}

void bigqueryParser::Expression_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_list(this);
}

void bigqueryParser::Expression_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_list(this);
}

bigqueryParser::Expression_listContext* bigqueryParser::expression_list() {
  Expression_listContext *_localctx = _tracker.createInstance<Expression_listContext>(_ctx, getState());
  enterRule(_localctx, 8, bigqueryParser::RuleExpression_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(157);
      star_expr();
      setState(159);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(158);
        except_statement();
        break;
      }

      }
      setState(162);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(161);
        replace_statement();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(164);
      alias_expr();
      break;
    }

    }
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(167);
        match(bigqueryParser::T__2);
        setState(176);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(168);
          star_expr();
          setState(170);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
          case 1: {
            setState(169);
            except_statement();
            break;
          }

          }
          setState(173);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
          case 1: {
            setState(172);
            replace_statement();
            break;
          }

          }
          break;
        }

        case 2: {
          setState(175);
          alias_expr();
          break;
        }

        } 
      }
      setState(182);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Star_exprContext ------------------------------------------------------------------

bigqueryParser::Star_exprContext::Star_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::ExprContext* bigqueryParser::Star_exprContext::expr() {
  return getRuleContext<bigqueryParser::ExprContext>(0);
}


size_t bigqueryParser::Star_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleStar_expr;
}

void bigqueryParser::Star_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStar_expr(this);
}

void bigqueryParser::Star_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStar_expr(this);
}

bigqueryParser::Star_exprContext* bigqueryParser::star_expr() {
  Star_exprContext *_localctx = _tracker.createInstance<Star_exprContext>(_ctx, getState());
  enterRule(_localctx, 10, bigqueryParser::RuleStar_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bigqueryParser::T__0)
      | (1ULL << bigqueryParser::T__5)
      | (1ULL << bigqueryParser::T__6)
      | (1ULL << bigqueryParser::T__23)
      | (1ULL << bigqueryParser::INT)
      | (1ULL << bigqueryParser::FLOAT)
      | (1ULL << bigqueryParser::QUOTE)
      | (1ULL << bigqueryParser::DQOUTE)
      | (1ULL << bigqueryParser::ALL)
      | (1ULL << bigqueryParser::AND)
      | (1ULL << bigqueryParser::ANY)
      | (1ULL << bigqueryParser::ARRAY)
      | (1ULL << bigqueryParser::AS)
      | (1ULL << bigqueryParser::ASC)
      | (1ULL << bigqueryParser::ASSERT_ROWS_MODIFIED)
      | (1ULL << bigqueryParser::AT)
      | (1ULL << bigqueryParser::BETWEEN)
      | (1ULL << bigqueryParser::BY)
      | (1ULL << bigqueryParser::CASE)
      | (1ULL << bigqueryParser::CAST)
      | (1ULL << bigqueryParser::COLLATE)
      | (1ULL << bigqueryParser::CONTAINS)
      | (1ULL << bigqueryParser::CREATE)
      | (1ULL << bigqueryParser::CROSS)
      | (1ULL << bigqueryParser::CUBE)
      | (1ULL << bigqueryParser::CURRENT)
      | (1ULL << bigqueryParser::DEFAULT)
      | (1ULL << bigqueryParser::DEFINE)
      | (1ULL << bigqueryParser::DESC)
      | (1ULL << bigqueryParser::DISTINCT)
      | (1ULL << bigqueryParser::ELSE)
      | (1ULL << bigqueryParser::END)
      | (1ULL << bigqueryParser::ENUM)
      | (1ULL << bigqueryParser::ESCAPE)
      | (1ULL << bigqueryParser::EXCEPT)
      | (1ULL << bigqueryParser::EXCLUDE)
      | (1ULL << bigqueryParser::EXISTS)
      | (1ULL << bigqueryParser::EXTRACT)
      | (1ULL << bigqueryParser::FALSE)
      | (1ULL << bigqueryParser::FETCH)
      | (1ULL << bigqueryParser::FOLLOWING)
      | (1ULL << bigqueryParser::FOR))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (bigqueryParser::FROM - 64))
      | (1ULL << (bigqueryParser::FULL - 64))
      | (1ULL << (bigqueryParser::GROUP - 64))
      | (1ULL << (bigqueryParser::GROUPING - 64))
      | (1ULL << (bigqueryParser::GROUPS - 64))
      | (1ULL << (bigqueryParser::HASH - 64))
      | (1ULL << (bigqueryParser::HAVING - 64))
      | (1ULL << (bigqueryParser::IF - 64))
      | (1ULL << (bigqueryParser::IGNORE - 64))
      | (1ULL << (bigqueryParser::IN - 64))
      | (1ULL << (bigqueryParser::INNER - 64))
      | (1ULL << (bigqueryParser::INTERSECT - 64))
      | (1ULL << (bigqueryParser::INTERVAL - 64))
      | (1ULL << (bigqueryParser::INTO - 64))
      | (1ULL << (bigqueryParser::IS - 64))
      | (1ULL << (bigqueryParser::JOIN - 64))
      | (1ULL << (bigqueryParser::LATERAL - 64))
      | (1ULL << (bigqueryParser::LEFT - 64))
      | (1ULL << (bigqueryParser::LIKE - 64))
      | (1ULL << (bigqueryParser::LIMIT - 64))
      | (1ULL << (bigqueryParser::LOOKUP - 64))
      | (1ULL << (bigqueryParser::MERGE - 64))
      | (1ULL << (bigqueryParser::NATURAL - 64))
      | (1ULL << (bigqueryParser::NEW - 64))
      | (1ULL << (bigqueryParser::NO - 64))
      | (1ULL << (bigqueryParser::NOT - 64))
      | (1ULL << (bigqueryParser::S_NULL - 64))
      | (1ULL << (bigqueryParser::NULLS - 64))
      | (1ULL << (bigqueryParser::OF - 64))
      | (1ULL << (bigqueryParser::OFFSET - 64))
      | (1ULL << (bigqueryParser::ON - 64))
      | (1ULL << (bigqueryParser::OR - 64))
      | (1ULL << (bigqueryParser::ORDER - 64))
      | (1ULL << (bigqueryParser::ORDINAL - 64))
      | (1ULL << (bigqueryParser::OUTER - 64))
      | (1ULL << (bigqueryParser::OVER - 64))
      | (1ULL << (bigqueryParser::PARTITION - 64))
      | (1ULL << (bigqueryParser::PRECEDING - 64))
      | (1ULL << (bigqueryParser::PROTO - 64))
      | (1ULL << (bigqueryParser::RANGE - 64))
      | (1ULL << (bigqueryParser::RECURSIVE - 64))
      | (1ULL << (bigqueryParser::REPLACE - 64))
      | (1ULL << (bigqueryParser::RESPECT - 64))
      | (1ULL << (bigqueryParser::RIGHT - 64))
      | (1ULL << (bigqueryParser::ROLLUP - 64))
      | (1ULL << (bigqueryParser::ROWS - 64))
      | (1ULL << (bigqueryParser::SAFE_OFFSET - 64))
      | (1ULL << (bigqueryParser::SAFE_ORDINAL - 64))
      | (1ULL << (bigqueryParser::SELECT - 64))
      | (1ULL << (bigqueryParser::SET - 64))
      | (1ULL << (bigqueryParser::SOME - 64))
      | (1ULL << (bigqueryParser::SSTRUCT - 64))
      | (1ULL << (bigqueryParser::SYSTEM - 64))
      | (1ULL << (bigqueryParser::TABLESAMPLE - 64))
      | (1ULL << (bigqueryParser::THEN - 64))
      | (1ULL << (bigqueryParser::TIME - 64))
      | (1ULL << (bigqueryParser::TO - 64))
      | (1ULL << (bigqueryParser::TREAT - 64))
      | (1ULL << (bigqueryParser::TRUE - 64))
      | (1ULL << (bigqueryParser::UNBOUNDED - 64))
      | (1ULL << (bigqueryParser::UNION - 64))
      | (1ULL << (bigqueryParser::UNNEST - 64))
      | (1ULL << (bigqueryParser::USING - 64))
      | (1ULL << (bigqueryParser::WHEN - 64)))) != 0) || ((((_la - 128) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 128)) & ((1ULL << (bigqueryParser::WHERE - 128))
      | (1ULL << (bigqueryParser::WINDOW - 128))
      | (1ULL << (bigqueryParser::WITH - 128))
      | (1ULL << (bigqueryParser::WITHIN - 128))
      | (1ULL << (bigqueryParser::QUOTED_STRING - 128))
      | (1ULL << (bigqueryParser::TRIPLE_QUOTED_STRING - 128))
      | (1ULL << (bigqueryParser::RAW_STRING - 128))
      | (1ULL << (bigqueryParser::BYTE_STRING - 128))
      | (1ULL << (bigqueryParser::RAW_BYTE_STRING - 128))
      | (1ULL << (bigqueryParser::ID - 128)))) != 0)) {
      setState(183);
      expr(0);
      setState(184);
      match(bigqueryParser::T__3);
    }
    setState(188);
    match(bigqueryParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alias_exprContext ------------------------------------------------------------------

bigqueryParser::Alias_exprContext::Alias_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::ExprContext* bigqueryParser::Alias_exprContext::expr() {
  return getRuleContext<bigqueryParser::ExprContext>(0);
}

bigqueryParser::Alias_nameContext* bigqueryParser::Alias_exprContext::alias_name() {
  return getRuleContext<bigqueryParser::Alias_nameContext>(0);
}

tree::TerminalNode* bigqueryParser::Alias_exprContext::AS() {
  return getToken(bigqueryParser::AS, 0);
}


size_t bigqueryParser::Alias_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleAlias_expr;
}

void bigqueryParser::Alias_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlias_expr(this);
}

void bigqueryParser::Alias_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlias_expr(this);
}

bigqueryParser::Alias_exprContext* bigqueryParser::alias_expr() {
  Alias_exprContext *_localctx = _tracker.createInstance<Alias_exprContext>(_ctx, getState());
  enterRule(_localctx, 12, bigqueryParser::RuleAlias_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    expr(0);
    setState(195);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(192);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == bigqueryParser::AS) {
        setState(191);
        match(bigqueryParser::AS);
      }
      setState(194);
      alias_name();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- From_statementContext ------------------------------------------------------------------

bigqueryParser::From_statementContext::From_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::From_statementContext::FROM() {
  return getToken(bigqueryParser::FROM, 0);
}

std::vector<bigqueryParser::From_itemContext *> bigqueryParser::From_statementContext::from_item() {
  return getRuleContexts<bigqueryParser::From_itemContext>();
}

bigqueryParser::From_itemContext* bigqueryParser::From_statementContext::from_item(size_t i) {
  return getRuleContext<bigqueryParser::From_itemContext>(i);
}


size_t bigqueryParser::From_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleFrom_statement;
}

void bigqueryParser::From_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrom_statement(this);
}

void bigqueryParser::From_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrom_statement(this);
}

bigqueryParser::From_statementContext* bigqueryParser::from_statement() {
  From_statementContext *_localctx = _tracker.createInstance<From_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, bigqueryParser::RuleFrom_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(bigqueryParser::FROM);
    setState(198);
    from_item(0);
    setState(203);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(199);
        match(bigqueryParser::T__2);
        setState(200);
        from_item(0); 
      }
      setState(205);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- From_itemContext ------------------------------------------------------------------

bigqueryParser::From_itemContext::From_itemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Table_exprContext* bigqueryParser::From_itemContext::table_expr() {
  return getRuleContext<bigqueryParser::Table_exprContext>(0);
}

bigqueryParser::Alias_nameContext* bigqueryParser::From_itemContext::alias_name() {
  return getRuleContext<bigqueryParser::Alias_nameContext>(0);
}

tree::TerminalNode* bigqueryParser::From_itemContext::FOR() {
  return getToken(bigqueryParser::FOR, 0);
}

tree::TerminalNode* bigqueryParser::From_itemContext::SYSTEM() {
  return getToken(bigqueryParser::SYSTEM, 0);
}

tree::TerminalNode* bigqueryParser::From_itemContext::TIME() {
  return getToken(bigqueryParser::TIME, 0);
}

std::vector<tree::TerminalNode *> bigqueryParser::From_itemContext::AS() {
  return getTokens(bigqueryParser::AS);
}

tree::TerminalNode* bigqueryParser::From_itemContext::AS(size_t i) {
  return getToken(bigqueryParser::AS, i);
}

tree::TerminalNode* bigqueryParser::From_itemContext::OF() {
  return getToken(bigqueryParser::OF, 0);
}

bigqueryParser::StringContext* bigqueryParser::From_itemContext::string() {
  return getRuleContext<bigqueryParser::StringContext>(0);
}

bigqueryParser::Query_statementContext* bigqueryParser::From_itemContext::query_statement() {
  return getRuleContext<bigqueryParser::Query_statementContext>(0);
}

std::vector<bigqueryParser::From_itemContext *> bigqueryParser::From_itemContext::from_item() {
  return getRuleContexts<bigqueryParser::From_itemContext>();
}

bigqueryParser::From_itemContext* bigqueryParser::From_itemContext::from_item(size_t i) {
  return getRuleContext<bigqueryParser::From_itemContext>(i);
}

tree::TerminalNode* bigqueryParser::From_itemContext::JOIN() {
  return getToken(bigqueryParser::JOIN, 0);
}

bigqueryParser::On_clauseContext* bigqueryParser::From_itemContext::on_clause() {
  return getRuleContext<bigqueryParser::On_clauseContext>(0);
}

bigqueryParser::Using_clauseContext* bigqueryParser::From_itemContext::using_clause() {
  return getRuleContext<bigqueryParser::Using_clauseContext>(0);
}

bigqueryParser::Join_typeContext* bigqueryParser::From_itemContext::join_type() {
  return getRuleContext<bigqueryParser::Join_typeContext>(0);
}


size_t bigqueryParser::From_itemContext::getRuleIndex() const {
  return bigqueryParser::RuleFrom_item;
}

void bigqueryParser::From_itemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFrom_item(this);
}

void bigqueryParser::From_itemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFrom_item(this);
}


bigqueryParser::From_itemContext* bigqueryParser::from_item() {
   return from_item(0);
}

bigqueryParser::From_itemContext* bigqueryParser::from_item(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  bigqueryParser::From_itemContext *_localctx = _tracker.createInstance<From_itemContext>(_ctx, parentState);
  bigqueryParser::From_itemContext *previousContext = _localctx;
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, bigqueryParser::RuleFrom_item, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(231);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(207);
      table_expr();
      setState(212);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(209);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == bigqueryParser::AS) {
          setState(208);
          match(bigqueryParser::AS);
        }
        setState(211);
        alias_name();
        break;
      }

      }
      setState(220);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(214);
        match(bigqueryParser::FOR);
        setState(215);
        match(bigqueryParser::SYSTEM);
        setState(216);
        match(bigqueryParser::TIME);
        setState(217);
        match(bigqueryParser::AS);
        setState(218);
        match(bigqueryParser::OF);
        setState(219);
        string();
        break;
      }

      }
      break;
    }

    case 2: {
      setState(222);
      match(bigqueryParser::T__0);
      setState(223);
      query_statement();
      setState(224);
      match(bigqueryParser::T__1);
      setState(229);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(226);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == bigqueryParser::AS) {
          setState(225);
          match(bigqueryParser::AS);
        }
        setState(228);
        alias_name();
        break;
      }

      }
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(245);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<From_itemContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleFrom_item);
        setState(233);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(235);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 45) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 45)) & ((1ULL << (bigqueryParser::CROSS - 45))
          | (1ULL << (bigqueryParser::FULL - 45))
          | (1ULL << (bigqueryParser::INNER - 45))
          | (1ULL << (bigqueryParser::LEFT - 45))
          | (1ULL << (bigqueryParser::RIGHT - 45)))) != 0)) {
          setState(234);
          join_type();
        }
        setState(237);
        match(bigqueryParser::JOIN);
        setState(238);
        from_item(0);
        setState(241);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case bigqueryParser::ON: {
            setState(239);
            on_clause();
            break;
          }

          case bigqueryParser::USING: {
            setState(240);
            using_clause();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(247);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Where_statementContext ------------------------------------------------------------------

bigqueryParser::Where_statementContext::Where_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Where_statementContext::WHERE() {
  return getToken(bigqueryParser::WHERE, 0);
}

bigqueryParser::Bool_expressionContext* bigqueryParser::Where_statementContext::bool_expression() {
  return getRuleContext<bigqueryParser::Bool_expressionContext>(0);
}


size_t bigqueryParser::Where_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleWhere_statement;
}

void bigqueryParser::Where_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhere_statement(this);
}

void bigqueryParser::Where_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhere_statement(this);
}

bigqueryParser::Where_statementContext* bigqueryParser::where_statement() {
  Where_statementContext *_localctx = _tracker.createInstance<Where_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, bigqueryParser::RuleWhere_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(bigqueryParser::WHERE);
    setState(249);
    bool_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Group_statementContext ------------------------------------------------------------------

bigqueryParser::Group_statementContext::Group_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Group_statementContext::GROUP() {
  return getToken(bigqueryParser::GROUP, 0);
}

tree::TerminalNode* bigqueryParser::Group_statementContext::BY() {
  return getToken(bigqueryParser::BY, 0);
}

tree::TerminalNode* bigqueryParser::Group_statementContext::ROLLUP() {
  return getToken(bigqueryParser::ROLLUP, 0);
}

std::vector<bigqueryParser::ExprContext *> bigqueryParser::Group_statementContext::expr() {
  return getRuleContexts<bigqueryParser::ExprContext>();
}

bigqueryParser::ExprContext* bigqueryParser::Group_statementContext::expr(size_t i) {
  return getRuleContext<bigqueryParser::ExprContext>(i);
}


size_t bigqueryParser::Group_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleGroup_statement;
}

void bigqueryParser::Group_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroup_statement(this);
}

void bigqueryParser::Group_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroup_statement(this);
}

bigqueryParser::Group_statementContext* bigqueryParser::group_statement() {
  Group_statementContext *_localctx = _tracker.createInstance<Group_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, bigqueryParser::RuleGroup_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(bigqueryParser::GROUP);
    setState(252);
    match(bigqueryParser::BY);
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(253);
      expr(0);
      setState(258);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(254);
          match(bigqueryParser::T__2);
          setState(255);
          expr(0); 
        }
        setState(260);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      }
      break;
    }

    case 2: {
      setState(261);
      match(bigqueryParser::ROLLUP);
      setState(262);
      match(bigqueryParser::T__0);
      setState(263);
      expr(0);
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == bigqueryParser::T__2) {
        setState(264);
        match(bigqueryParser::T__2);
        setState(265);
        expr(0);
        setState(270);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(271);
      match(bigqueryParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Having_statementContext ------------------------------------------------------------------

bigqueryParser::Having_statementContext::Having_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Having_statementContext::HAVING() {
  return getToken(bigqueryParser::HAVING, 0);
}

bigqueryParser::Bool_expressionContext* bigqueryParser::Having_statementContext::bool_expression() {
  return getRuleContext<bigqueryParser::Bool_expressionContext>(0);
}


size_t bigqueryParser::Having_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleHaving_statement;
}

void bigqueryParser::Having_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHaving_statement(this);
}

void bigqueryParser::Having_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHaving_statement(this);
}

bigqueryParser::Having_statementContext* bigqueryParser::having_statement() {
  Having_statementContext *_localctx = _tracker.createInstance<Having_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, bigqueryParser::RuleHaving_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(bigqueryParser::HAVING);
    setState(276);
    bool_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Order_clauseContext ------------------------------------------------------------------

bigqueryParser::Order_clauseContext::Order_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Order_clauseContext::ORDER() {
  return getToken(bigqueryParser::ORDER, 0);
}

tree::TerminalNode* bigqueryParser::Order_clauseContext::BY() {
  return getToken(bigqueryParser::BY, 0);
}

std::vector<bigqueryParser::ExprContext *> bigqueryParser::Order_clauseContext::expr() {
  return getRuleContexts<bigqueryParser::ExprContext>();
}

bigqueryParser::ExprContext* bigqueryParser::Order_clauseContext::expr(size_t i) {
  return getRuleContext<bigqueryParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> bigqueryParser::Order_clauseContext::ASC() {
  return getTokens(bigqueryParser::ASC);
}

tree::TerminalNode* bigqueryParser::Order_clauseContext::ASC(size_t i) {
  return getToken(bigqueryParser::ASC, i);
}

std::vector<tree::TerminalNode *> bigqueryParser::Order_clauseContext::DESC() {
  return getTokens(bigqueryParser::DESC);
}

tree::TerminalNode* bigqueryParser::Order_clauseContext::DESC(size_t i) {
  return getToken(bigqueryParser::DESC, i);
}


size_t bigqueryParser::Order_clauseContext::getRuleIndex() const {
  return bigqueryParser::RuleOrder_clause;
}

void bigqueryParser::Order_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrder_clause(this);
}

void bigqueryParser::Order_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrder_clause(this);
}

bigqueryParser::Order_clauseContext* bigqueryParser::order_clause() {
  Order_clauseContext *_localctx = _tracker.createInstance<Order_clauseContext>(_ctx, getState());
  enterRule(_localctx, 24, bigqueryParser::RuleOrder_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(bigqueryParser::ORDER);
    setState(279);
    match(bigqueryParser::BY);
    setState(280);
    expr(0);
    setState(282);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(281);
      _la = _input->LA(1);
      if (!(_la == bigqueryParser::ASC

      || _la == bigqueryParser::DESC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    }
    setState(291);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(284);
        match(bigqueryParser::T__2);
        setState(285);
        expr(0);
        setState(287);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
        case 1: {
          setState(286);
          _la = _input->LA(1);
          if (!(_la == bigqueryParser::ASC

          || _la == bigqueryParser::DESC)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        } 
      }
      setState(293);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Limit_clauseContext ------------------------------------------------------------------

bigqueryParser::Limit_clauseContext::Limit_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Limit_clauseContext::LIMIT() {
  return getToken(bigqueryParser::LIMIT, 0);
}

bigqueryParser::CountContext* bigqueryParser::Limit_clauseContext::count() {
  return getRuleContext<bigqueryParser::CountContext>(0);
}

tree::TerminalNode* bigqueryParser::Limit_clauseContext::OFFSET() {
  return getToken(bigqueryParser::OFFSET, 0);
}

bigqueryParser::Skip_rowsContext* bigqueryParser::Limit_clauseContext::skip_rows() {
  return getRuleContext<bigqueryParser::Skip_rowsContext>(0);
}


size_t bigqueryParser::Limit_clauseContext::getRuleIndex() const {
  return bigqueryParser::RuleLimit_clause;
}

void bigqueryParser::Limit_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimit_clause(this);
}

void bigqueryParser::Limit_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimit_clause(this);
}

bigqueryParser::Limit_clauseContext* bigqueryParser::limit_clause() {
  Limit_clauseContext *_localctx = _tracker.createInstance<Limit_clauseContext>(_ctx, getState());
  enterRule(_localctx, 26, bigqueryParser::RuleLimit_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(bigqueryParser::LIMIT);
    setState(295);
    count();
    setState(298);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(296);
      match(bigqueryParser::OFFSET);
      setState(297);
      skip_rows();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_operatorContext ------------------------------------------------------------------

bigqueryParser::Unary_operatorContext::Unary_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Unary_operatorContext::NOT() {
  return getToken(bigqueryParser::NOT, 0);
}


size_t bigqueryParser::Unary_operatorContext::getRuleIndex() const {
  return bigqueryParser::RuleUnary_operator;
}

void bigqueryParser::Unary_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_operator(this);
}

void bigqueryParser::Unary_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_operator(this);
}

bigqueryParser::Unary_operatorContext* bigqueryParser::unary_operator() {
  Unary_operatorContext *_localctx = _tracker.createInstance<Unary_operatorContext>(_ctx, getState());
  enterRule(_localctx, 28, bigqueryParser::RuleUnary_operator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    _la = _input->LA(1);
    if (!(_la == bigqueryParser::T__5

    || _la == bigqueryParser::T__6 || _la == bigqueryParser::NOT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

bigqueryParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NumberContext* bigqueryParser::ExprContext::number() {
  return getRuleContext<bigqueryParser::NumberContext>(0);
}

bigqueryParser::StringContext* bigqueryParser::ExprContext::string() {
  return getRuleContext<bigqueryParser::StringContext>(0);
}

bigqueryParser::Array_nameContext* bigqueryParser::ExprContext::array_name() {
  return getRuleContext<bigqueryParser::Array_nameContext>(0);
}

std::vector<bigqueryParser::ExprContext *> bigqueryParser::ExprContext::expr() {
  return getRuleContexts<bigqueryParser::ExprContext>();
}

bigqueryParser::ExprContext* bigqueryParser::ExprContext::expr(size_t i) {
  return getRuleContext<bigqueryParser::ExprContext>(i);
}

tree::TerminalNode* bigqueryParser::ExprContext::OFFSET() {
  return getToken(bigqueryParser::OFFSET, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::ORDINAL() {
  return getToken(bigqueryParser::ORDINAL, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::SAFE_OFFSET() {
  return getToken(bigqueryParser::SAFE_OFFSET, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::SAFE_ORDINAL() {
  return getToken(bigqueryParser::SAFE_ORDINAL, 0);
}

bigqueryParser::Unary_operatorContext* bigqueryParser::ExprContext::unary_operator() {
  return getRuleContext<bigqueryParser::Unary_operatorContext>(0);
}

tree::TerminalNode* bigqueryParser::ExprContext::IS() {
  return getToken(bigqueryParser::IS, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::TRUE() {
  return getToken(bigqueryParser::TRUE, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::NOT() {
  return getToken(bigqueryParser::NOT, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::FALSE() {
  return getToken(bigqueryParser::FALSE, 0);
}

bigqueryParser::Function_nameContext* bigqueryParser::ExprContext::function_name() {
  return getRuleContext<bigqueryParser::Function_nameContext>(0);
}

bigqueryParser::Cast_exprContext* bigqueryParser::ExprContext::cast_expr() {
  return getRuleContext<bigqueryParser::Cast_exprContext>(0);
}

bigqueryParser::Column_exprContext* bigqueryParser::ExprContext::column_expr() {
  return getRuleContext<bigqueryParser::Column_exprContext>(0);
}

bigqueryParser::KeywordContext* bigqueryParser::ExprContext::keyword() {
  return getRuleContext<bigqueryParser::KeywordContext>(0);
}

tree::TerminalNode* bigqueryParser::ExprContext::LIKE() {
  return getToken(bigqueryParser::LIKE, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::BETWEEN() {
  return getToken(bigqueryParser::BETWEEN, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::AND() {
  return getToken(bigqueryParser::AND, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::OR() {
  return getToken(bigqueryParser::OR, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::S_NULL() {
  return getToken(bigqueryParser::S_NULL, 0);
}

tree::TerminalNode* bigqueryParser::ExprContext::IN() {
  return getToken(bigqueryParser::IN, 0);
}

bigqueryParser::Query_statementContext* bigqueryParser::ExprContext::query_statement() {
  return getRuleContext<bigqueryParser::Query_statementContext>(0);
}

tree::TerminalNode* bigqueryParser::ExprContext::UNNEST() {
  return getToken(bigqueryParser::UNNEST, 0);
}

bigqueryParser::Array_exprContext* bigqueryParser::ExprContext::array_expr() {
  return getRuleContext<bigqueryParser::Array_exprContext>(0);
}


size_t bigqueryParser::ExprContext::getRuleIndex() const {
  return bigqueryParser::RuleExpr;
}

void bigqueryParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void bigqueryParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


bigqueryParser::ExprContext* bigqueryParser::expr() {
   return expr(0);
}

bigqueryParser::ExprContext* bigqueryParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  bigqueryParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  bigqueryParser::ExprContext *previousContext = _localctx;
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, bigqueryParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(348);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(303);
      number();
      break;
    }

    case 2: {
      setState(304);
      string();
      break;
    }

    case 3: {
      setState(305);
      array_name();
      setState(306);
      match(bigqueryParser::T__7);
      setState(307);
      _la = _input->LA(1);
      if (!(((((_la - 93) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 93)) & ((1ULL << (bigqueryParser::OFFSET - 93))
        | (1ULL << (bigqueryParser::ORDINAL - 93))
        | (1ULL << (bigqueryParser::SAFE_OFFSET - 93))
        | (1ULL << (bigqueryParser::SAFE_ORDINAL - 93)))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(308);
      match(bigqueryParser::T__0);
      setState(309);
      expr(0);
      setState(310);
      match(bigqueryParser::T__1);
      setState(311);
      match(bigqueryParser::T__8);
      break;
    }

    case 4: {
      setState(313);
      unary_operator();
      setState(314);
      expr(20);
      break;
    }

    case 5: {
      setState(316);
      match(bigqueryParser::IS);
      setState(318);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == bigqueryParser::NOT) {
        setState(317);
        match(bigqueryParser::NOT);
      }
      setState(320);
      match(bigqueryParser::TRUE);
      break;
    }

    case 6: {
      setState(321);
      match(bigqueryParser::IS);
      setState(323);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == bigqueryParser::NOT) {
        setState(322);
        match(bigqueryParser::NOT);
      }
      setState(325);
      match(bigqueryParser::FALSE);
      break;
    }

    case 7: {
      setState(326);
      function_name();
      setState(327);
      match(bigqueryParser::T__0);
      setState(337);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case bigqueryParser::T__0:
        case bigqueryParser::T__5:
        case bigqueryParser::T__6:
        case bigqueryParser::T__23:
        case bigqueryParser::INT:
        case bigqueryParser::FLOAT:
        case bigqueryParser::QUOTE:
        case bigqueryParser::DQOUTE:
        case bigqueryParser::ALL:
        case bigqueryParser::AND:
        case bigqueryParser::ANY:
        case bigqueryParser::ARRAY:
        case bigqueryParser::AS:
        case bigqueryParser::ASC:
        case bigqueryParser::ASSERT_ROWS_MODIFIED:
        case bigqueryParser::AT:
        case bigqueryParser::BETWEEN:
        case bigqueryParser::BY:
        case bigqueryParser::CASE:
        case bigqueryParser::CAST:
        case bigqueryParser::COLLATE:
        case bigqueryParser::CONTAINS:
        case bigqueryParser::CREATE:
        case bigqueryParser::CROSS:
        case bigqueryParser::CUBE:
        case bigqueryParser::CURRENT:
        case bigqueryParser::DEFAULT:
        case bigqueryParser::DEFINE:
        case bigqueryParser::DESC:
        case bigqueryParser::DISTINCT:
        case bigqueryParser::ELSE:
        case bigqueryParser::END:
        case bigqueryParser::ENUM:
        case bigqueryParser::ESCAPE:
        case bigqueryParser::EXCEPT:
        case bigqueryParser::EXCLUDE:
        case bigqueryParser::EXISTS:
        case bigqueryParser::EXTRACT:
        case bigqueryParser::FALSE:
        case bigqueryParser::FETCH:
        case bigqueryParser::FOLLOWING:
        case bigqueryParser::FOR:
        case bigqueryParser::FROM:
        case bigqueryParser::FULL:
        case bigqueryParser::GROUP:
        case bigqueryParser::GROUPING:
        case bigqueryParser::GROUPS:
        case bigqueryParser::HASH:
        case bigqueryParser::HAVING:
        case bigqueryParser::IF:
        case bigqueryParser::IGNORE:
        case bigqueryParser::IN:
        case bigqueryParser::INNER:
        case bigqueryParser::INTERSECT:
        case bigqueryParser::INTERVAL:
        case bigqueryParser::INTO:
        case bigqueryParser::IS:
        case bigqueryParser::JOIN:
        case bigqueryParser::LATERAL:
        case bigqueryParser::LEFT:
        case bigqueryParser::LIKE:
        case bigqueryParser::LIMIT:
        case bigqueryParser::LOOKUP:
        case bigqueryParser::MERGE:
        case bigqueryParser::NATURAL:
        case bigqueryParser::NEW:
        case bigqueryParser::NO:
        case bigqueryParser::NOT:
        case bigqueryParser::S_NULL:
        case bigqueryParser::NULLS:
        case bigqueryParser::OF:
        case bigqueryParser::OFFSET:
        case bigqueryParser::ON:
        case bigqueryParser::OR:
        case bigqueryParser::ORDER:
        case bigqueryParser::ORDINAL:
        case bigqueryParser::OUTER:
        case bigqueryParser::OVER:
        case bigqueryParser::PARTITION:
        case bigqueryParser::PRECEDING:
        case bigqueryParser::PROTO:
        case bigqueryParser::RANGE:
        case bigqueryParser::RECURSIVE:
        case bigqueryParser::REPLACE:
        case bigqueryParser::RESPECT:
        case bigqueryParser::RIGHT:
        case bigqueryParser::ROLLUP:
        case bigqueryParser::ROWS:
        case bigqueryParser::SAFE_OFFSET:
        case bigqueryParser::SAFE_ORDINAL:
        case bigqueryParser::SELECT:
        case bigqueryParser::SET:
        case bigqueryParser::SOME:
        case bigqueryParser::SSTRUCT:
        case bigqueryParser::SYSTEM:
        case bigqueryParser::TABLESAMPLE:
        case bigqueryParser::THEN:
        case bigqueryParser::TIME:
        case bigqueryParser::TO:
        case bigqueryParser::TREAT:
        case bigqueryParser::TRUE:
        case bigqueryParser::UNBOUNDED:
        case bigqueryParser::UNION:
        case bigqueryParser::UNNEST:
        case bigqueryParser::USING:
        case bigqueryParser::WHEN:
        case bigqueryParser::WHERE:
        case bigqueryParser::WINDOW:
        case bigqueryParser::WITH:
        case bigqueryParser::WITHIN:
        case bigqueryParser::QUOTED_STRING:
        case bigqueryParser::TRIPLE_QUOTED_STRING:
        case bigqueryParser::RAW_STRING:
        case bigqueryParser::BYTE_STRING:
        case bigqueryParser::RAW_BYTE_STRING:
        case bigqueryParser::ID: {
          setState(328);
          expr(0);
          setState(333);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == bigqueryParser::T__2) {
            setState(329);
            match(bigqueryParser::T__2);
            setState(330);
            expr(0);
            setState(335);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

        case bigqueryParser::T__4: {
          setState(336);
          match(bigqueryParser::T__4);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(339);
      match(bigqueryParser::T__1);
      break;
    }

    case 8: {
      setState(341);
      cast_expr();
      break;
    }

    case 9: {
      setState(342);
      match(bigqueryParser::T__0);
      setState(343);
      expr(0);
      setState(344);
      match(bigqueryParser::T__1);
      break;
    }

    case 10: {
      setState(346);
      column_expr();
      break;
    }

    case 11: {
      setState(347);
      keyword();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(430);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(428);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(350);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(351);
          _la = _input->LA(1);
          if (!(_la == bigqueryParser::T__4

          || _la == bigqueryParser::T__9)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(352);
          expr(20);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(353);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(354);
          _la = _input->LA(1);
          if (!(_la == bigqueryParser::T__5

          || _la == bigqueryParser::T__10)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(355);
          expr(19);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(356);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(357);
          _la = _input->LA(1);
          if (!(_la == bigqueryParser::T__11

          || _la == bigqueryParser::T__12)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(358);
          expr(18);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(359);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(360);
          match(bigqueryParser::T__13);
          setState(361);
          expr(17);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(362);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(363);
          match(bigqueryParser::T__14);
          setState(364);
          expr(16);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(365);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(366);
          match(bigqueryParser::T__15);
          setState(367);
          expr(15);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(368);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(380);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case bigqueryParser::T__16: {
              setState(369);
              match(bigqueryParser::T__16);
              break;
            }

            case bigqueryParser::T__17: {
              setState(370);
              match(bigqueryParser::T__17);
              break;
            }

            case bigqueryParser::T__18: {
              setState(371);
              match(bigqueryParser::T__18);
              break;
            }

            case bigqueryParser::T__19: {
              setState(372);
              match(bigqueryParser::T__19);
              break;
            }

            case bigqueryParser::T__20: {
              setState(373);
              match(bigqueryParser::T__20);
              break;
            }

            case bigqueryParser::T__21: {
              setState(374);
              match(bigqueryParser::T__21);
              break;
            }

            case bigqueryParser::T__22: {
              setState(375);
              match(bigqueryParser::T__22);
              break;
            }

            case bigqueryParser::LIKE:
            case bigqueryParser::NOT: {
              setState(377);
              _errHandler->sync(this);

              _la = _input->LA(1);
              if (_la == bigqueryParser::NOT) {
                setState(376);
                match(bigqueryParser::NOT);
              }
              setState(379);
              match(bigqueryParser::LIKE);
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(382);
          expr(14);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(383);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(385);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == bigqueryParser::NOT) {
            setState(384);
            match(bigqueryParser::NOT);
          }
          setState(387);
          match(bigqueryParser::BETWEEN);
          setState(388);
          expr(0);
          setState(389);
          match(bigqueryParser::AND);
          setState(390);
          expr(10);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(392);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(393);
          match(bigqueryParser::AND);
          setState(394);
          expr(8);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(395);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(396);
          match(bigqueryParser::OR);
          setState(397);
          expr(7);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(398);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(399);
          match(bigqueryParser::IS);
          setState(401);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == bigqueryParser::NOT) {
            setState(400);
            match(bigqueryParser::NOT);
          }
          setState(403);
          match(bigqueryParser::S_NULL);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(404);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(406);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == bigqueryParser::NOT) {
            setState(405);
            match(bigqueryParser::NOT);
          }
          setState(408);
          match(bigqueryParser::IN);
          setState(426);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
          case 1: {
            setState(409);
            match(bigqueryParser::T__0);
            setState(410);
            expr(0);
            setState(415);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == bigqueryParser::T__2) {
              setState(411);
              match(bigqueryParser::T__2);
              setState(412);
              expr(0);
              setState(417);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(418);
            match(bigqueryParser::T__1);
            break;
          }

          case 2: {
            setState(420);
            query_statement();
            break;
          }

          case 3: {
            setState(421);
            match(bigqueryParser::UNNEST);
            setState(422);
            match(bigqueryParser::T__0);
            setState(423);
            array_expr();
            setState(424);
            match(bigqueryParser::T__1);
            break;
          }

          }
          break;
        }

        } 
      }
      setState(432);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Cast_exprContext ------------------------------------------------------------------

bigqueryParser::Cast_exprContext::Cast_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Cast_exprContext::CAST() {
  return getToken(bigqueryParser::CAST, 0);
}

bigqueryParser::ExprContext* bigqueryParser::Cast_exprContext::expr() {
  return getRuleContext<bigqueryParser::ExprContext>(0);
}

tree::TerminalNode* bigqueryParser::Cast_exprContext::AS() {
  return getToken(bigqueryParser::AS, 0);
}

bigqueryParser::Datatype_nameContext* bigqueryParser::Cast_exprContext::datatype_name() {
  return getRuleContext<bigqueryParser::Datatype_nameContext>(0);
}


size_t bigqueryParser::Cast_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleCast_expr;
}

void bigqueryParser::Cast_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCast_expr(this);
}

void bigqueryParser::Cast_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCast_expr(this);
}

bigqueryParser::Cast_exprContext* bigqueryParser::cast_expr() {
  Cast_exprContext *_localctx = _tracker.createInstance<Cast_exprContext>(_ctx, getState());
  enterRule(_localctx, 32, bigqueryParser::RuleCast_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(bigqueryParser::CAST);
    setState(434);
    match(bigqueryParser::T__0);
    setState(435);
    expr(0);
    setState(436);
    match(bigqueryParser::AS);
    setState(437);
    datatype_name();
    setState(438);
    match(bigqueryParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_exprContext ------------------------------------------------------------------

bigqueryParser::Column_exprContext::Column_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Column_exprContext* bigqueryParser::Column_exprContext::column_expr() {
  return getRuleContext<bigqueryParser::Column_exprContext>(0);
}

bigqueryParser::Column_nameContext* bigqueryParser::Column_exprContext::column_name() {
  return getRuleContext<bigqueryParser::Column_nameContext>(0);
}

bigqueryParser::Table_nameContext* bigqueryParser::Column_exprContext::table_name() {
  return getRuleContext<bigqueryParser::Table_nameContext>(0);
}

bigqueryParser::Dataset_nameContext* bigqueryParser::Column_exprContext::dataset_name() {
  return getRuleContext<bigqueryParser::Dataset_nameContext>(0);
}

bigqueryParser::Project_nameContext* bigqueryParser::Column_exprContext::project_name() {
  return getRuleContext<bigqueryParser::Project_nameContext>(0);
}


size_t bigqueryParser::Column_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleColumn_expr;
}

void bigqueryParser::Column_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_expr(this);
}

void bigqueryParser::Column_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_expr(this);
}

bigqueryParser::Column_exprContext* bigqueryParser::column_expr() {
  Column_exprContext *_localctx = _tracker.createInstance<Column_exprContext>(_ctx, getState());
  enterRule(_localctx, 34, bigqueryParser::RuleColumn_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(460);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(440);
      match(bigqueryParser::T__23);
      setState(441);
      column_expr();
      setState(442);
      match(bigqueryParser::T__23);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(457);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
      case 1: {
        setState(452);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
        case 1: {
          setState(447);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
          case 1: {
            setState(444);
            project_name();
            setState(445);
            match(bigqueryParser::T__3);
            break;
          }

          }
          setState(449);
          dataset_name();
          setState(450);
          match(bigqueryParser::T__3);
          break;
        }

        }
        setState(454);
        table_name();
        setState(455);
        match(bigqueryParser::T__3);
        break;
      }

      }
      setState(459);
      column_name();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Except_statementContext ------------------------------------------------------------------

bigqueryParser::Except_statementContext::Except_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Except_statementContext::EXCEPT() {
  return getToken(bigqueryParser::EXCEPT, 0);
}

std::vector<bigqueryParser::Column_nameContext *> bigqueryParser::Except_statementContext::column_name() {
  return getRuleContexts<bigqueryParser::Column_nameContext>();
}

bigqueryParser::Column_nameContext* bigqueryParser::Except_statementContext::column_name(size_t i) {
  return getRuleContext<bigqueryParser::Column_nameContext>(i);
}


size_t bigqueryParser::Except_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleExcept_statement;
}

void bigqueryParser::Except_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExcept_statement(this);
}

void bigqueryParser::Except_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExcept_statement(this);
}

bigqueryParser::Except_statementContext* bigqueryParser::except_statement() {
  Except_statementContext *_localctx = _tracker.createInstance<Except_statementContext>(_ctx, getState());
  enterRule(_localctx, 36, bigqueryParser::RuleExcept_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    match(bigqueryParser::EXCEPT);
    setState(463);
    match(bigqueryParser::T__0);
    setState(464);
    column_name();
    setState(469);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == bigqueryParser::T__2) {
      setState(465);
      match(bigqueryParser::T__2);
      setState(466);
      column_name();
      setState(471);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(472);
    match(bigqueryParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Replace_statementContext ------------------------------------------------------------------

bigqueryParser::Replace_statementContext::Replace_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Replace_statementContext::REPLACE() {
  return getToken(bigqueryParser::REPLACE, 0);
}

std::vector<bigqueryParser::ExprContext *> bigqueryParser::Replace_statementContext::expr() {
  return getRuleContexts<bigqueryParser::ExprContext>();
}

bigqueryParser::ExprContext* bigqueryParser::Replace_statementContext::expr(size_t i) {
  return getRuleContext<bigqueryParser::ExprContext>(i);
}

std::vector<bigqueryParser::Alias_nameContext *> bigqueryParser::Replace_statementContext::alias_name() {
  return getRuleContexts<bigqueryParser::Alias_nameContext>();
}

bigqueryParser::Alias_nameContext* bigqueryParser::Replace_statementContext::alias_name(size_t i) {
  return getRuleContext<bigqueryParser::Alias_nameContext>(i);
}

std::vector<tree::TerminalNode *> bigqueryParser::Replace_statementContext::AS() {
  return getTokens(bigqueryParser::AS);
}

tree::TerminalNode* bigqueryParser::Replace_statementContext::AS(size_t i) {
  return getToken(bigqueryParser::AS, i);
}


size_t bigqueryParser::Replace_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleReplace_statement;
}

void bigqueryParser::Replace_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReplace_statement(this);
}

void bigqueryParser::Replace_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReplace_statement(this);
}

bigqueryParser::Replace_statementContext* bigqueryParser::replace_statement() {
  Replace_statementContext *_localctx = _tracker.createInstance<Replace_statementContext>(_ctx, getState());
  enterRule(_localctx, 38, bigqueryParser::RuleReplace_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(bigqueryParser::REPLACE);
    setState(475);
    match(bigqueryParser::T__0);
    setState(476);
    expr(0);
    setState(481);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bigqueryParser::T__0)
      | (1ULL << bigqueryParser::T__23)
      | (1ULL << bigqueryParser::QUOTE)
      | (1ULL << bigqueryParser::DQOUTE)
      | (1ULL << bigqueryParser::AS))) != 0) || _la == bigqueryParser::ID) {
      setState(478);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == bigqueryParser::AS) {
        setState(477);
        match(bigqueryParser::AS);
      }
      setState(480);
      alias_name();
    }

    setState(483);
    match(bigqueryParser::T__2);
    setState(484);
    expr(0);
    setState(491);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << bigqueryParser::T__0)
      | (1ULL << bigqueryParser::T__23)
      | (1ULL << bigqueryParser::QUOTE)
      | (1ULL << bigqueryParser::DQOUTE)
      | (1ULL << bigqueryParser::AS))) != 0) || _la == bigqueryParser::ID) {
      setState(486);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == bigqueryParser::AS) {
        setState(485);
        match(bigqueryParser::AS);
      }
      setState(488);
      alias_name();
      setState(493);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(494);
    match(bigqueryParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_typeContext ------------------------------------------------------------------

bigqueryParser::Join_typeContext::Join_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Join_typeContext::INNER() {
  return getToken(bigqueryParser::INNER, 0);
}

tree::TerminalNode* bigqueryParser::Join_typeContext::CROSS() {
  return getToken(bigqueryParser::CROSS, 0);
}

tree::TerminalNode* bigqueryParser::Join_typeContext::FULL() {
  return getToken(bigqueryParser::FULL, 0);
}

tree::TerminalNode* bigqueryParser::Join_typeContext::OUTER() {
  return getToken(bigqueryParser::OUTER, 0);
}

tree::TerminalNode* bigqueryParser::Join_typeContext::LEFT() {
  return getToken(bigqueryParser::LEFT, 0);
}

tree::TerminalNode* bigqueryParser::Join_typeContext::RIGHT() {
  return getToken(bigqueryParser::RIGHT, 0);
}


size_t bigqueryParser::Join_typeContext::getRuleIndex() const {
  return bigqueryParser::RuleJoin_type;
}

void bigqueryParser::Join_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoin_type(this);
}

void bigqueryParser::Join_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoin_type(this);
}

bigqueryParser::Join_typeContext* bigqueryParser::join_type() {
  Join_typeContext *_localctx = _tracker.createInstance<Join_typeContext>(_ctx, getState());
  enterRule(_localctx, 40, bigqueryParser::RuleJoin_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(510);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bigqueryParser::INNER: {
        enterOuterAlt(_localctx, 1);
        setState(496);
        match(bigqueryParser::INNER);
        break;
      }

      case bigqueryParser::CROSS: {
        enterOuterAlt(_localctx, 2);
        setState(497);
        match(bigqueryParser::CROSS);
        break;
      }

      case bigqueryParser::FULL: {
        enterOuterAlt(_localctx, 3);
        setState(498);
        match(bigqueryParser::FULL);
        setState(500);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == bigqueryParser::OUTER) {
          setState(499);
          match(bigqueryParser::OUTER);
        }
        break;
      }

      case bigqueryParser::LEFT: {
        enterOuterAlt(_localctx, 4);
        setState(502);
        match(bigqueryParser::LEFT);
        setState(504);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == bigqueryParser::OUTER) {
          setState(503);
          match(bigqueryParser::OUTER);
        }
        break;
      }

      case bigqueryParser::RIGHT: {
        enterOuterAlt(_localctx, 5);
        setState(506);
        match(bigqueryParser::RIGHT);
        setState(508);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == bigqueryParser::OUTER) {
          setState(507);
          match(bigqueryParser::OUTER);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- On_clauseContext ------------------------------------------------------------------

bigqueryParser::On_clauseContext::On_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::On_clauseContext::ON() {
  return getToken(bigqueryParser::ON, 0);
}

bigqueryParser::Bool_expressionContext* bigqueryParser::On_clauseContext::bool_expression() {
  return getRuleContext<bigqueryParser::Bool_expressionContext>(0);
}


size_t bigqueryParser::On_clauseContext::getRuleIndex() const {
  return bigqueryParser::RuleOn_clause;
}

void bigqueryParser::On_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOn_clause(this);
}

void bigqueryParser::On_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOn_clause(this);
}

bigqueryParser::On_clauseContext* bigqueryParser::on_clause() {
  On_clauseContext *_localctx = _tracker.createInstance<On_clauseContext>(_ctx, getState());
  enterRule(_localctx, 42, bigqueryParser::RuleOn_clause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(512);
    match(bigqueryParser::ON);
    setState(513);
    bool_expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_opContext ------------------------------------------------------------------

bigqueryParser::Set_opContext::Set_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Set_opContext::UNION() {
  return getToken(bigqueryParser::UNION, 0);
}

tree::TerminalNode* bigqueryParser::Set_opContext::ALL() {
  return getToken(bigqueryParser::ALL, 0);
}

tree::TerminalNode* bigqueryParser::Set_opContext::DISTINCT() {
  return getToken(bigqueryParser::DISTINCT, 0);
}

tree::TerminalNode* bigqueryParser::Set_opContext::INTERSECT() {
  return getToken(bigqueryParser::INTERSECT, 0);
}

tree::TerminalNode* bigqueryParser::Set_opContext::EXCEPT() {
  return getToken(bigqueryParser::EXCEPT, 0);
}


size_t bigqueryParser::Set_opContext::getRuleIndex() const {
  return bigqueryParser::RuleSet_op;
}

void bigqueryParser::Set_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_op(this);
}

void bigqueryParser::Set_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_op(this);
}

bigqueryParser::Set_opContext* bigqueryParser::set_op() {
  Set_opContext *_localctx = _tracker.createInstance<Set_opContext>(_ctx, getState());
  enterRule(_localctx, 44, bigqueryParser::RuleSet_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(523);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bigqueryParser::UNION: {
        enterOuterAlt(_localctx, 1);
        setState(515);
        match(bigqueryParser::UNION);
        setState(517);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == bigqueryParser::ALL

        || _la == bigqueryParser::DISTINCT) {
          setState(516);
          _la = _input->LA(1);
          if (!(_la == bigqueryParser::ALL

          || _la == bigqueryParser::DISTINCT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
        }
        break;
      }

      case bigqueryParser::INTERSECT: {
        enterOuterAlt(_localctx, 2);
        setState(519);
        match(bigqueryParser::INTERSECT);
        setState(520);
        match(bigqueryParser::DISTINCT);
        break;
      }

      case bigqueryParser::EXCEPT: {
        enterOuterAlt(_localctx, 3);
        setState(521);
        match(bigqueryParser::EXCEPT);
        setState(522);
        match(bigqueryParser::DISTINCT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Using_clauseContext ------------------------------------------------------------------

bigqueryParser::Using_clauseContext::Using_clauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Using_clauseContext::USING() {
  return getToken(bigqueryParser::USING, 0);
}

std::vector<bigqueryParser::Join_nameContext *> bigqueryParser::Using_clauseContext::join_name() {
  return getRuleContexts<bigqueryParser::Join_nameContext>();
}

bigqueryParser::Join_nameContext* bigqueryParser::Using_clauseContext::join_name(size_t i) {
  return getRuleContext<bigqueryParser::Join_nameContext>(i);
}


size_t bigqueryParser::Using_clauseContext::getRuleIndex() const {
  return bigqueryParser::RuleUsing_clause;
}

void bigqueryParser::Using_clauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsing_clause(this);
}

void bigqueryParser::Using_clauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsing_clause(this);
}

bigqueryParser::Using_clauseContext* bigqueryParser::using_clause() {
  Using_clauseContext *_localctx = _tracker.createInstance<Using_clauseContext>(_ctx, getState());
  enterRule(_localctx, 46, bigqueryParser::RuleUsing_clause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(bigqueryParser::USING);
    setState(526);
    match(bigqueryParser::T__0);
    setState(527);
    join_name();
    setState(532);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == bigqueryParser::T__2) {
      setState(528);
      match(bigqueryParser::T__2);
      setState(529);
      join_name();
      setState(534);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(535);
    match(bigqueryParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SstructContext ------------------------------------------------------------------

bigqueryParser::SstructContext::SstructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::SstructContext::SSTRUCT() {
  return getToken(bigqueryParser::SSTRUCT, 0);
}

bigqueryParser::Datatype_nameContext* bigqueryParser::SstructContext::datatype_name() {
  return getRuleContext<bigqueryParser::Datatype_nameContext>(0);
}


size_t bigqueryParser::SstructContext::getRuleIndex() const {
  return bigqueryParser::RuleSstruct;
}

void bigqueryParser::SstructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSstruct(this);
}

void bigqueryParser::SstructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSstruct(this);
}

bigqueryParser::SstructContext* bigqueryParser::sstruct() {
  SstructContext *_localctx = _tracker.createInstance<SstructContext>(_ctx, getState());
  enterRule(_localctx, 48, bigqueryParser::RuleSstruct);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    match(bigqueryParser::SSTRUCT);
    setState(538);
    match(bigqueryParser::T__17);
    setState(539);
    datatype_name();
    setState(540);
    match(bigqueryParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_exprContext ------------------------------------------------------------------

bigqueryParser::Array_exprContext::Array_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Array_exprContext::ARRAY() {
  return getToken(bigqueryParser::ARRAY, 0);
}

bigqueryParser::Datatype_nameContext* bigqueryParser::Array_exprContext::datatype_name() {
  return getRuleContext<bigqueryParser::Datatype_nameContext>(0);
}


size_t bigqueryParser::Array_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleArray_expr;
}

void bigqueryParser::Array_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_expr(this);
}

void bigqueryParser::Array_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_expr(this);
}

bigqueryParser::Array_exprContext* bigqueryParser::array_expr() {
  Array_exprContext *_localctx = _tracker.createInstance<Array_exprContext>(_ctx, getState());
  enterRule(_localctx, 50, bigqueryParser::RuleArray_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    match(bigqueryParser::ARRAY);
    setState(543);
    match(bigqueryParser::T__17);
    setState(544);
    datatype_name();
    setState(545);
    match(bigqueryParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_expressionContext ------------------------------------------------------------------

bigqueryParser::Bool_expressionContext::Bool_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::ExprContext* bigqueryParser::Bool_expressionContext::expr() {
  return getRuleContext<bigqueryParser::ExprContext>(0);
}


size_t bigqueryParser::Bool_expressionContext::getRuleIndex() const {
  return bigqueryParser::RuleBool_expression;
}

void bigqueryParser::Bool_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_expression(this);
}

void bigqueryParser::Bool_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_expression(this);
}

bigqueryParser::Bool_expressionContext* bigqueryParser::bool_expression() {
  Bool_expressionContext *_localctx = _tracker.createInstance<Bool_expressionContext>(_ctx, getState());
  enterRule(_localctx, 52, bigqueryParser::RuleBool_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CountContext ------------------------------------------------------------------

bigqueryParser::CountContext::CountContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NumberContext* bigqueryParser::CountContext::number() {
  return getRuleContext<bigqueryParser::NumberContext>(0);
}


size_t bigqueryParser::CountContext::getRuleIndex() const {
  return bigqueryParser::RuleCount;
}

void bigqueryParser::CountContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCount(this);
}

void bigqueryParser::CountContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCount(this);
}

bigqueryParser::CountContext* bigqueryParser::count() {
  CountContext *_localctx = _tracker.createInstance<CountContext>(_ctx, getState());
  enterRule(_localctx, 54, bigqueryParser::RuleCount);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Skip_rowsContext ------------------------------------------------------------------

bigqueryParser::Skip_rowsContext::Skip_rowsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NumberContext* bigqueryParser::Skip_rowsContext::number() {
  return getRuleContext<bigqueryParser::NumberContext>(0);
}


size_t bigqueryParser::Skip_rowsContext::getRuleIndex() const {
  return bigqueryParser::RuleSkip_rows;
}

void bigqueryParser::Skip_rowsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSkip_rows(this);
}

void bigqueryParser::Skip_rowsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSkip_rows(this);
}

bigqueryParser::Skip_rowsContext* bigqueryParser::skip_rows() {
  Skip_rowsContext *_localctx = _tracker.createInstance<Skip_rowsContext>(_ctx, getState());
  enterRule(_localctx, 56, bigqueryParser::RuleSkip_rows);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- With_statementContext ------------------------------------------------------------------

bigqueryParser::With_statementContext::With_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::With_statementContext::WITH() {
  return getToken(bigqueryParser::WITH, 0);
}

std::vector<bigqueryParser::Cte_exprContext *> bigqueryParser::With_statementContext::cte_expr() {
  return getRuleContexts<bigqueryParser::Cte_exprContext>();
}

bigqueryParser::Cte_exprContext* bigqueryParser::With_statementContext::cte_expr(size_t i) {
  return getRuleContext<bigqueryParser::Cte_exprContext>(i);
}


size_t bigqueryParser::With_statementContext::getRuleIndex() const {
  return bigqueryParser::RuleWith_statement;
}

void bigqueryParser::With_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWith_statement(this);
}

void bigqueryParser::With_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWith_statement(this);
}

bigqueryParser::With_statementContext* bigqueryParser::with_statement() {
  With_statementContext *_localctx = _tracker.createInstance<With_statementContext>(_ctx, getState());
  enterRule(_localctx, 58, bigqueryParser::RuleWith_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(bigqueryParser::WITH);
    setState(554);
    cte_expr();
    setState(559);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == bigqueryParser::T__2) {
      setState(555);
      match(bigqueryParser::T__2);
      setState(556);
      cte_expr();
      setState(561);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cte_exprContext ------------------------------------------------------------------

bigqueryParser::Cte_exprContext::Cte_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Cte_nameContext* bigqueryParser::Cte_exprContext::cte_name() {
  return getRuleContext<bigqueryParser::Cte_nameContext>(0);
}

tree::TerminalNode* bigqueryParser::Cte_exprContext::AS() {
  return getToken(bigqueryParser::AS, 0);
}

bigqueryParser::Query_exprContext* bigqueryParser::Cte_exprContext::query_expr() {
  return getRuleContext<bigqueryParser::Query_exprContext>(0);
}


size_t bigqueryParser::Cte_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleCte_expr;
}

void bigqueryParser::Cte_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCte_expr(this);
}

void bigqueryParser::Cte_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCte_expr(this);
}

bigqueryParser::Cte_exprContext* bigqueryParser::cte_expr() {
  Cte_exprContext *_localctx = _tracker.createInstance<Cte_exprContext>(_ctx, getState());
  enterRule(_localctx, 60, bigqueryParser::RuleCte_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(562);
    cte_name();
    setState(563);
    match(bigqueryParser::AS);
    setState(564);
    match(bigqueryParser::T__0);
    setState(565);
    query_expr();
    setState(566);
    match(bigqueryParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

bigqueryParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::NameContext::ID() {
  return getToken(bigqueryParser::ID, 0);
}

bigqueryParser::NameContext* bigqueryParser::NameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::NameContext::getRuleIndex() const {
  return bigqueryParser::RuleName;
}

void bigqueryParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void bigqueryParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

bigqueryParser::NameContext* bigqueryParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 62, bigqueryParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(585);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bigqueryParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(568);
        match(bigqueryParser::ID);
        break;
      }

      case bigqueryParser::DQOUTE: {
        enterOuterAlt(_localctx, 2);
        setState(569);
        match(bigqueryParser::DQOUTE);
        setState(570);
        name();
        setState(571);
        match(bigqueryParser::DQOUTE);
        break;
      }

      case bigqueryParser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(573);
        match(bigqueryParser::T__0);
        setState(574);
        name();
        setState(575);
        match(bigqueryParser::T__1);
        break;
      }

      case bigqueryParser::T__23: {
        enterOuterAlt(_localctx, 4);
        setState(577);
        match(bigqueryParser::T__23);
        setState(578);
        name();
        setState(579);
        match(bigqueryParser::T__23);
        break;
      }

      case bigqueryParser::QUOTE: {
        enterOuterAlt(_localctx, 5);
        setState(581);
        match(bigqueryParser::QUOTE);
        setState(582);
        name();
        setState(583);
        match(bigqueryParser::QUOTE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Alias_nameContext ------------------------------------------------------------------

bigqueryParser::Alias_nameContext::Alias_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Alias_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Alias_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleAlias_name;
}

void bigqueryParser::Alias_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlias_name(this);
}

void bigqueryParser::Alias_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlias_name(this);
}

bigqueryParser::Alias_nameContext* bigqueryParser::alias_name() {
  Alias_nameContext *_localctx = _tracker.createInstance<Alias_nameContext>(_ctx, getState());
  enterRule(_localctx, 64, bigqueryParser::RuleAlias_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_nameContext ------------------------------------------------------------------

bigqueryParser::Array_nameContext::Array_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Array_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Array_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleArray_name;
}

void bigqueryParser::Array_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_name(this);
}

void bigqueryParser::Array_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_name(this);
}

bigqueryParser::Array_nameContext* bigqueryParser::array_name() {
  Array_nameContext *_localctx = _tracker.createInstance<Array_nameContext>(_ctx, getState());
  enterRule(_localctx, 66, bigqueryParser::RuleArray_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Column_nameContext ------------------------------------------------------------------

bigqueryParser::Column_nameContext::Column_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Column_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Column_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleColumn_name;
}

void bigqueryParser::Column_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColumn_name(this);
}

void bigqueryParser::Column_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColumn_name(this);
}

bigqueryParser::Column_nameContext* bigqueryParser::column_name() {
  Column_nameContext *_localctx = _tracker.createInstance<Column_nameContext>(_ctx, getState());
  enterRule(_localctx, 68, bigqueryParser::RuleColumn_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cte_nameContext ------------------------------------------------------------------

bigqueryParser::Cte_nameContext::Cte_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Cte_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Cte_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleCte_name;
}

void bigqueryParser::Cte_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCte_name(this);
}

void bigqueryParser::Cte_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCte_name(this);
}

bigqueryParser::Cte_nameContext* bigqueryParser::cte_name() {
  Cte_nameContext *_localctx = _tracker.createInstance<Cte_nameContext>(_ctx, getState());
  enterRule(_localctx, 70, bigqueryParser::RuleCte_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dataset_nameContext ------------------------------------------------------------------

bigqueryParser::Dataset_nameContext::Dataset_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Dataset_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Dataset_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleDataset_name;
}

void bigqueryParser::Dataset_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataset_name(this);
}

void bigqueryParser::Dataset_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataset_name(this);
}

bigqueryParser::Dataset_nameContext* bigqueryParser::dataset_name() {
  Dataset_nameContext *_localctx = _tracker.createInstance<Dataset_nameContext>(_ctx, getState());
  enterRule(_localctx, 72, bigqueryParser::RuleDataset_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(595);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Datatype_nameContext ------------------------------------------------------------------

bigqueryParser::Datatype_nameContext::Datatype_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Datatype_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Datatype_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleDatatype_name;
}

void bigqueryParser::Datatype_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDatatype_name(this);
}

void bigqueryParser::Datatype_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDatatype_name(this);
}

bigqueryParser::Datatype_nameContext* bigqueryParser::datatype_name() {
  Datatype_nameContext *_localctx = _tracker.createInstance<Datatype_nameContext>(_ctx, getState());
  enterRule(_localctx, 74, bigqueryParser::RuleDatatype_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_nameContext ------------------------------------------------------------------

bigqueryParser::Function_nameContext::Function_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Function_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Function_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleFunction_name;
}

void bigqueryParser::Function_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_name(this);
}

void bigqueryParser::Function_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_name(this);
}

bigqueryParser::Function_nameContext* bigqueryParser::function_name() {
  Function_nameContext *_localctx = _tracker.createInstance<Function_nameContext>(_ctx, getState());
  enterRule(_localctx, 76, bigqueryParser::RuleFunction_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Join_nameContext ------------------------------------------------------------------

bigqueryParser::Join_nameContext::Join_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Join_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Join_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleJoin_name;
}

void bigqueryParser::Join_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoin_name(this);
}

void bigqueryParser::Join_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoin_name(this);
}

bigqueryParser::Join_nameContext* bigqueryParser::join_name() {
  Join_nameContext *_localctx = _tracker.createInstance<Join_nameContext>(_ctx, getState());
  enterRule(_localctx, 78, bigqueryParser::RuleJoin_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Member_nameContext ------------------------------------------------------------------

bigqueryParser::Member_nameContext::Member_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Member_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Member_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleMember_name;
}

void bigqueryParser::Member_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMember_name(this);
}

void bigqueryParser::Member_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMember_name(this);
}

bigqueryParser::Member_nameContext* bigqueryParser::member_name() {
  Member_nameContext *_localctx = _tracker.createInstance<Member_nameContext>(_ctx, getState());
  enterRule(_localctx, 80, bigqueryParser::RuleMember_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Project_nameContext ------------------------------------------------------------------

bigqueryParser::Project_nameContext::Project_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Project_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Project_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleProject_name;
}

void bigqueryParser::Project_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProject_name(this);
}

void bigqueryParser::Project_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProject_name(this);
}

bigqueryParser::Project_nameContext* bigqueryParser::project_name() {
  Project_nameContext *_localctx = _tracker.createInstance<Project_nameContext>(_ctx, getState());
  enterRule(_localctx, 82, bigqueryParser::RuleProject_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Struct_nameContext ------------------------------------------------------------------

bigqueryParser::Struct_nameContext::Struct_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Struct_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Struct_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleStruct_name;
}

void bigqueryParser::Struct_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStruct_name(this);
}

void bigqueryParser::Struct_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStruct_name(this);
}

bigqueryParser::Struct_nameContext* bigqueryParser::struct_name() {
  Struct_nameContext *_localctx = _tracker.createInstance<Struct_nameContext>(_ctx, getState());
  enterRule(_localctx, 84, bigqueryParser::RuleStruct_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_nameContext ------------------------------------------------------------------

bigqueryParser::Table_nameContext::Table_nameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::NameContext* bigqueryParser::Table_nameContext::name() {
  return getRuleContext<bigqueryParser::NameContext>(0);
}


size_t bigqueryParser::Table_nameContext::getRuleIndex() const {
  return bigqueryParser::RuleTable_name;
}

void bigqueryParser::Table_nameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_name(this);
}

void bigqueryParser::Table_nameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_name(this);
}

bigqueryParser::Table_nameContext* bigqueryParser::table_name() {
  Table_nameContext *_localctx = _tracker.createInstance<Table_nameContext>(_ctx, getState());
  enterRule(_localctx, 86, bigqueryParser::RuleTable_name);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Table_exprContext ------------------------------------------------------------------

bigqueryParser::Table_exprContext::Table_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Table_nameContext* bigqueryParser::Table_exprContext::table_name() {
  return getRuleContext<bigqueryParser::Table_nameContext>(0);
}

bigqueryParser::Dataset_nameContext* bigqueryParser::Table_exprContext::dataset_name() {
  return getRuleContext<bigqueryParser::Dataset_nameContext>(0);
}

bigqueryParser::Project_nameContext* bigqueryParser::Table_exprContext::project_name() {
  return getRuleContext<bigqueryParser::Project_nameContext>(0);
}

bigqueryParser::Table_exprContext* bigqueryParser::Table_exprContext::table_expr() {
  return getRuleContext<bigqueryParser::Table_exprContext>(0);
}


size_t bigqueryParser::Table_exprContext::getRuleIndex() const {
  return bigqueryParser::RuleTable_expr;
}

void bigqueryParser::Table_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTable_expr(this);
}

void bigqueryParser::Table_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTable_expr(this);
}

bigqueryParser::Table_exprContext* bigqueryParser::table_expr() {
  Table_exprContext *_localctx = _tracker.createInstance<Table_exprContext>(_ctx, getState());
  enterRule(_localctx, 88, bigqueryParser::RuleTable_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(626);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(619);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
      case 1: {
        setState(614);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
        case 1: {
          setState(611);
          project_name();
          setState(612);
          match(bigqueryParser::T__3);
          break;
        }

        }
        setState(616);
        dataset_name();
        setState(617);
        match(bigqueryParser::T__3);
        break;
      }

      }
      setState(621);
      table_name();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(622);
      match(bigqueryParser::T__23);
      setState(623);
      table_expr();
      setState(624);
      match(bigqueryParser::T__23);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

bigqueryParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Integer_typeContext* bigqueryParser::NumberContext::integer_type() {
  return getRuleContext<bigqueryParser::Integer_typeContext>(0);
}

bigqueryParser::Float_typeContext* bigqueryParser::NumberContext::float_type() {
  return getRuleContext<bigqueryParser::Float_typeContext>(0);
}


size_t bigqueryParser::NumberContext::getRuleIndex() const {
  return bigqueryParser::RuleNumber;
}

void bigqueryParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void bigqueryParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

bigqueryParser::NumberContext* bigqueryParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 90, bigqueryParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(630);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bigqueryParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(628);
        integer_type();
        break;
      }

      case bigqueryParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(629);
        float_type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_typeContext ------------------------------------------------------------------

bigqueryParser::Integer_typeContext::Integer_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Integer_typeContext::INT() {
  return getToken(bigqueryParser::INT, 0);
}


size_t bigqueryParser::Integer_typeContext::getRuleIndex() const {
  return bigqueryParser::RuleInteger_type;
}

void bigqueryParser::Integer_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_type(this);
}

void bigqueryParser::Integer_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_type(this);
}

bigqueryParser::Integer_typeContext* bigqueryParser::integer_type() {
  Integer_typeContext *_localctx = _tracker.createInstance<Integer_typeContext>(_ctx, getState());
  enterRule(_localctx, 92, bigqueryParser::RuleInteger_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    match(bigqueryParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Float_typeContext ------------------------------------------------------------------

bigqueryParser::Float_typeContext::Float_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Float_typeContext::FLOAT() {
  return getToken(bigqueryParser::FLOAT, 0);
}


size_t bigqueryParser::Float_typeContext::getRuleIndex() const {
  return bigqueryParser::RuleFloat_type;
}

void bigqueryParser::Float_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat_type(this);
}

void bigqueryParser::Float_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat_type(this);
}

bigqueryParser::Float_typeContext* bigqueryParser::float_type() {
  Float_typeContext *_localctx = _tracker.createInstance<Float_typeContext>(_ctx, getState());
  enterRule(_localctx, 94, bigqueryParser::RuleFloat_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(634);
    match(bigqueryParser::FLOAT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

bigqueryParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Quoted_stringContext* bigqueryParser::StringContext::quoted_string() {
  return getRuleContext<bigqueryParser::Quoted_stringContext>(0);
}

bigqueryParser::Triple_quoted_stringContext* bigqueryParser::StringContext::triple_quoted_string() {
  return getRuleContext<bigqueryParser::Triple_quoted_stringContext>(0);
}

bigqueryParser::Raw_stringContext* bigqueryParser::StringContext::raw_string() {
  return getRuleContext<bigqueryParser::Raw_stringContext>(0);
}

bigqueryParser::Byte_stringContext* bigqueryParser::StringContext::byte_string() {
  return getRuleContext<bigqueryParser::Byte_stringContext>(0);
}

bigqueryParser::Raw_byte_stringContext* bigqueryParser::StringContext::raw_byte_string() {
  return getRuleContext<bigqueryParser::Raw_byte_stringContext>(0);
}

bigqueryParser::Special_stringContext* bigqueryParser::StringContext::special_string() {
  return getRuleContext<bigqueryParser::Special_stringContext>(0);
}


size_t bigqueryParser::StringContext::getRuleIndex() const {
  return bigqueryParser::RuleString;
}

void bigqueryParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void bigqueryParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

bigqueryParser::StringContext* bigqueryParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 96, bigqueryParser::RuleString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(642);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case bigqueryParser::QUOTED_STRING: {
        enterOuterAlt(_localctx, 1);
        setState(636);
        quoted_string();
        break;
      }

      case bigqueryParser::TRIPLE_QUOTED_STRING: {
        enterOuterAlt(_localctx, 2);
        setState(637);
        triple_quoted_string();
        break;
      }

      case bigqueryParser::RAW_STRING: {
        enterOuterAlt(_localctx, 3);
        setState(638);
        raw_string();
        break;
      }

      case bigqueryParser::BYTE_STRING: {
        enterOuterAlt(_localctx, 4);
        setState(639);
        byte_string();
        break;
      }

      case bigqueryParser::RAW_BYTE_STRING: {
        enterOuterAlt(_localctx, 5);
        setState(640);
        raw_byte_string();
        break;
      }

      case bigqueryParser::T__0:
      case bigqueryParser::T__23:
      case bigqueryParser::QUOTE:
      case bigqueryParser::DQOUTE:
      case bigqueryParser::ID: {
        enterOuterAlt(_localctx, 6);
        setState(641);
        special_string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Quoted_stringContext ------------------------------------------------------------------

bigqueryParser::Quoted_stringContext::Quoted_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Quoted_stringContext::QUOTED_STRING() {
  return getToken(bigqueryParser::QUOTED_STRING, 0);
}


size_t bigqueryParser::Quoted_stringContext::getRuleIndex() const {
  return bigqueryParser::RuleQuoted_string;
}

void bigqueryParser::Quoted_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuoted_string(this);
}

void bigqueryParser::Quoted_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuoted_string(this);
}

bigqueryParser::Quoted_stringContext* bigqueryParser::quoted_string() {
  Quoted_stringContext *_localctx = _tracker.createInstance<Quoted_stringContext>(_ctx, getState());
  enterRule(_localctx, 98, bigqueryParser::RuleQuoted_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    match(bigqueryParser::QUOTED_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Triple_quoted_stringContext ------------------------------------------------------------------

bigqueryParser::Triple_quoted_stringContext::Triple_quoted_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Triple_quoted_stringContext::TRIPLE_QUOTED_STRING() {
  return getToken(bigqueryParser::TRIPLE_QUOTED_STRING, 0);
}


size_t bigqueryParser::Triple_quoted_stringContext::getRuleIndex() const {
  return bigqueryParser::RuleTriple_quoted_string;
}

void bigqueryParser::Triple_quoted_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriple_quoted_string(this);
}

void bigqueryParser::Triple_quoted_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriple_quoted_string(this);
}

bigqueryParser::Triple_quoted_stringContext* bigqueryParser::triple_quoted_string() {
  Triple_quoted_stringContext *_localctx = _tracker.createInstance<Triple_quoted_stringContext>(_ctx, getState());
  enterRule(_localctx, 100, bigqueryParser::RuleTriple_quoted_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(646);
    match(bigqueryParser::TRIPLE_QUOTED_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Raw_stringContext ------------------------------------------------------------------

bigqueryParser::Raw_stringContext::Raw_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Raw_stringContext::RAW_STRING() {
  return getToken(bigqueryParser::RAW_STRING, 0);
}


size_t bigqueryParser::Raw_stringContext::getRuleIndex() const {
  return bigqueryParser::RuleRaw_string;
}

void bigqueryParser::Raw_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRaw_string(this);
}

void bigqueryParser::Raw_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRaw_string(this);
}

bigqueryParser::Raw_stringContext* bigqueryParser::raw_string() {
  Raw_stringContext *_localctx = _tracker.createInstance<Raw_stringContext>(_ctx, getState());
  enterRule(_localctx, 102, bigqueryParser::RuleRaw_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    match(bigqueryParser::RAW_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Byte_stringContext ------------------------------------------------------------------

bigqueryParser::Byte_stringContext::Byte_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Byte_stringContext::BYTE_STRING() {
  return getToken(bigqueryParser::BYTE_STRING, 0);
}


size_t bigqueryParser::Byte_stringContext::getRuleIndex() const {
  return bigqueryParser::RuleByte_string;
}

void bigqueryParser::Byte_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByte_string(this);
}

void bigqueryParser::Byte_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByte_string(this);
}

bigqueryParser::Byte_stringContext* bigqueryParser::byte_string() {
  Byte_stringContext *_localctx = _tracker.createInstance<Byte_stringContext>(_ctx, getState());
  enterRule(_localctx, 104, bigqueryParser::RuleByte_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(650);
    match(bigqueryParser::BYTE_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Raw_byte_stringContext ------------------------------------------------------------------

bigqueryParser::Raw_byte_stringContext::Raw_byte_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::Raw_byte_stringContext::RAW_BYTE_STRING() {
  return getToken(bigqueryParser::RAW_BYTE_STRING, 0);
}


size_t bigqueryParser::Raw_byte_stringContext::getRuleIndex() const {
  return bigqueryParser::RuleRaw_byte_string;
}

void bigqueryParser::Raw_byte_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRaw_byte_string(this);
}

void bigqueryParser::Raw_byte_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRaw_byte_string(this);
}

bigqueryParser::Raw_byte_stringContext* bigqueryParser::raw_byte_string() {
  Raw_byte_stringContext *_localctx = _tracker.createInstance<Raw_byte_stringContext>(_ctx, getState());
  enterRule(_localctx, 106, bigqueryParser::RuleRaw_byte_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(652);
    match(bigqueryParser::RAW_BYTE_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Special_stringContext ------------------------------------------------------------------

bigqueryParser::Special_stringContext::Special_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

bigqueryParser::Datatype_nameContext* bigqueryParser::Special_stringContext::datatype_name() {
  return getRuleContext<bigqueryParser::Datatype_nameContext>(0);
}

tree::TerminalNode* bigqueryParser::Special_stringContext::QUOTED_STRING() {
  return getToken(bigqueryParser::QUOTED_STRING, 0);
}


size_t bigqueryParser::Special_stringContext::getRuleIndex() const {
  return bigqueryParser::RuleSpecial_string;
}

void bigqueryParser::Special_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpecial_string(this);
}

void bigqueryParser::Special_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpecial_string(this);
}

bigqueryParser::Special_stringContext* bigqueryParser::special_string() {
  Special_stringContext *_localctx = _tracker.createInstance<Special_stringContext>(_ctx, getState());
  enterRule(_localctx, 108, bigqueryParser::RuleSpecial_string);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(654);
    datatype_name();
    setState(655);
    match(bigqueryParser::QUOTED_STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

bigqueryParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* bigqueryParser::KeywordContext::ALL() {
  return getToken(bigqueryParser::ALL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::AND() {
  return getToken(bigqueryParser::AND, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ANY() {
  return getToken(bigqueryParser::ANY, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ARRAY() {
  return getToken(bigqueryParser::ARRAY, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::AS() {
  return getToken(bigqueryParser::AS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ASC() {
  return getToken(bigqueryParser::ASC, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ASSERT_ROWS_MODIFIED() {
  return getToken(bigqueryParser::ASSERT_ROWS_MODIFIED, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::AT() {
  return getToken(bigqueryParser::AT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::BETWEEN() {
  return getToken(bigqueryParser::BETWEEN, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::BY() {
  return getToken(bigqueryParser::BY, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::CASE() {
  return getToken(bigqueryParser::CASE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::CAST() {
  return getToken(bigqueryParser::CAST, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::COLLATE() {
  return getToken(bigqueryParser::COLLATE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::CONTAINS() {
  return getToken(bigqueryParser::CONTAINS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::CREATE() {
  return getToken(bigqueryParser::CREATE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::CROSS() {
  return getToken(bigqueryParser::CROSS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::CUBE() {
  return getToken(bigqueryParser::CUBE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::CURRENT() {
  return getToken(bigqueryParser::CURRENT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::DEFAULT() {
  return getToken(bigqueryParser::DEFAULT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::DEFINE() {
  return getToken(bigqueryParser::DEFINE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::DESC() {
  return getToken(bigqueryParser::DESC, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::DISTINCT() {
  return getToken(bigqueryParser::DISTINCT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ELSE() {
  return getToken(bigqueryParser::ELSE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::END() {
  return getToken(bigqueryParser::END, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ENUM() {
  return getToken(bigqueryParser::ENUM, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ESCAPE() {
  return getToken(bigqueryParser::ESCAPE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::EXCEPT() {
  return getToken(bigqueryParser::EXCEPT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::EXCLUDE() {
  return getToken(bigqueryParser::EXCLUDE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::EXISTS() {
  return getToken(bigqueryParser::EXISTS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::EXTRACT() {
  return getToken(bigqueryParser::EXTRACT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::FALSE() {
  return getToken(bigqueryParser::FALSE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::FETCH() {
  return getToken(bigqueryParser::FETCH, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::FOLLOWING() {
  return getToken(bigqueryParser::FOLLOWING, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::FOR() {
  return getToken(bigqueryParser::FOR, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::FROM() {
  return getToken(bigqueryParser::FROM, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::FULL() {
  return getToken(bigqueryParser::FULL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::GROUP() {
  return getToken(bigqueryParser::GROUP, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::GROUPING() {
  return getToken(bigqueryParser::GROUPING, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::GROUPS() {
  return getToken(bigqueryParser::GROUPS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::HASH() {
  return getToken(bigqueryParser::HASH, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::HAVING() {
  return getToken(bigqueryParser::HAVING, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::IF() {
  return getToken(bigqueryParser::IF, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::IGNORE() {
  return getToken(bigqueryParser::IGNORE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::IN() {
  return getToken(bigqueryParser::IN, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::INNER() {
  return getToken(bigqueryParser::INNER, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::INTERSECT() {
  return getToken(bigqueryParser::INTERSECT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::INTERVAL() {
  return getToken(bigqueryParser::INTERVAL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::INTO() {
  return getToken(bigqueryParser::INTO, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::IS() {
  return getToken(bigqueryParser::IS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::JOIN() {
  return getToken(bigqueryParser::JOIN, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::LATERAL() {
  return getToken(bigqueryParser::LATERAL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::LEFT() {
  return getToken(bigqueryParser::LEFT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::LIKE() {
  return getToken(bigqueryParser::LIKE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::LIMIT() {
  return getToken(bigqueryParser::LIMIT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::LOOKUP() {
  return getToken(bigqueryParser::LOOKUP, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::MERGE() {
  return getToken(bigqueryParser::MERGE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::NATURAL() {
  return getToken(bigqueryParser::NATURAL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::NEW() {
  return getToken(bigqueryParser::NEW, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::NO() {
  return getToken(bigqueryParser::NO, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::NOT() {
  return getToken(bigqueryParser::NOT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::S_NULL() {
  return getToken(bigqueryParser::S_NULL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::NULLS() {
  return getToken(bigqueryParser::NULLS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::OF() {
  return getToken(bigqueryParser::OF, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::OFFSET() {
  return getToken(bigqueryParser::OFFSET, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ON() {
  return getToken(bigqueryParser::ON, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::OR() {
  return getToken(bigqueryParser::OR, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ORDER() {
  return getToken(bigqueryParser::ORDER, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ORDINAL() {
  return getToken(bigqueryParser::ORDINAL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::OUTER() {
  return getToken(bigqueryParser::OUTER, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::OVER() {
  return getToken(bigqueryParser::OVER, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::PARTITION() {
  return getToken(bigqueryParser::PARTITION, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::PRECEDING() {
  return getToken(bigqueryParser::PRECEDING, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::PROTO() {
  return getToken(bigqueryParser::PROTO, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::RANGE() {
  return getToken(bigqueryParser::RANGE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::RECURSIVE() {
  return getToken(bigqueryParser::RECURSIVE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::REPLACE() {
  return getToken(bigqueryParser::REPLACE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::RESPECT() {
  return getToken(bigqueryParser::RESPECT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::RIGHT() {
  return getToken(bigqueryParser::RIGHT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ROLLUP() {
  return getToken(bigqueryParser::ROLLUP, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::ROWS() {
  return getToken(bigqueryParser::ROWS, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::SAFE_OFFSET() {
  return getToken(bigqueryParser::SAFE_OFFSET, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::SAFE_ORDINAL() {
  return getToken(bigqueryParser::SAFE_ORDINAL, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::SELECT() {
  return getToken(bigqueryParser::SELECT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::SET() {
  return getToken(bigqueryParser::SET, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::SOME() {
  return getToken(bigqueryParser::SOME, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::SSTRUCT() {
  return getToken(bigqueryParser::SSTRUCT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::SYSTEM() {
  return getToken(bigqueryParser::SYSTEM, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::TABLESAMPLE() {
  return getToken(bigqueryParser::TABLESAMPLE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::THEN() {
  return getToken(bigqueryParser::THEN, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::TIME() {
  return getToken(bigqueryParser::TIME, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::TO() {
  return getToken(bigqueryParser::TO, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::TREAT() {
  return getToken(bigqueryParser::TREAT, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::TRUE() {
  return getToken(bigqueryParser::TRUE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::UNBOUNDED() {
  return getToken(bigqueryParser::UNBOUNDED, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::UNION() {
  return getToken(bigqueryParser::UNION, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::UNNEST() {
  return getToken(bigqueryParser::UNNEST, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::USING() {
  return getToken(bigqueryParser::USING, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::WHEN() {
  return getToken(bigqueryParser::WHEN, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::WHERE() {
  return getToken(bigqueryParser::WHERE, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::WINDOW() {
  return getToken(bigqueryParser::WINDOW, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::WITH() {
  return getToken(bigqueryParser::WITH, 0);
}

tree::TerminalNode* bigqueryParser::KeywordContext::WITHIN() {
  return getToken(bigqueryParser::WITHIN, 0);
}


size_t bigqueryParser::KeywordContext::getRuleIndex() const {
  return bigqueryParser::RuleKeyword;
}

void bigqueryParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void bigqueryParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<bigqueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}

bigqueryParser::KeywordContext* bigqueryParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 110, bigqueryParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(657);
    _la = _input->LA(1);
    if (!(((((_la - 30) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 30)) & ((1ULL << (bigqueryParser::ALL - 30))
      | (1ULL << (bigqueryParser::AND - 30))
      | (1ULL << (bigqueryParser::ANY - 30))
      | (1ULL << (bigqueryParser::ARRAY - 30))
      | (1ULL << (bigqueryParser::AS - 30))
      | (1ULL << (bigqueryParser::ASC - 30))
      | (1ULL << (bigqueryParser::ASSERT_ROWS_MODIFIED - 30))
      | (1ULL << (bigqueryParser::AT - 30))
      | (1ULL << (bigqueryParser::BETWEEN - 30))
      | (1ULL << (bigqueryParser::BY - 30))
      | (1ULL << (bigqueryParser::CASE - 30))
      | (1ULL << (bigqueryParser::CAST - 30))
      | (1ULL << (bigqueryParser::COLLATE - 30))
      | (1ULL << (bigqueryParser::CONTAINS - 30))
      | (1ULL << (bigqueryParser::CREATE - 30))
      | (1ULL << (bigqueryParser::CROSS - 30))
      | (1ULL << (bigqueryParser::CUBE - 30))
      | (1ULL << (bigqueryParser::CURRENT - 30))
      | (1ULL << (bigqueryParser::DEFAULT - 30))
      | (1ULL << (bigqueryParser::DEFINE - 30))
      | (1ULL << (bigqueryParser::DESC - 30))
      | (1ULL << (bigqueryParser::DISTINCT - 30))
      | (1ULL << (bigqueryParser::ELSE - 30))
      | (1ULL << (bigqueryParser::END - 30))
      | (1ULL << (bigqueryParser::ENUM - 30))
      | (1ULL << (bigqueryParser::ESCAPE - 30))
      | (1ULL << (bigqueryParser::EXCEPT - 30))
      | (1ULL << (bigqueryParser::EXCLUDE - 30))
      | (1ULL << (bigqueryParser::EXISTS - 30))
      | (1ULL << (bigqueryParser::EXTRACT - 30))
      | (1ULL << (bigqueryParser::FALSE - 30))
      | (1ULL << (bigqueryParser::FETCH - 30))
      | (1ULL << (bigqueryParser::FOLLOWING - 30))
      | (1ULL << (bigqueryParser::FOR - 30))
      | (1ULL << (bigqueryParser::FROM - 30))
      | (1ULL << (bigqueryParser::FULL - 30))
      | (1ULL << (bigqueryParser::GROUP - 30))
      | (1ULL << (bigqueryParser::GROUPING - 30))
      | (1ULL << (bigqueryParser::GROUPS - 30))
      | (1ULL << (bigqueryParser::HASH - 30))
      | (1ULL << (bigqueryParser::HAVING - 30))
      | (1ULL << (bigqueryParser::IF - 30))
      | (1ULL << (bigqueryParser::IGNORE - 30))
      | (1ULL << (bigqueryParser::IN - 30))
      | (1ULL << (bigqueryParser::INNER - 30))
      | (1ULL << (bigqueryParser::INTERSECT - 30))
      | (1ULL << (bigqueryParser::INTERVAL - 30))
      | (1ULL << (bigqueryParser::INTO - 30))
      | (1ULL << (bigqueryParser::IS - 30))
      | (1ULL << (bigqueryParser::JOIN - 30))
      | (1ULL << (bigqueryParser::LATERAL - 30))
      | (1ULL << (bigqueryParser::LEFT - 30))
      | (1ULL << (bigqueryParser::LIKE - 30))
      | (1ULL << (bigqueryParser::LIMIT - 30))
      | (1ULL << (bigqueryParser::LOOKUP - 30))
      | (1ULL << (bigqueryParser::MERGE - 30))
      | (1ULL << (bigqueryParser::NATURAL - 30))
      | (1ULL << (bigqueryParser::NEW - 30))
      | (1ULL << (bigqueryParser::NO - 30))
      | (1ULL << (bigqueryParser::NOT - 30))
      | (1ULL << (bigqueryParser::S_NULL - 30))
      | (1ULL << (bigqueryParser::NULLS - 30))
      | (1ULL << (bigqueryParser::OF - 30))
      | (1ULL << (bigqueryParser::OFFSET - 30)))) != 0) || ((((_la - 94) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 94)) & ((1ULL << (bigqueryParser::ON - 94))
      | (1ULL << (bigqueryParser::OR - 94))
      | (1ULL << (bigqueryParser::ORDER - 94))
      | (1ULL << (bigqueryParser::ORDINAL - 94))
      | (1ULL << (bigqueryParser::OUTER - 94))
      | (1ULL << (bigqueryParser::OVER - 94))
      | (1ULL << (bigqueryParser::PARTITION - 94))
      | (1ULL << (bigqueryParser::PRECEDING - 94))
      | (1ULL << (bigqueryParser::PROTO - 94))
      | (1ULL << (bigqueryParser::RANGE - 94))
      | (1ULL << (bigqueryParser::RECURSIVE - 94))
      | (1ULL << (bigqueryParser::REPLACE - 94))
      | (1ULL << (bigqueryParser::RESPECT - 94))
      | (1ULL << (bigqueryParser::RIGHT - 94))
      | (1ULL << (bigqueryParser::ROLLUP - 94))
      | (1ULL << (bigqueryParser::ROWS - 94))
      | (1ULL << (bigqueryParser::SAFE_OFFSET - 94))
      | (1ULL << (bigqueryParser::SAFE_ORDINAL - 94))
      | (1ULL << (bigqueryParser::SELECT - 94))
      | (1ULL << (bigqueryParser::SET - 94))
      | (1ULL << (bigqueryParser::SOME - 94))
      | (1ULL << (bigqueryParser::SSTRUCT - 94))
      | (1ULL << (bigqueryParser::SYSTEM - 94))
      | (1ULL << (bigqueryParser::TABLESAMPLE - 94))
      | (1ULL << (bigqueryParser::THEN - 94))
      | (1ULL << (bigqueryParser::TIME - 94))
      | (1ULL << (bigqueryParser::TO - 94))
      | (1ULL << (bigqueryParser::TREAT - 94))
      | (1ULL << (bigqueryParser::TRUE - 94))
      | (1ULL << (bigqueryParser::UNBOUNDED - 94))
      | (1ULL << (bigqueryParser::UNION - 94))
      | (1ULL << (bigqueryParser::UNNEST - 94))
      | (1ULL << (bigqueryParser::USING - 94))
      | (1ULL << (bigqueryParser::WHEN - 94))
      | (1ULL << (bigqueryParser::WHERE - 94))
      | (1ULL << (bigqueryParser::WINDOW - 94))
      | (1ULL << (bigqueryParser::WITH - 94))
      | (1ULL << (bigqueryParser::WITHIN - 94)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool bigqueryParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return from_itemSempred(dynamic_cast<From_itemContext *>(context), predicateIndex);
    case 15: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool bigqueryParser::from_itemSempred(From_itemContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool bigqueryParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 19);
    case 2: return precpred(_ctx, 18);
    case 3: return precpred(_ctx, 17);
    case 4: return precpred(_ctx, 16);
    case 5: return precpred(_ctx, 15);
    case 6: return precpred(_ctx, 14);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 9);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);
    case 11: return precpred(_ctx, 12);
    case 12: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> bigqueryParser::_decisionToDFA;
atn::PredictionContextCache bigqueryParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN bigqueryParser::_atn;
std::vector<uint16_t> bigqueryParser::_serializedATN;

std::vector<std::string> bigqueryParser::_ruleNames = {
  "parse", "query_statement", "query_expr", "select_statement", "expression_list", 
  "star_expr", "alias_expr", "from_statement", "from_item", "where_statement", 
  "group_statement", "having_statement", "order_clause", "limit_clause", 
  "unary_operator", "expr", "cast_expr", "column_expr", "except_statement", 
  "replace_statement", "join_type", "on_clause", "set_op", "using_clause", 
  "sstruct", "array_expr", "bool_expression", "count", "skip_rows", "with_statement", 
  "cte_expr", "name", "alias_name", "array_name", "column_name", "cte_name", 
  "dataset_name", "datatype_name", "function_name", "join_name", "member_name", 
  "project_name", "struct_name", "table_name", "table_expr", "number", "integer_type", 
  "float_type", "string", "quoted_string", "triple_quoted_string", "raw_string", 
  "byte_string", "raw_byte_string", "special_string", "keyword"
};

std::vector<std::string> bigqueryParser::_literalNames = {
  "", "'('", "')'", "','", "'.'", "'*'", "'-'", "'~'", "'['", "']'", "'/'", 
  "'+'", "'<<'", "'>>'", "'&'", "'^'", "'|'", "'='", "'<'", "'>'", "'<='", 
  "'>='", "'!='", "'<>'", "'`'", "", "", "", "'''", "'\"'"
};

std::vector<std::string> bigqueryParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "INT", "FLOAT", "DIGITS", "QUOTE", "DQOUTE", 
  "ALL", "AND", "ANY", "ARRAY", "AS", "ASC", "ASSERT_ROWS_MODIFIED", "AT", 
  "BETWEEN", "BY", "CASE", "CAST", "COLLATE", "CONTAINS", "CREATE", "CROSS", 
  "CUBE", "CURRENT", "DEFAULT", "DEFINE", "DESC", "DISTINCT", "ELSE", "END", 
  "ENUM", "ESCAPE", "EXCEPT", "EXCLUDE", "EXISTS", "EXTRACT", "FALSE", "FETCH", 
  "FOLLOWING", "FOR", "FROM", "FULL", "GROUP", "GROUPING", "GROUPS", "HASH", 
  "HAVING", "IF", "IGNORE", "IN", "INNER", "INTERSECT", "INTERVAL", "INTO", 
  "IS", "JOIN", "LATERAL", "LEFT", "LIKE", "LIMIT", "LOOKUP", "MERGE", "NATURAL", 
  "NEW", "NO", "NOT", "S_NULL", "NULLS", "OF", "OFFSET", "ON", "OR", "ORDER", 
  "ORDINAL", "OUTER", "OVER", "PARTITION", "PRECEDING", "PROTO", "RANGE", 
  "RECURSIVE", "REPLACE", "RESPECT", "RIGHT", "ROLLUP", "ROWS", "SAFE_OFFSET", 
  "SAFE_ORDINAL", "SELECT", "SET", "SOME", "SSTRUCT", "SYSTEM", "TABLESAMPLE", 
  "THEN", "TIME", "TO", "TREAT", "TRUE", "UNBOUNDED", "UNION", "UNNEST", 
  "USING", "WHEN", "WHERE", "WINDOW", "WITH", "WITHIN", "WS", "CMT", "M_CMT", 
  "QUOTED_STRING", "TRIPLE_QUOTED_STRING", "RAW_STRING", "BYTE_STRING", 
  "RAW_BYTE_STRING", "ID", "RB"
};

dfa::Vocabulary bigqueryParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> bigqueryParser::_tokenNames;

bigqueryParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x8f, 0x296, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x5, 0x3, 0x76, 0xa, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x7e, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x81, 0xb, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x84, 0xa, 0x4, 0x3, 0x4, 0x5, 0x4, 0x87, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x8d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x91, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x95, 0xa, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x98, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x9b, 0xa, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x9e, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa2, 
    0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa5, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa8, 
    0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xad, 0xa, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0xb0, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0xb3, 0xa, 0x6, 0x7, 
    0x6, 0xb5, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xb8, 0xb, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0xbd, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xc3, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0xc6, 0xa, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0xcc, 0xa, 0x9, 0xc, 
    0x9, 0xe, 0x9, 0xcf, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0xd4, 0xa, 0xa, 0x3, 0xa, 0x5, 0xa, 0xd7, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xdf, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xe5, 0xa, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0xe8, 0xa, 0xa, 0x5, 0xa, 0xea, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0xee, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0xf4, 0xa, 0xa, 0x7, 0xa, 0xf6, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0xf9, 
    0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x103, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x106, 
    0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
    0x10d, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x110, 0xb, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0x114, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x11d, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x122, 0xa, 0xe, 0x7, 0xe, 0x124, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x127, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x12d, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x141, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x146, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x14e, 0xa, 0x11, 0xc, 0x11, 
    0xe, 0x11, 0x151, 0xb, 0x11, 0x3, 0x11, 0x5, 0x11, 0x154, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x15f, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x17c, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0x17f, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x184, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x194, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x199, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0x1a0, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x1a3, 0xb, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x1ad, 0xa, 0x11, 0x7, 0x11, 0x1af, 0xa, 
    0x11, 0xc, 0x11, 0xe, 0x11, 0x1b2, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x1c2, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1c7, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x1cc, 0xa, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x1cf, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x1d6, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 
    0x1d9, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x5, 0x15, 0x1e1, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1e4, 
    0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1e9, 0xa, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x1ec, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x1ef, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x5, 0x16, 0x1f7, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x1fb, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1ff, 0xa, 0x16, 
    0x5, 0x16, 0x201, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x208, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0x20e, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x215, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x218, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x230, 0xa, 0x1f, 
    0xc, 0x1f, 0xe, 0x1f, 0x233, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x5, 0x21, 0x24c, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x269, 
    0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x26e, 0xa, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x275, 
    0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x279, 0xa, 0x2f, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x285, 0xa, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 
    0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x2, 0x4, 0x12, 0x20, 0x3a, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
    0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
    0x6a, 0x6c, 0x6e, 0x70, 0x2, 0xa, 0x4, 0x2, 0x20, 0x20, 0x35, 0x35, 
    0x4, 0x2, 0x25, 0x25, 0x34, 0x34, 0x4, 0x2, 0x8, 0x9, 0x5b, 0x5b, 0x5, 
    0x2, 0x5f, 0x5f, 0x63, 0x63, 0x70, 0x71, 0x4, 0x2, 0x7, 0x7, 0xc, 0xc, 
    0x4, 0x2, 0x8, 0x8, 0xd, 0xd, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0x20, 0x85, 
    0x2, 0x2cc, 0x2, 0x72, 0x3, 0x2, 0x2, 0x2, 0x4, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xc, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xe, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x12, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x16, 0xfd, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x115, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x128, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x1ce, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1dc, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x200, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x202, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x30, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x34, 0x220, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x225, 0x3, 0x2, 0x2, 0x2, 0x38, 0x227, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x229, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x234, 0x3, 0x2, 0x2, 0x2, 0x40, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x42, 0x24d, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x46, 0x251, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x253, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x255, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x257, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x259, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x52, 0x25d, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x261, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x263, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x274, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x278, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x60, 0x27c, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x284, 0x3, 0x2, 0x2, 0x2, 0x64, 0x286, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x288, 0x3, 0x2, 0x2, 0x2, 0x68, 0x28a, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x28e, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x290, 0x3, 0x2, 0x2, 0x2, 0x70, 0x293, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x73, 0x5, 0x4, 0x3, 0x2, 0x73, 0x3, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 
    0x5, 0x3c, 0x1f, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x5, 0x6, 
    0x4, 0x2, 0x78, 0x5, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7f, 0x5, 0x8, 0x5, 
    0x2, 0x7a, 0x7b, 0x5, 0x2e, 0x18, 0x2, 0x7b, 0x7c, 0x5, 0x8, 0x5, 0x2, 
    0x7c, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x84, 0x5, 0x1a, 0xe, 0x2, 0x83, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x87, 0x5, 0x1c, 0xf, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x89, 0x7, 0x3, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x6, 0x4, 0x2, 0x8a, 0x8b, 
    0x7, 0x4, 0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x8e, 0x90, 0x7, 0x72, 0x2, 0x2, 0x8f, 0x91, 0x9, 0x2, 0x2, 
    0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x5, 0xa, 0x6, 0x2, 0x93, 
    0x95, 0x5, 0x10, 0x9, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x5, 
    0x14, 0xb, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x16, 0xc, 
    0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0x18, 0xd, 0x2, 0x9d, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0xc, 0x7, 0x2, 0xa0, 0xa2, 0x5, 
    0x26, 0x14, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa5, 0x5, 0x28, 0x15, 
    0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0xe, 0x8, 0x2, 0xa7, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xb2, 0x7, 0x5, 0x2, 0x2, 0xaa, 0xac, 0x5, 
    0xc, 0x7, 0x2, 0xab, 0xad, 0x5, 0x26, 0x14, 0x2, 0xac, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xb0, 0x5, 0x28, 0x15, 0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb3, 0x5, 0xe, 0x8, 0x2, 0xb2, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x20, 0x11, 0x2, 
    0xba, 0xbb, 0x7, 0x6, 0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x7, 0x2, 0x2, 0xbf, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xc5, 0x5, 0x20, 0x11, 0x2, 0xc1, 0xc3, 0x7, 0x24, 
    0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc6, 0x5, 0x42, 0x22, 0x2, 
    0xc5, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x42, 0x2, 0x2, 0xc8, 0xcd, 
    0x5, 0x12, 0xa, 0x2, 0xc9, 0xca, 0x7, 0x5, 0x2, 0x2, 0xca, 0xcc, 0x5, 
    0x12, 0xa, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0x11, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd1, 0x8, 0xa, 0x1, 0x2, 0xd1, 0xd6, 0x5, 0x5a, 0x2e, 0x2, 0xd2, 
    0xd4, 0x7, 0x24, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x5, 
    0x42, 0x22, 0x2, 0xd6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xde, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x41, 0x2, 
    0x2, 0xd9, 0xda, 0x7, 0x76, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x79, 0x2, 0x2, 
    0xdb, 0xdc, 0x7, 0x24, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x5e, 0x2, 0x2, 0xdd, 
    0xdf, 0x5, 0x62, 0x32, 0x2, 0xde, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xdf, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 
    0x3, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x4, 0x3, 0x2, 0xe2, 0xe7, 0x7, 0x4, 
    0x2, 0x2, 0xe3, 0xe5, 0x7, 0x24, 0x2, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe8, 0x5, 0x42, 0x22, 0x2, 0xe7, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xe9, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xea, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0xed, 0xc, 0x4, 0x2, 0x2, 0xec, 0xee, 0x5, 0x2a, 
    0x16, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x51, 0x2, 0x2, 
    0xf0, 0xf3, 0x5, 0x12, 0xa, 0x2, 0xf1, 0xf4, 0x5, 0x2c, 0x17, 0x2, 0xf2, 
    0xf4, 0x5, 0x30, 0x19, 0x2, 0xf3, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x82, 0x2, 0x2, 
    0xfb, 0xfc, 0x5, 0x36, 0x1c, 0x2, 0xfc, 0x15, 0x3, 0x2, 0x2, 0x2, 0xfd, 
    0xfe, 0x7, 0x44, 0x2, 0x2, 0xfe, 0x113, 0x7, 0x29, 0x2, 0x2, 0xff, 0x104, 
    0x5, 0x20, 0x11, 0x2, 0x100, 0x101, 0x7, 0x5, 0x2, 0x2, 0x101, 0x103, 
    0x5, 0x20, 0x11, 0x2, 0x102, 0x100, 0x3, 0x2, 0x2, 0x2, 0x103, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x114, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x6e, 0x2, 0x2, 0x108, 0x109, 
    0x7, 0x3, 0x2, 0x2, 0x109, 0x10e, 0x5, 0x20, 0x11, 0x2, 0x10a, 0x10b, 
    0x7, 0x5, 0x2, 0x2, 0x10b, 0x10d, 0x5, 0x20, 0x11, 0x2, 0x10c, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 
    0x7, 0x4, 0x2, 0x2, 0x112, 0x114, 0x3, 0x2, 0x2, 0x2, 0x113, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x107, 0x3, 0x2, 0x2, 0x2, 0x114, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x116, 0x7, 0x48, 0x2, 0x2, 0x116, 0x117, 0x5, 0x36, 
    0x1c, 0x2, 0x117, 0x19, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 0x62, 
    0x2, 0x2, 0x119, 0x11a, 0x7, 0x29, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x20, 
    0x11, 0x2, 0x11b, 0x11d, 0x9, 0x3, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x11e, 0x11f, 0x7, 0x5, 0x2, 0x2, 0x11f, 0x121, 0x5, 0x20, 
    0x11, 0x2, 0x120, 0x122, 0x9, 0x3, 0x2, 0x2, 0x121, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x126, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x129, 0x7, 0x55, 0x2, 0x2, 0x129, 0x12c, 0x5, 0x38, 0x1d, 
    0x2, 0x12a, 0x12b, 0x7, 0x5f, 0x2, 0x2, 0x12b, 0x12d, 0x5, 0x3a, 0x1e, 
    0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x9, 0x4, 0x2, 0x2, 
    0x12f, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x8, 0x11, 0x1, 0x2, 
    0x131, 0x15f, 0x5, 0x5c, 0x2f, 0x2, 0x132, 0x15f, 0x5, 0x62, 0x32, 0x2, 
    0x133, 0x134, 0x5, 0x44, 0x23, 0x2, 0x134, 0x135, 0x7, 0xa, 0x2, 0x2, 
    0x135, 0x136, 0x9, 0x5, 0x2, 0x2, 0x136, 0x137, 0x7, 0x3, 0x2, 0x2, 
    0x137, 0x138, 0x5, 0x20, 0x11, 0x2, 0x138, 0x139, 0x7, 0x4, 0x2, 0x2, 
    0x139, 0x13a, 0x7, 0xb, 0x2, 0x2, 0x13a, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x13b, 0x13c, 0x5, 0x1e, 0x10, 0x2, 0x13c, 0x13d, 0x5, 0x20, 0x11, 0x16, 
    0x13d, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x140, 0x7, 0x50, 0x2, 0x2, 
    0x13f, 0x141, 0x7, 0x5b, 0x2, 0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x15f, 0x7, 0x7c, 0x2, 0x2, 0x143, 0x145, 0x7, 0x50, 0x2, 0x2, 
    0x144, 0x146, 0x7, 0x5b, 0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x15f, 0x7, 0x3e, 0x2, 0x2, 0x148, 0x149, 0x5, 0x4e, 0x28, 0x2, 
    0x149, 0x153, 0x7, 0x3, 0x2, 0x2, 0x14a, 0x14f, 0x5, 0x20, 0x11, 0x2, 
    0x14b, 0x14c, 0x7, 0x5, 0x2, 0x2, 0x14c, 0x14e, 0x5, 0x20, 0x11, 0x2, 
    0x14d, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x151, 0x3, 0x2, 0x2, 0x2, 
    0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x150, 0x154, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x154, 0x7, 0x7, 0x2, 0x2, 0x153, 0x14a, 0x3, 0x2, 0x2, 0x2, 
    0x153, 0x152, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x7, 0x4, 0x2, 0x2, 0x156, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x157, 0x15f, 0x5, 0x22, 0x12, 0x2, 0x158, 0x159, 0x7, 0x3, 0x2, 0x2, 
    0x159, 0x15a, 0x5, 0x20, 0x11, 0x2, 0x15a, 0x15b, 0x7, 0x4, 0x2, 0x2, 
    0x15b, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15f, 0x5, 0x24, 0x13, 0x2, 
    0x15d, 0x15f, 0x5, 0x70, 0x39, 0x2, 0x15e, 0x130, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x132, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x133, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x13e, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x143, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x148, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15d, 0x3, 0x2, 0x2, 0x2, 
    0x15f, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0xc, 0x15, 0x2, 0x2, 
    0x161, 0x162, 0x9, 0x6, 0x2, 0x2, 0x162, 0x1af, 0x5, 0x20, 0x11, 0x16, 
    0x163, 0x164, 0xc, 0x14, 0x2, 0x2, 0x164, 0x165, 0x9, 0x7, 0x2, 0x2, 
    0x165, 0x1af, 0x5, 0x20, 0x11, 0x15, 0x166, 0x167, 0xc, 0x13, 0x2, 0x2, 
    0x167, 0x168, 0x9, 0x8, 0x2, 0x2, 0x168, 0x1af, 0x5, 0x20, 0x11, 0x14, 
    0x169, 0x16a, 0xc, 0x12, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x10, 0x2, 0x2, 
    0x16b, 0x1af, 0x5, 0x20, 0x11, 0x13, 0x16c, 0x16d, 0xc, 0x11, 0x2, 0x2, 
    0x16d, 0x16e, 0x7, 0x11, 0x2, 0x2, 0x16e, 0x1af, 0x5, 0x20, 0x11, 0x12, 
    0x16f, 0x170, 0xc, 0x10, 0x2, 0x2, 0x170, 0x171, 0x7, 0x12, 0x2, 0x2, 
    0x171, 0x1af, 0x5, 0x20, 0x11, 0x11, 0x172, 0x17e, 0xc, 0xf, 0x2, 0x2, 
    0x173, 0x17f, 0x7, 0x13, 0x2, 0x2, 0x174, 0x17f, 0x7, 0x14, 0x2, 0x2, 
    0x175, 0x17f, 0x7, 0x15, 0x2, 0x2, 0x176, 0x17f, 0x7, 0x16, 0x2, 0x2, 
    0x177, 0x17f, 0x7, 0x17, 0x2, 0x2, 0x178, 0x17f, 0x7, 0x18, 0x2, 0x2, 
    0x179, 0x17f, 0x7, 0x19, 0x2, 0x2, 0x17a, 0x17c, 0x7, 0x5b, 0x2, 0x2, 
    0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17f, 0x7, 0x54, 0x2, 0x2, 
    0x17e, 0x173, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x174, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x175, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x176, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x177, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x178, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17b, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 0x1af, 0x5, 0x20, 0x11, 0x10, 
    0x181, 0x183, 0xc, 0xb, 0x2, 0x2, 0x182, 0x184, 0x7, 0x5b, 0x2, 0x2, 
    0x183, 0x182, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 
    0x184, 0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 0x28, 0x2, 0x2, 
    0x186, 0x187, 0x5, 0x20, 0x11, 0x2, 0x187, 0x188, 0x7, 0x21, 0x2, 0x2, 
    0x188, 0x189, 0x5, 0x20, 0x11, 0xc, 0x189, 0x1af, 0x3, 0x2, 0x2, 0x2, 
    0x18a, 0x18b, 0xc, 0x9, 0x2, 0x2, 0x18b, 0x18c, 0x7, 0x21, 0x2, 0x2, 
    0x18c, 0x1af, 0x5, 0x20, 0x11, 0xa, 0x18d, 0x18e, 0xc, 0x8, 0x2, 0x2, 
    0x18e, 0x18f, 0x7, 0x61, 0x2, 0x2, 0x18f, 0x1af, 0x5, 0x20, 0x11, 0x9, 
    0x190, 0x191, 0xc, 0xe, 0x2, 0x2, 0x191, 0x193, 0x7, 0x50, 0x2, 0x2, 
    0x192, 0x194, 0x7, 0x5b, 0x2, 0x2, 0x193, 0x192, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x1af, 0x7, 0x5c, 0x2, 0x2, 0x196, 0x198, 0xc, 0xa, 0x2, 0x2, 
    0x197, 0x199, 0x7, 0x5b, 0x2, 0x2, 0x198, 0x197, 0x3, 0x2, 0x2, 0x2, 
    0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x1ac, 0x7, 0x4b, 0x2, 0x2, 0x19b, 0x19c, 0x7, 0x3, 0x2, 0x2, 
    0x19c, 0x1a1, 0x5, 0x20, 0x11, 0x2, 0x19d, 0x19e, 0x7, 0x5, 0x2, 0x2, 
    0x19e, 0x1a0, 0x5, 0x20, 0x11, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x19f, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a4, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x4, 0x2, 0x2, 
    0x1a5, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1ad, 0x5, 0x4, 0x3, 0x2, 
    0x1a7, 0x1a8, 0x7, 0x7f, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x3, 0x2, 0x2, 
    0x1a9, 0x1aa, 0x5, 0x34, 0x1b, 0x2, 0x1aa, 0x1ab, 0x7, 0x4, 0x2, 0x2, 
    0x1ab, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x1ac, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x1ad, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x163, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x169, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x181, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x190, 0x3, 0x2, 0x2, 0x2, 
    0x1ae, 0x196, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b2, 0x3, 0x2, 0x2, 0x2, 
    0x1b0, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x1b4, 0x7, 0x2b, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x3, 0x2, 0x2, 0x1b5, 
    0x1b6, 0x5, 0x20, 0x11, 0x2, 0x1b6, 0x1b7, 0x7, 0x24, 0x2, 0x2, 0x1b7, 
    0x1b8, 0x5, 0x4c, 0x27, 0x2, 0x1b8, 0x1b9, 0x7, 0x4, 0x2, 0x2, 0x1b9, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x1a, 0x2, 0x2, 0x1bb, 
    0x1bc, 0x5, 0x24, 0x13, 0x2, 0x1bc, 0x1bd, 0x7, 0x1a, 0x2, 0x2, 0x1bd, 
    0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0x54, 0x2b, 0x2, 0x1bf, 
    0x1c0, 0x7, 0x6, 0x2, 0x2, 0x1c0, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
    0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
    0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x5, 0x4a, 0x26, 0x2, 0x1c4, 
    0x1c5, 0x7, 0x6, 0x2, 0x2, 0x1c5, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c6, 
    0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x5, 0x58, 0x2d, 0x2, 0x1c9, 
    0x1ca, 0x7, 0x6, 0x2, 0x2, 0x1ca, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cb, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 
    0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cf, 0x5, 0x46, 0x24, 0x2, 0x1ce, 
    0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x3a, 0x2, 0x2, 0x1d1, 
    0x1d2, 0x7, 0x3, 0x2, 0x2, 0x1d2, 0x1d7, 0x5, 0x46, 0x24, 0x2, 0x1d3, 
    0x1d4, 0x7, 0x5, 0x2, 0x2, 0x1d4, 0x1d6, 0x5, 0x46, 0x24, 0x2, 0x1d5, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1da, 
    0x1db, 0x7, 0x4, 0x2, 0x2, 0x1db, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 
    0x7, 0x6b, 0x2, 0x2, 0x1dd, 0x1de, 0x7, 0x3, 0x2, 0x2, 0x1de, 0x1e3, 
    0x5, 0x20, 0x11, 0x2, 0x1df, 0x1e1, 0x7, 0x24, 0x2, 0x2, 0x1e0, 0x1df, 
    0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 
    0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e4, 0x5, 0x42, 0x22, 0x2, 0x1e3, 0x1e0, 
    0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 
    0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x5, 0x2, 0x2, 0x1e6, 0x1ed, 
    0x5, 0x20, 0x11, 0x2, 0x1e7, 0x1e9, 0x7, 0x24, 0x2, 0x2, 0x1e8, 0x1e7, 
    0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 
    0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ec, 0x5, 0x42, 0x22, 0x2, 0x1eb, 0x1e8, 
    0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1eb, 
    0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f0, 
    0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 
    0x7, 0x4, 0x2, 0x2, 0x1f1, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x201, 0x7, 
    0x4c, 0x2, 0x2, 0x1f3, 0x201, 0x7, 0x2f, 0x2, 0x2, 0x1f4, 0x1f6, 0x7, 
    0x43, 0x2, 0x2, 0x1f5, 0x1f7, 0x7, 0x64, 0x2, 0x2, 0x1f6, 0x1f5, 0x3, 
    0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x201, 0x3, 
    0x2, 0x2, 0x2, 0x1f8, 0x1fa, 0x7, 0x53, 0x2, 0x2, 0x1f9, 0x1fb, 0x7, 
    0x64, 0x2, 0x2, 0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 
    0x2, 0x2, 0x2, 0x1fb, 0x201, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fe, 0x7, 
    0x6d, 0x2, 0x2, 0x1fd, 0x1ff, 0x7, 0x64, 0x2, 0x2, 0x1fe, 0x1fd, 0x3, 
    0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x201, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1f8, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x201, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x202, 0x203, 0x7, 0x60, 0x2, 0x2, 0x203, 0x204, 0x5, 0x36, 
    0x1c, 0x2, 0x204, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x205, 0x207, 0x7, 0x7e, 
    0x2, 0x2, 0x206, 0x208, 0x9, 0x2, 0x2, 0x2, 0x207, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x207, 0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x20a, 0x7, 0x4d, 0x2, 0x2, 0x20a, 0x20e, 0x7, 0x35, 
    0x2, 0x2, 0x20b, 0x20c, 0x7, 0x3a, 0x2, 0x2, 0x20c, 0x20e, 0x7, 0x35, 
    0x2, 0x2, 0x20d, 0x205, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x20d, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x20f, 0x210, 0x7, 0x80, 0x2, 0x2, 0x210, 0x211, 0x7, 0x3, 0x2, 
    0x2, 0x211, 0x216, 0x5, 0x50, 0x29, 0x2, 0x212, 0x213, 0x7, 0x5, 0x2, 
    0x2, 0x213, 0x215, 0x5, 0x50, 0x29, 0x2, 0x214, 0x212, 0x3, 0x2, 0x2, 
    0x2, 0x215, 0x218, 0x3, 0x2, 0x2, 0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 
    0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 0x219, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x4, 0x2, 
    0x2, 0x21a, 0x31, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x75, 0x2, 
    0x2, 0x21c, 0x21d, 0x7, 0x14, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0x4c, 0x27, 
    0x2, 0x21e, 0x21f, 0x7, 0x15, 0x2, 0x2, 0x21f, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x220, 0x221, 0x7, 0x23, 0x2, 0x2, 0x221, 0x222, 0x7, 0x14, 0x2, 
    0x2, 0x222, 0x223, 0x5, 0x4c, 0x27, 0x2, 0x223, 0x224, 0x7, 0x15, 0x2, 
    0x2, 0x224, 0x35, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x5, 0x20, 0x11, 
    0x2, 0x226, 0x37, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x5, 0x5c, 0x2f, 
    0x2, 0x228, 0x39, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x5, 0x5c, 0x2f, 
    0x2, 0x22a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x84, 0x2, 
    0x2, 0x22c, 0x231, 0x5, 0x3e, 0x20, 0x2, 0x22d, 0x22e, 0x7, 0x5, 0x2, 
    0x2, 0x22e, 0x230, 0x5, 0x3e, 0x20, 0x2, 0x22f, 0x22d, 0x3, 0x2, 0x2, 
    0x2, 0x230, 0x233, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 
    0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x5, 0x48, 0x25, 0x2, 
    0x235, 0x236, 0x7, 0x24, 0x2, 0x2, 0x236, 0x237, 0x7, 0x3, 0x2, 0x2, 
    0x237, 0x238, 0x5, 0x6, 0x4, 0x2, 0x238, 0x239, 0x7, 0x4, 0x2, 0x2, 
    0x239, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x24c, 0x7, 0x8e, 0x2, 0x2, 
    0x23b, 0x23c, 0x7, 0x1f, 0x2, 0x2, 0x23c, 0x23d, 0x5, 0x40, 0x21, 0x2, 
    0x23d, 0x23e, 0x7, 0x1f, 0x2, 0x2, 0x23e, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x23f, 0x240, 0x7, 0x3, 0x2, 0x2, 0x240, 0x241, 0x5, 0x40, 0x21, 0x2, 
    0x241, 0x242, 0x7, 0x4, 0x2, 0x2, 0x242, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x243, 0x244, 0x7, 0x1a, 0x2, 0x2, 0x244, 0x245, 0x5, 0x40, 0x21, 0x2, 
    0x245, 0x246, 0x7, 0x1a, 0x2, 0x2, 0x246, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x248, 0x7, 0x1e, 0x2, 0x2, 0x248, 0x249, 0x5, 0x40, 0x21, 0x2, 
    0x249, 0x24a, 0x7, 0x1e, 0x2, 0x2, 0x24a, 0x24c, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x23b, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x243, 0x3, 0x2, 0x2, 0x2, 
    0x24b, 0x247, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x41, 0x3, 0x2, 0x2, 0x2, 0x24d, 
    0x24e, 0x5, 0x40, 0x21, 0x2, 0x24e, 0x43, 0x3, 0x2, 0x2, 0x2, 0x24f, 
    0x250, 0x5, 0x40, 0x21, 0x2, 0x250, 0x45, 0x3, 0x2, 0x2, 0x2, 0x251, 
    0x252, 0x5, 0x40, 0x21, 0x2, 0x252, 0x47, 0x3, 0x2, 0x2, 0x2, 0x253, 
    0x254, 0x5, 0x40, 0x21, 0x2, 0x254, 0x49, 0x3, 0x2, 0x2, 0x2, 0x255, 
    0x256, 0x5, 0x40, 0x21, 0x2, 0x256, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x257, 
    0x258, 0x5, 0x40, 0x21, 0x2, 0x258, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x25a, 0x5, 0x40, 0x21, 0x2, 0x25a, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x25b, 
    0x25c, 0x5, 0x40, 0x21, 0x2, 0x25c, 0x51, 0x3, 0x2, 0x2, 0x2, 0x25d, 
    0x25e, 0x5, 0x40, 0x21, 0x2, 0x25e, 0x53, 0x3, 0x2, 0x2, 0x2, 0x25f, 
    0x260, 0x5, 0x40, 0x21, 0x2, 0x260, 0x55, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x262, 0x5, 0x40, 0x21, 0x2, 0x262, 0x57, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x264, 0x5, 0x40, 0x21, 0x2, 0x264, 0x59, 0x3, 0x2, 0x2, 0x2, 0x265, 
    0x266, 0x5, 0x54, 0x2b, 0x2, 0x266, 0x267, 0x7, 0x6, 0x2, 0x2, 0x267, 
    0x269, 0x3, 0x2, 0x2, 0x2, 0x268, 0x265, 0x3, 0x2, 0x2, 0x2, 0x268, 
    0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26a, 
    0x26b, 0x5, 0x4a, 0x26, 0x2, 0x26b, 0x26c, 0x7, 0x6, 0x2, 0x2, 0x26c, 
    0x26e, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26d, 
    0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x26f, 
    0x275, 0x5, 0x58, 0x2d, 0x2, 0x270, 0x271, 0x7, 0x1a, 0x2, 0x2, 0x271, 
    0x272, 0x5, 0x5a, 0x2e, 0x2, 0x272, 0x273, 0x7, 0x1a, 0x2, 0x2, 0x273, 
    0x275, 0x3, 0x2, 0x2, 0x2, 0x274, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x274, 
    0x270, 0x3, 0x2, 0x2, 0x2, 0x275, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x276, 0x279, 
    0x5, 0x5e, 0x30, 0x2, 0x277, 0x279, 0x5, 0x60, 0x31, 0x2, 0x278, 0x276, 
    0x3, 0x2, 0x2, 0x2, 0x278, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x1b, 0x2, 0x2, 0x27b, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0x1c, 0x2, 0x2, 0x27d, 0x61, 0x3, 
    0x2, 0x2, 0x2, 0x27e, 0x285, 0x5, 0x64, 0x33, 0x2, 0x27f, 0x285, 0x5, 
    0x66, 0x34, 0x2, 0x280, 0x285, 0x5, 0x68, 0x35, 0x2, 0x281, 0x285, 0x5, 
    0x6a, 0x36, 0x2, 0x282, 0x285, 0x5, 0x6c, 0x37, 0x2, 0x283, 0x285, 0x5, 
    0x6e, 0x38, 0x2, 0x284, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x284, 0x27f, 0x3, 
    0x2, 0x2, 0x2, 0x284, 0x280, 0x3, 0x2, 0x2, 0x2, 0x284, 0x281, 0x3, 
    0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x284, 0x283, 0x3, 
    0x2, 0x2, 0x2, 0x285, 0x63, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 0x89, 
    0x2, 0x2, 0x287, 0x65, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 0x7, 0x8a, 
    0x2, 0x2, 0x289, 0x67, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x7, 0x8b, 
    0x2, 0x2, 0x28b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x7, 0x8c, 
    0x2, 0x2, 0x28d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x7, 0x8d, 
    0x2, 0x2, 0x28f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x5, 0x4c, 
    0x27, 0x2, 0x291, 0x292, 0x7, 0x89, 0x2, 0x2, 0x292, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x293, 0x294, 0x9, 0x9, 0x2, 0x2, 0x294, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x75, 0x7f, 0x83, 0x86, 0x8c, 0x90, 0x94, 0x97, 0x9a, 0x9d, 
    0xa1, 0xa4, 0xa7, 0xac, 0xaf, 0xb2, 0xb6, 0xbc, 0xc2, 0xc5, 0xcd, 0xd3, 
    0xd6, 0xde, 0xe4, 0xe7, 0xe9, 0xed, 0xf3, 0xf7, 0x104, 0x10e, 0x113, 
    0x11c, 0x121, 0x125, 0x12c, 0x140, 0x145, 0x14f, 0x153, 0x15e, 0x17b, 
    0x17e, 0x183, 0x193, 0x198, 0x1a1, 0x1ac, 0x1ae, 0x1b0, 0x1c1, 0x1c6, 
    0x1cb, 0x1ce, 0x1d7, 0x1e0, 0x1e3, 0x1e8, 0x1ed, 0x1f6, 0x1fa, 0x1fe, 
    0x200, 0x207, 0x20d, 0x216, 0x231, 0x24b, 0x268, 0x26d, 0x274, 0x278, 
    0x284, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

bigqueryParser::Initializer bigqueryParser::_init;
