
// Generated from grammar/mygr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace mylang {


class  mygrLexer : public antlr4::Lexer {
public:
  enum {
    PRINT = 1, IF = 2, ELSE = 3, ELIF = 4, WHILE = 5, FOR = 6, TRUE = 7, 
    FALSE = 8, INPUT = 9, INPUT_INT = 10, INPUT_FLOAT = 11, ID = 12, INT = 13, 
    FLOAT = 14, STRING = 15, ASSIGN = 16, SEMI = 17, LBRACE = 18, RBRACE = 19, 
    SUB = 20, ADD = 21, DIV = 22, MUL = 23, MOD = 24, INC = 25, DEC = 26, 
    EQ = 27, NEQ = 28, LT = 29, GT = 30, LTE = 31, GTE = 32, LAND = 33, 
    LOR = 34, LPAR = 35, RPAR = 36, WS = 37, COMMENT = 38
  };

  explicit mygrLexer(antlr4::CharStream *input);

  ~mygrLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace mylang
