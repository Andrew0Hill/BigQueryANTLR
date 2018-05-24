
// Generated from bigquery.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  bigqueryLexer : public antlr4::Lexer {
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

  bigqueryLexer(antlr4::CharStream *input);
  ~bigqueryLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

