
// Generated from grammar/mygr.g4 by ANTLR 4.13.2


#include "mygrListener.h"
#include "mygrVisitor.h"

#include "mygrParser.h"


using namespace antlrcpp;
using namespace mylang;

using namespace antlr4;

namespace {

struct MygrParserStaticData final {
  MygrParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MygrParserStaticData(const MygrParserStaticData&) = delete;
  MygrParserStaticData(MygrParserStaticData&&) = delete;
  MygrParserStaticData& operator=(const MygrParserStaticData&) = delete;
  MygrParserStaticData& operator=(MygrParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MygrParserStaticData> mygrParserStaticData = nullptr;

void mygrParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MygrParserStaticData>(
    std::vector<std::string>{
      "prog", "statement", "assignment", "print_statement", "if_statement", 
      "while_statement", "for_statement", "for_initializer", "for_condition", 
      "for_updater", "block", "expr", "logical_or_expr", "logical_and_expr", 
      "equality_expr", "relational_expr", "additive_expr", "multiplicative_expr", 
      "unary_expr", "postfix_expr", "primary_expr"
    },
    std::vector<std::string>{
      "", "'print'", "'if'", "'else'", "'elif'", "'while'", "'for'", "'true'", 
      "'false'", "'input'", "'input_int'", "'input_float'", "", "", "", 
      "", "'='", "';'", "'{'", "'}'", "'-'", "'+'", "'/'", "'*'", "'%'", 
      "'++'", "'--'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", "'&&'", 
      "'||'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "PRINT", "IF", "ELSE", "ELIF", "WHILE", "FOR", "TRUE", "FALSE", 
      "INPUT", "INPUT_INT", "INPUT_FLOAT", "ID", "INT", "FLOAT", "STRING", 
      "ASSIGN", "SEMI", "LBRACE", "RBRACE", "SUB", "ADD", "DIV", "MUL", 
      "MOD", "INC", "DEC", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "LAND", 
      "LOR", "LPAR", "RPAR", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,38,257,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,5,
  	0,44,8,0,10,0,12,0,47,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,64,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,86,8,4,10,4,12,4,89,9,4,1,4,
  	1,4,3,4,93,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,3,6,104,8,6,1,6,1,
  	6,3,6,108,8,6,1,6,1,6,3,6,112,8,6,1,6,1,6,1,6,1,7,1,7,3,7,119,8,7,1,8,
  	1,8,1,9,1,9,3,9,125,8,9,1,10,1,10,5,10,129,8,10,10,10,12,10,132,9,10,
  	1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,5,12,144,8,12,10,12,
  	12,12,147,9,12,1,13,1,13,1,13,1,13,1,13,1,13,5,13,155,8,13,10,13,12,13,
  	158,9,13,1,14,1,14,1,14,1,14,1,14,1,14,5,14,166,8,14,10,14,12,14,169,
  	9,14,1,15,1,15,1,15,1,15,1,15,1,15,5,15,177,8,15,10,15,12,15,180,9,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,5,16,188,8,16,10,16,12,16,191,9,16,1,17,
  	1,17,1,17,1,17,1,17,1,17,5,17,199,8,17,10,17,12,17,202,9,17,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,213,8,18,1,19,1,19,1,19,1,19,
  	1,19,1,19,1,19,5,19,222,8,19,10,19,12,19,225,9,19,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,240,8,20,1,20,1,20,
  	1,20,1,20,3,20,246,8,20,1,20,1,20,1,20,1,20,3,20,252,8,20,1,20,3,20,255,
  	8,20,1,20,0,7,24,26,28,30,32,34,38,21,0,2,4,6,8,10,12,14,16,18,20,22,
  	24,26,28,30,32,34,36,38,40,0,4,1,0,27,28,1,0,29,32,1,0,20,21,1,0,22,24,
  	274,0,45,1,0,0,0,2,63,1,0,0,0,4,65,1,0,0,0,6,69,1,0,0,0,8,74,1,0,0,0,
  	10,94,1,0,0,0,12,100,1,0,0,0,14,118,1,0,0,0,16,120,1,0,0,0,18,124,1,0,
  	0,0,20,126,1,0,0,0,22,135,1,0,0,0,24,137,1,0,0,0,26,148,1,0,0,0,28,159,
  	1,0,0,0,30,170,1,0,0,0,32,181,1,0,0,0,34,192,1,0,0,0,36,212,1,0,0,0,38,
  	214,1,0,0,0,40,254,1,0,0,0,42,44,3,2,1,0,43,42,1,0,0,0,44,47,1,0,0,0,
  	45,43,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,45,1,0,0,0,48,49,5,0,0,1,
  	49,1,1,0,0,0,50,51,3,4,2,0,51,52,5,17,0,0,52,64,1,0,0,0,53,54,3,6,3,0,
  	54,55,5,17,0,0,55,64,1,0,0,0,56,57,3,22,11,0,57,58,5,17,0,0,58,64,1,0,
  	0,0,59,64,3,8,4,0,60,64,3,10,5,0,61,64,3,12,6,0,62,64,3,20,10,0,63,50,
  	1,0,0,0,63,53,1,0,0,0,63,56,1,0,0,0,63,59,1,0,0,0,63,60,1,0,0,0,63,61,
  	1,0,0,0,63,62,1,0,0,0,64,3,1,0,0,0,65,66,5,12,0,0,66,67,5,16,0,0,67,68,
  	3,22,11,0,68,5,1,0,0,0,69,70,5,1,0,0,70,71,5,35,0,0,71,72,3,22,11,0,72,
  	73,5,36,0,0,73,7,1,0,0,0,74,75,5,2,0,0,75,76,5,35,0,0,76,77,3,22,11,0,
  	77,78,5,36,0,0,78,87,3,20,10,0,79,80,5,4,0,0,80,81,5,35,0,0,81,82,3,22,
  	11,0,82,83,5,36,0,0,83,84,3,20,10,0,84,86,1,0,0,0,85,79,1,0,0,0,86,89,
  	1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,92,1,0,0,0,89,87,1,0,0,0,90,91,
  	5,3,0,0,91,93,3,20,10,0,92,90,1,0,0,0,92,93,1,0,0,0,93,9,1,0,0,0,94,95,
  	5,5,0,0,95,96,5,35,0,0,96,97,3,22,11,0,97,98,5,36,0,0,98,99,3,20,10,0,
  	99,11,1,0,0,0,100,101,5,6,0,0,101,103,5,35,0,0,102,104,3,14,7,0,103,102,
  	1,0,0,0,103,104,1,0,0,0,104,105,1,0,0,0,105,107,5,17,0,0,106,108,3,16,
  	8,0,107,106,1,0,0,0,107,108,1,0,0,0,108,109,1,0,0,0,109,111,5,17,0,0,
  	110,112,3,18,9,0,111,110,1,0,0,0,111,112,1,0,0,0,112,113,1,0,0,0,113,
  	114,5,36,0,0,114,115,3,20,10,0,115,13,1,0,0,0,116,119,3,4,2,0,117,119,
  	3,22,11,0,118,116,1,0,0,0,118,117,1,0,0,0,119,15,1,0,0,0,120,121,3,22,
  	11,0,121,17,1,0,0,0,122,125,3,4,2,0,123,125,3,22,11,0,124,122,1,0,0,0,
  	124,123,1,0,0,0,125,19,1,0,0,0,126,130,5,18,0,0,127,129,3,2,1,0,128,127,
  	1,0,0,0,129,132,1,0,0,0,130,128,1,0,0,0,130,131,1,0,0,0,131,133,1,0,0,
  	0,132,130,1,0,0,0,133,134,5,19,0,0,134,21,1,0,0,0,135,136,3,24,12,0,136,
  	23,1,0,0,0,137,138,6,12,-1,0,138,139,3,26,13,0,139,145,1,0,0,0,140,141,
  	10,1,0,0,141,142,5,34,0,0,142,144,3,26,13,0,143,140,1,0,0,0,144,147,1,
  	0,0,0,145,143,1,0,0,0,145,146,1,0,0,0,146,25,1,0,0,0,147,145,1,0,0,0,
  	148,149,6,13,-1,0,149,150,3,28,14,0,150,156,1,0,0,0,151,152,10,1,0,0,
  	152,153,5,33,0,0,153,155,3,28,14,0,154,151,1,0,0,0,155,158,1,0,0,0,156,
  	154,1,0,0,0,156,157,1,0,0,0,157,27,1,0,0,0,158,156,1,0,0,0,159,160,6,
  	14,-1,0,160,161,3,30,15,0,161,167,1,0,0,0,162,163,10,1,0,0,163,164,7,
  	0,0,0,164,166,3,30,15,0,165,162,1,0,0,0,166,169,1,0,0,0,167,165,1,0,0,
  	0,167,168,1,0,0,0,168,29,1,0,0,0,169,167,1,0,0,0,170,171,6,15,-1,0,171,
  	172,3,32,16,0,172,178,1,0,0,0,173,174,10,1,0,0,174,175,7,1,0,0,175,177,
  	3,32,16,0,176,173,1,0,0,0,177,180,1,0,0,0,178,176,1,0,0,0,178,179,1,0,
  	0,0,179,31,1,0,0,0,180,178,1,0,0,0,181,182,6,16,-1,0,182,183,3,34,17,
  	0,183,189,1,0,0,0,184,185,10,1,0,0,185,186,7,2,0,0,186,188,3,34,17,0,
  	187,184,1,0,0,0,188,191,1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,33,
  	1,0,0,0,191,189,1,0,0,0,192,193,6,17,-1,0,193,194,3,36,18,0,194,200,1,
  	0,0,0,195,196,10,1,0,0,196,197,7,3,0,0,197,199,3,36,18,0,198,195,1,0,
  	0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,35,1,0,0,0,202,
  	200,1,0,0,0,203,213,3,38,19,0,204,205,5,25,0,0,205,213,3,38,19,0,206,
  	207,5,26,0,0,207,213,3,38,19,0,208,209,5,21,0,0,209,213,3,38,19,0,210,
  	211,5,20,0,0,211,213,3,38,19,0,212,203,1,0,0,0,212,204,1,0,0,0,212,206,
  	1,0,0,0,212,208,1,0,0,0,212,210,1,0,0,0,213,37,1,0,0,0,214,215,6,19,-1,
  	0,215,216,3,40,20,0,216,223,1,0,0,0,217,218,10,2,0,0,218,222,5,25,0,0,
  	219,220,10,1,0,0,220,222,5,26,0,0,221,217,1,0,0,0,221,219,1,0,0,0,222,
  	225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,39,1,0,0,0,225,223,1,
  	0,0,0,226,227,5,35,0,0,227,228,3,22,11,0,228,229,5,36,0,0,229,255,1,0,
  	0,0,230,255,5,13,0,0,231,255,5,14,0,0,232,255,5,7,0,0,233,255,5,8,0,0,
  	234,255,5,12,0,0,235,255,5,15,0,0,236,237,5,9,0,0,237,239,5,35,0,0,238,
  	240,5,15,0,0,239,238,1,0,0,0,239,240,1,0,0,0,240,241,1,0,0,0,241,255,
  	5,36,0,0,242,243,5,10,0,0,243,245,5,35,0,0,244,246,5,15,0,0,245,244,1,
  	0,0,0,245,246,1,0,0,0,246,247,1,0,0,0,247,255,5,36,0,0,248,249,5,11,0,
  	0,249,251,5,35,0,0,250,252,5,15,0,0,251,250,1,0,0,0,251,252,1,0,0,0,252,
  	253,1,0,0,0,253,255,5,36,0,0,254,226,1,0,0,0,254,230,1,0,0,0,254,231,
  	1,0,0,0,254,232,1,0,0,0,254,233,1,0,0,0,254,234,1,0,0,0,254,235,1,0,0,
  	0,254,236,1,0,0,0,254,242,1,0,0,0,254,248,1,0,0,0,255,41,1,0,0,0,23,45,
  	63,87,92,103,107,111,118,124,130,145,156,167,178,189,200,212,221,223,
  	239,245,251,254
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrParserStaticData = std::move(staticData);
}

}

mygrParser::mygrParser(TokenStream *input) : mygrParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

mygrParser::mygrParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  mygrParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrParserStaticData->atn, mygrParserStaticData->decisionToDFA, mygrParserStaticData->sharedContextCache, options);
}

mygrParser::~mygrParser() {
  delete _interpreter;
}

const atn::ATN& mygrParser::getATN() const {
  return *mygrParserStaticData->atn;
}

std::string mygrParser::getGrammarFileName() const {
  return "mygr.g4";
}

const std::vector<std::string>& mygrParser::getRuleNames() const {
  return mygrParserStaticData->ruleNames;
}

const dfa::Vocabulary& mygrParser::getVocabulary() const {
  return mygrParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrParser::getSerializedATN() const {
  return mygrParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

mygrParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mygrParser::ProgContext::EOF() {
  return getToken(mygrParser::EOF, 0);
}

std::vector<mygrParser::StatementContext *> mygrParser::ProgContext::statement() {
  return getRuleContexts<mygrParser::StatementContext>();
}

mygrParser::StatementContext* mygrParser::ProgContext::statement(size_t i) {
  return getRuleContext<mygrParser::StatementContext>(i);
}


size_t mygrParser::ProgContext::getRuleIndex() const {
  return mygrParser::RuleProg;
}

void mygrParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void mygrParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any mygrParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::ProgContext* mygrParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, mygrParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34463875046) != 0)) {
      setState(42);
      statement();
      setState(47);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(48);
    match(mygrParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

mygrParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::StatementContext::getRuleIndex() const {
  return mygrParser::RuleStatement;
}

void mygrParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- For_loop_nodeContext ------------------------------------------------------------------

mygrParser::For_statementContext* mygrParser::For_loop_nodeContext::for_statement() {
  return getRuleContext<mygrParser::For_statementContext>(0);
}

mygrParser::For_loop_nodeContext::For_loop_nodeContext(StatementContext *ctx) { copyFrom(ctx); }

void mygrParser::For_loop_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_loop_node(this);
}
void mygrParser::For_loop_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_loop_node(this);
}

std::any mygrParser::For_loop_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitFor_loop_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Print_stmt_nodeContext ------------------------------------------------------------------

mygrParser::Print_statementContext* mygrParser::Print_stmt_nodeContext::print_statement() {
  return getRuleContext<mygrParser::Print_statementContext>(0);
}

tree::TerminalNode* mygrParser::Print_stmt_nodeContext::SEMI() {
  return getToken(mygrParser::SEMI, 0);
}

mygrParser::Print_stmt_nodeContext::Print_stmt_nodeContext(StatementContext *ctx) { copyFrom(ctx); }

void mygrParser::Print_stmt_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_stmt_node(this);
}
void mygrParser::Print_stmt_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_stmt_node(this);
}

std::any mygrParser::Print_stmt_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPrint_stmt_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_stmt_nodeContext ------------------------------------------------------------------

mygrParser::ExprContext* mygrParser::Expr_stmt_nodeContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}

tree::TerminalNode* mygrParser::Expr_stmt_nodeContext::SEMI() {
  return getToken(mygrParser::SEMI, 0);
}

mygrParser::Expr_stmt_nodeContext::Expr_stmt_nodeContext(StatementContext *ctx) { copyFrom(ctx); }

void mygrParser::Expr_stmt_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_stmt_node(this);
}
void mygrParser::Expr_stmt_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_stmt_node(this);
}

std::any mygrParser::Expr_stmt_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitExpr_stmt_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Assignment_stmt_nodeContext ------------------------------------------------------------------

mygrParser::AssignmentContext* mygrParser::Assignment_stmt_nodeContext::assignment() {
  return getRuleContext<mygrParser::AssignmentContext>(0);
}

tree::TerminalNode* mygrParser::Assignment_stmt_nodeContext::SEMI() {
  return getToken(mygrParser::SEMI, 0);
}

mygrParser::Assignment_stmt_nodeContext::Assignment_stmt_nodeContext(StatementContext *ctx) { copyFrom(ctx); }

void mygrParser::Assignment_stmt_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_stmt_node(this);
}
void mygrParser::Assignment_stmt_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_stmt_node(this);
}

std::any mygrParser::Assignment_stmt_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- While_loop_nodeContext ------------------------------------------------------------------

mygrParser::While_statementContext* mygrParser::While_loop_nodeContext::while_statement() {
  return getRuleContext<mygrParser::While_statementContext>(0);
}

mygrParser::While_loop_nodeContext::While_loop_nodeContext(StatementContext *ctx) { copyFrom(ctx); }

void mygrParser::While_loop_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_loop_node(this);
}
void mygrParser::While_loop_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_loop_node(this);
}

std::any mygrParser::While_loop_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitWhile_loop_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- If_stmt_nodeContext ------------------------------------------------------------------

mygrParser::If_statementContext* mygrParser::If_stmt_nodeContext::if_statement() {
  return getRuleContext<mygrParser::If_statementContext>(0);
}

mygrParser::If_stmt_nodeContext::If_stmt_nodeContext(StatementContext *ctx) { copyFrom(ctx); }

void mygrParser::If_stmt_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt_node(this);
}
void mygrParser::If_stmt_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt_node(this);
}

std::any mygrParser::If_stmt_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitIf_stmt_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Block_stmt_nodeContext ------------------------------------------------------------------

mygrParser::BlockContext* mygrParser::Block_stmt_nodeContext::block() {
  return getRuleContext<mygrParser::BlockContext>(0);
}

mygrParser::Block_stmt_nodeContext::Block_stmt_nodeContext(StatementContext *ctx) { copyFrom(ctx); }

void mygrParser::Block_stmt_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock_stmt_node(this);
}
void mygrParser::Block_stmt_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock_stmt_node(this);
}

std::any mygrParser::Block_stmt_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitBlock_stmt_node(this);
  else
    return visitor->visitChildren(this);
}
mygrParser::StatementContext* mygrParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, mygrParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrParser::Assignment_stmt_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(50);
      assignment();
      setState(51);
      match(mygrParser::SEMI);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrParser::Print_stmt_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(53);
      print_statement();
      setState(54);
      match(mygrParser::SEMI);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<mygrParser::Expr_stmt_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(56);
      expr();
      setState(57);
      match(mygrParser::SEMI);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<mygrParser::If_stmt_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(59);
      if_statement();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<mygrParser::While_loop_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(60);
      while_statement();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<mygrParser::For_loop_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(61);
      for_statement();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<mygrParser::Block_stmt_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(62);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

mygrParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::AssignmentContext::getRuleIndex() const {
  return mygrParser::RuleAssignment;
}

void mygrParser::AssignmentContext::copyFrom(AssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Assignment_op_nodeContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Assignment_op_nodeContext::ID() {
  return getToken(mygrParser::ID, 0);
}

tree::TerminalNode* mygrParser::Assignment_op_nodeContext::ASSIGN() {
  return getToken(mygrParser::ASSIGN, 0);
}

mygrParser::ExprContext* mygrParser::Assignment_op_nodeContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}

mygrParser::Assignment_op_nodeContext::Assignment_op_nodeContext(AssignmentContext *ctx) { copyFrom(ctx); }

void mygrParser::Assignment_op_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_op_node(this);
}
void mygrParser::Assignment_op_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_op_node(this);
}

std::any mygrParser::Assignment_op_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitAssignment_op_node(this);
  else
    return visitor->visitChildren(this);
}
mygrParser::AssignmentContext* mygrParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, mygrParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrParser::Assignment_op_nodeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(mygrParser::ID);
    setState(66);
    match(mygrParser::ASSIGN);
    setState(67);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_statementContext ------------------------------------------------------------------

mygrParser::Print_statementContext::Print_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Print_statementContext::getRuleIndex() const {
  return mygrParser::RulePrint_statement;
}

void mygrParser::Print_statementContext::copyFrom(Print_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Print_func_call_nodeContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Print_func_call_nodeContext::PRINT() {
  return getToken(mygrParser::PRINT, 0);
}

tree::TerminalNode* mygrParser::Print_func_call_nodeContext::LPAR() {
  return getToken(mygrParser::LPAR, 0);
}

mygrParser::ExprContext* mygrParser::Print_func_call_nodeContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}

tree::TerminalNode* mygrParser::Print_func_call_nodeContext::RPAR() {
  return getToken(mygrParser::RPAR, 0);
}

mygrParser::Print_func_call_nodeContext::Print_func_call_nodeContext(Print_statementContext *ctx) { copyFrom(ctx); }

void mygrParser::Print_func_call_nodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_func_call_node(this);
}
void mygrParser::Print_func_call_nodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_func_call_node(this);
}

std::any mygrParser::Print_func_call_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPrint_func_call_node(this);
  else
    return visitor->visitChildren(this);
}
mygrParser::Print_statementContext* mygrParser::print_statement() {
  Print_statementContext *_localctx = _tracker.createInstance<Print_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, mygrParser::RulePrint_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrParser::Print_func_call_nodeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(mygrParser::PRINT);
    setState(70);
    match(mygrParser::LPAR);
    setState(71);
    expr();
    setState(72);
    match(mygrParser::RPAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

mygrParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mygrParser::If_statementContext::IF() {
  return getToken(mygrParser::IF, 0);
}

std::vector<tree::TerminalNode *> mygrParser::If_statementContext::LPAR() {
  return getTokens(mygrParser::LPAR);
}

tree::TerminalNode* mygrParser::If_statementContext::LPAR(size_t i) {
  return getToken(mygrParser::LPAR, i);
}

std::vector<mygrParser::ExprContext *> mygrParser::If_statementContext::expr() {
  return getRuleContexts<mygrParser::ExprContext>();
}

mygrParser::ExprContext* mygrParser::If_statementContext::expr(size_t i) {
  return getRuleContext<mygrParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> mygrParser::If_statementContext::RPAR() {
  return getTokens(mygrParser::RPAR);
}

tree::TerminalNode* mygrParser::If_statementContext::RPAR(size_t i) {
  return getToken(mygrParser::RPAR, i);
}

std::vector<mygrParser::BlockContext *> mygrParser::If_statementContext::block() {
  return getRuleContexts<mygrParser::BlockContext>();
}

mygrParser::BlockContext* mygrParser::If_statementContext::block(size_t i) {
  return getRuleContext<mygrParser::BlockContext>(i);
}

std::vector<tree::TerminalNode *> mygrParser::If_statementContext::ELIF() {
  return getTokens(mygrParser::ELIF);
}

tree::TerminalNode* mygrParser::If_statementContext::ELIF(size_t i) {
  return getToken(mygrParser::ELIF, i);
}

tree::TerminalNode* mygrParser::If_statementContext::ELSE() {
  return getToken(mygrParser::ELSE, 0);
}


size_t mygrParser::If_statementContext::getRuleIndex() const {
  return mygrParser::RuleIf_statement;
}

void mygrParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void mygrParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any mygrParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::If_statementContext* mygrParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, mygrParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(mygrParser::IF);
    setState(75);
    match(mygrParser::LPAR);
    setState(76);
    expr();
    setState(77);
    match(mygrParser::RPAR);
    setState(78);
    block();
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mygrParser::ELIF) {
      setState(79);
      match(mygrParser::ELIF);
      setState(80);
      match(mygrParser::LPAR);
      setState(81);
      expr();
      setState(82);
      match(mygrParser::RPAR);
      setState(83);
      block();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mygrParser::ELSE) {
      setState(90);
      match(mygrParser::ELSE);
      setState(91);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

mygrParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mygrParser::While_statementContext::WHILE() {
  return getToken(mygrParser::WHILE, 0);
}

tree::TerminalNode* mygrParser::While_statementContext::LPAR() {
  return getToken(mygrParser::LPAR, 0);
}

mygrParser::ExprContext* mygrParser::While_statementContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}

tree::TerminalNode* mygrParser::While_statementContext::RPAR() {
  return getToken(mygrParser::RPAR, 0);
}

mygrParser::BlockContext* mygrParser::While_statementContext::block() {
  return getRuleContext<mygrParser::BlockContext>(0);
}


size_t mygrParser::While_statementContext::getRuleIndex() const {
  return mygrParser::RuleWhile_statement;
}

void mygrParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void mygrParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


std::any mygrParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::While_statementContext* mygrParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 10, mygrParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(mygrParser::WHILE);
    setState(95);
    match(mygrParser::LPAR);
    setState(96);
    expr();
    setState(97);
    match(mygrParser::RPAR);
    setState(98);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

mygrParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mygrParser::For_statementContext::FOR() {
  return getToken(mygrParser::FOR, 0);
}

tree::TerminalNode* mygrParser::For_statementContext::LPAR() {
  return getToken(mygrParser::LPAR, 0);
}

std::vector<tree::TerminalNode *> mygrParser::For_statementContext::SEMI() {
  return getTokens(mygrParser::SEMI);
}

tree::TerminalNode* mygrParser::For_statementContext::SEMI(size_t i) {
  return getToken(mygrParser::SEMI, i);
}

tree::TerminalNode* mygrParser::For_statementContext::RPAR() {
  return getToken(mygrParser::RPAR, 0);
}

mygrParser::BlockContext* mygrParser::For_statementContext::block() {
  return getRuleContext<mygrParser::BlockContext>(0);
}

mygrParser::For_initializerContext* mygrParser::For_statementContext::for_initializer() {
  return getRuleContext<mygrParser::For_initializerContext>(0);
}

mygrParser::For_conditionContext* mygrParser::For_statementContext::for_condition() {
  return getRuleContext<mygrParser::For_conditionContext>(0);
}

mygrParser::For_updaterContext* mygrParser::For_statementContext::for_updater() {
  return getRuleContext<mygrParser::For_updaterContext>(0);
}


size_t mygrParser::For_statementContext::getRuleIndex() const {
  return mygrParser::RuleFor_statement;
}

void mygrParser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void mygrParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}


std::any mygrParser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::For_statementContext* mygrParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, mygrParser::RuleFor_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(mygrParser::FOR);
    setState(101);
    match(mygrParser::LPAR);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34463612800) != 0)) {
      setState(102);
      for_initializer();
    }
    setState(105);
    match(mygrParser::SEMI);
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34463612800) != 0)) {
      setState(106);
      for_condition();
    }
    setState(109);
    match(mygrParser::SEMI);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34463612800) != 0)) {
      setState(110);
      for_updater();
    }
    setState(113);
    match(mygrParser::RPAR);
    setState(114);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_initializerContext ------------------------------------------------------------------

mygrParser::For_initializerContext::For_initializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrParser::AssignmentContext* mygrParser::For_initializerContext::assignment() {
  return getRuleContext<mygrParser::AssignmentContext>(0);
}

mygrParser::ExprContext* mygrParser::For_initializerContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}


size_t mygrParser::For_initializerContext::getRuleIndex() const {
  return mygrParser::RuleFor_initializer;
}

void mygrParser::For_initializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_initializer(this);
}

void mygrParser::For_initializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_initializer(this);
}


std::any mygrParser::For_initializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitFor_initializer(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::For_initializerContext* mygrParser::for_initializer() {
  For_initializerContext *_localctx = _tracker.createInstance<For_initializerContext>(_ctx, getState());
  enterRule(_localctx, 14, mygrParser::RuleFor_initializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(118);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(116);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(117);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_conditionContext ------------------------------------------------------------------

mygrParser::For_conditionContext::For_conditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrParser::ExprContext* mygrParser::For_conditionContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}


size_t mygrParser::For_conditionContext::getRuleIndex() const {
  return mygrParser::RuleFor_condition;
}

void mygrParser::For_conditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_condition(this);
}

void mygrParser::For_conditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_condition(this);
}


std::any mygrParser::For_conditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitFor_condition(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::For_conditionContext* mygrParser::for_condition() {
  For_conditionContext *_localctx = _tracker.createInstance<For_conditionContext>(_ctx, getState());
  enterRule(_localctx, 16, mygrParser::RuleFor_condition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_updaterContext ------------------------------------------------------------------

mygrParser::For_updaterContext::For_updaterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrParser::AssignmentContext* mygrParser::For_updaterContext::assignment() {
  return getRuleContext<mygrParser::AssignmentContext>(0);
}

mygrParser::ExprContext* mygrParser::For_updaterContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}


size_t mygrParser::For_updaterContext::getRuleIndex() const {
  return mygrParser::RuleFor_updater;
}

void mygrParser::For_updaterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_updater(this);
}

void mygrParser::For_updaterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_updater(this);
}


std::any mygrParser::For_updaterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitFor_updater(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::For_updaterContext* mygrParser::for_updater() {
  For_updaterContext *_localctx = _tracker.createInstance<For_updaterContext>(_ctx, getState());
  enterRule(_localctx, 18, mygrParser::RuleFor_updater);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(124);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      assignment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

mygrParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mygrParser::BlockContext::LBRACE() {
  return getToken(mygrParser::LBRACE, 0);
}

tree::TerminalNode* mygrParser::BlockContext::RBRACE() {
  return getToken(mygrParser::RBRACE, 0);
}

std::vector<mygrParser::StatementContext *> mygrParser::BlockContext::statement() {
  return getRuleContexts<mygrParser::StatementContext>();
}

mygrParser::StatementContext* mygrParser::BlockContext::statement(size_t i) {
  return getRuleContext<mygrParser::StatementContext>(i);
}


size_t mygrParser::BlockContext::getRuleIndex() const {
  return mygrParser::RuleBlock;
}

void mygrParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void mygrParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any mygrParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::BlockContext* mygrParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 20, mygrParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(mygrParser::LBRACE);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34463875046) != 0)) {
      setState(127);
      statement();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    match(mygrParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

mygrParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::ExprContext::getRuleIndex() const {
  return mygrParser::RuleExpr;
}

void mygrParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Pass_to_logical_orContext ------------------------------------------------------------------

mygrParser::Logical_or_exprContext* mygrParser::Pass_to_logical_orContext::logical_or_expr() {
  return getRuleContext<mygrParser::Logical_or_exprContext>(0);
}

mygrParser::Pass_to_logical_orContext::Pass_to_logical_orContext(ExprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_to_logical_orContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_to_logical_or(this);
}
void mygrParser::Pass_to_logical_orContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_to_logical_or(this);
}

std::any mygrParser::Pass_to_logical_orContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_to_logical_or(this);
  else
    return visitor->visitChildren(this);
}
mygrParser::ExprContext* mygrParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 22, mygrParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrParser::Pass_to_logical_orContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(135);
    logical_or_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logical_or_exprContext ------------------------------------------------------------------

mygrParser::Logical_or_exprContext::Logical_or_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Logical_or_exprContext::getRuleIndex() const {
  return mygrParser::RuleLogical_or_expr;
}

void mygrParser::Logical_or_exprContext::copyFrom(Logical_or_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Pass_to_logical_andContext ------------------------------------------------------------------

mygrParser::Logical_and_exprContext* mygrParser::Pass_to_logical_andContext::logical_and_expr() {
  return getRuleContext<mygrParser::Logical_and_exprContext>(0);
}

mygrParser::Pass_to_logical_andContext::Pass_to_logical_andContext(Logical_or_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_to_logical_andContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_to_logical_and(this);
}
void mygrParser::Pass_to_logical_andContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_to_logical_and(this);
}

std::any mygrParser::Pass_to_logical_andContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_to_logical_and(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Logical_or_operationContext ------------------------------------------------------------------

mygrParser::Logical_or_exprContext* mygrParser::Logical_or_operationContext::logical_or_expr() {
  return getRuleContext<mygrParser::Logical_or_exprContext>(0);
}

tree::TerminalNode* mygrParser::Logical_or_operationContext::LOR() {
  return getToken(mygrParser::LOR, 0);
}

mygrParser::Logical_and_exprContext* mygrParser::Logical_or_operationContext::logical_and_expr() {
  return getRuleContext<mygrParser::Logical_and_exprContext>(0);
}

mygrParser::Logical_or_operationContext::Logical_or_operationContext(Logical_or_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Logical_or_operationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_or_operation(this);
}
void mygrParser::Logical_or_operationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_or_operation(this);
}

std::any mygrParser::Logical_or_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitLogical_or_operation(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::Logical_or_exprContext* mygrParser::logical_or_expr() {
   return logical_or_expr(0);
}

mygrParser::Logical_or_exprContext* mygrParser::logical_or_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrParser::Logical_or_exprContext *_localctx = _tracker.createInstance<Logical_or_exprContext>(_ctx, parentState);
  mygrParser::Logical_or_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, mygrParser::RuleLogical_or_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Pass_to_logical_andContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(138);
    logical_and_expr(0);
    _ctx->stop = _input->LT(-1);
    setState(145);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Logical_or_operationContext>(_tracker.createInstance<Logical_or_exprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLogical_or_expr);
        setState(140);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(141);
        match(mygrParser::LOR);
        setState(142);
        logical_and_expr(0); 
      }
      setState(147);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Logical_and_exprContext ------------------------------------------------------------------

mygrParser::Logical_and_exprContext::Logical_and_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Logical_and_exprContext::getRuleIndex() const {
  return mygrParser::RuleLogical_and_expr;
}

void mygrParser::Logical_and_exprContext::copyFrom(Logical_and_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Pass_to_equalityContext ------------------------------------------------------------------

mygrParser::Equality_exprContext* mygrParser::Pass_to_equalityContext::equality_expr() {
  return getRuleContext<mygrParser::Equality_exprContext>(0);
}

mygrParser::Pass_to_equalityContext::Pass_to_equalityContext(Logical_and_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_to_equalityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_to_equality(this);
}
void mygrParser::Pass_to_equalityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_to_equality(this);
}

std::any mygrParser::Pass_to_equalityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_to_equality(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Logical_and_operationContext ------------------------------------------------------------------

mygrParser::Logical_and_exprContext* mygrParser::Logical_and_operationContext::logical_and_expr() {
  return getRuleContext<mygrParser::Logical_and_exprContext>(0);
}

tree::TerminalNode* mygrParser::Logical_and_operationContext::LAND() {
  return getToken(mygrParser::LAND, 0);
}

mygrParser::Equality_exprContext* mygrParser::Logical_and_operationContext::equality_expr() {
  return getRuleContext<mygrParser::Equality_exprContext>(0);
}

mygrParser::Logical_and_operationContext::Logical_and_operationContext(Logical_and_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Logical_and_operationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical_and_operation(this);
}
void mygrParser::Logical_and_operationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical_and_operation(this);
}

std::any mygrParser::Logical_and_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitLogical_and_operation(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::Logical_and_exprContext* mygrParser::logical_and_expr() {
   return logical_and_expr(0);
}

mygrParser::Logical_and_exprContext* mygrParser::logical_and_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrParser::Logical_and_exprContext *_localctx = _tracker.createInstance<Logical_and_exprContext>(_ctx, parentState);
  mygrParser::Logical_and_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, mygrParser::RuleLogical_and_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Pass_to_equalityContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(149);
    equality_expr(0);
    _ctx->stop = _input->LT(-1);
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Logical_and_operationContext>(_tracker.createInstance<Logical_and_exprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLogical_and_expr);
        setState(151);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(152);
        match(mygrParser::LAND);
        setState(153);
        equality_expr(0); 
      }
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Equality_exprContext ------------------------------------------------------------------

mygrParser::Equality_exprContext::Equality_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Equality_exprContext::getRuleIndex() const {
  return mygrParser::RuleEquality_expr;
}

void mygrParser::Equality_exprContext::copyFrom(Equality_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Pass_rel_to_eqContext ------------------------------------------------------------------

mygrParser::Relational_exprContext* mygrParser::Pass_rel_to_eqContext::relational_expr() {
  return getRuleContext<mygrParser::Relational_exprContext>(0);
}

mygrParser::Pass_rel_to_eqContext::Pass_rel_to_eqContext(Equality_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_rel_to_eqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_rel_to_eq(this);
}
void mygrParser::Pass_rel_to_eqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_rel_to_eq(this);
}

std::any mygrParser::Pass_rel_to_eqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_rel_to_eq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Equality_op_newContext ------------------------------------------------------------------

mygrParser::Equality_exprContext* mygrParser::Equality_op_newContext::equality_expr() {
  return getRuleContext<mygrParser::Equality_exprContext>(0);
}

mygrParser::Relational_exprContext* mygrParser::Equality_op_newContext::relational_expr() {
  return getRuleContext<mygrParser::Relational_exprContext>(0);
}

tree::TerminalNode* mygrParser::Equality_op_newContext::EQ() {
  return getToken(mygrParser::EQ, 0);
}

tree::TerminalNode* mygrParser::Equality_op_newContext::NEQ() {
  return getToken(mygrParser::NEQ, 0);
}

mygrParser::Equality_op_newContext::Equality_op_newContext(Equality_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Equality_op_newContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality_op_new(this);
}
void mygrParser::Equality_op_newContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality_op_new(this);
}

std::any mygrParser::Equality_op_newContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitEquality_op_new(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::Equality_exprContext* mygrParser::equality_expr() {
   return equality_expr(0);
}

mygrParser::Equality_exprContext* mygrParser::equality_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrParser::Equality_exprContext *_localctx = _tracker.createInstance<Equality_exprContext>(_ctx, parentState);
  mygrParser::Equality_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, mygrParser::RuleEquality_expr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Pass_rel_to_eqContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(160);
    relational_expr(0);
    _ctx->stop = _input->LT(-1);
    setState(167);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Equality_op_newContext>(_tracker.createInstance<Equality_exprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleEquality_expr);
        setState(162);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(163);
        antlrcpp::downCast<Equality_op_newContext *>(_localctx)->op_eq = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == mygrParser::EQ

        || _la == mygrParser::NEQ)) {
          antlrcpp::downCast<Equality_op_newContext *>(_localctx)->op_eq = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(164);
        relational_expr(0); 
      }
      setState(169);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Relational_exprContext ------------------------------------------------------------------

mygrParser::Relational_exprContext::Relational_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Relational_exprContext::getRuleIndex() const {
  return mygrParser::RuleRelational_expr;
}

void mygrParser::Relational_exprContext::copyFrom(Relational_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Relational_op_newContext ------------------------------------------------------------------

mygrParser::Relational_exprContext* mygrParser::Relational_op_newContext::relational_expr() {
  return getRuleContext<mygrParser::Relational_exprContext>(0);
}

mygrParser::Additive_exprContext* mygrParser::Relational_op_newContext::additive_expr() {
  return getRuleContext<mygrParser::Additive_exprContext>(0);
}

tree::TerminalNode* mygrParser::Relational_op_newContext::LT() {
  return getToken(mygrParser::LT, 0);
}

tree::TerminalNode* mygrParser::Relational_op_newContext::GT() {
  return getToken(mygrParser::GT, 0);
}

tree::TerminalNode* mygrParser::Relational_op_newContext::LTE() {
  return getToken(mygrParser::LTE, 0);
}

tree::TerminalNode* mygrParser::Relational_op_newContext::GTE() {
  return getToken(mygrParser::GTE, 0);
}

mygrParser::Relational_op_newContext::Relational_op_newContext(Relational_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Relational_op_newContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_op_new(this);
}
void mygrParser::Relational_op_newContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_op_new(this);
}

std::any mygrParser::Relational_op_newContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitRelational_op_new(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Pass_add_to_relContext ------------------------------------------------------------------

mygrParser::Additive_exprContext* mygrParser::Pass_add_to_relContext::additive_expr() {
  return getRuleContext<mygrParser::Additive_exprContext>(0);
}

mygrParser::Pass_add_to_relContext::Pass_add_to_relContext(Relational_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_add_to_relContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_add_to_rel(this);
}
void mygrParser::Pass_add_to_relContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_add_to_rel(this);
}

std::any mygrParser::Pass_add_to_relContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_add_to_rel(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::Relational_exprContext* mygrParser::relational_expr() {
   return relational_expr(0);
}

mygrParser::Relational_exprContext* mygrParser::relational_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrParser::Relational_exprContext *_localctx = _tracker.createInstance<Relational_exprContext>(_ctx, parentState);
  mygrParser::Relational_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, mygrParser::RuleRelational_expr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Pass_add_to_relContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(171);
    additive_expr(0);
    _ctx->stop = _input->LT(-1);
    setState(178);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Relational_op_newContext>(_tracker.createInstance<Relational_exprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleRelational_expr);
        setState(173);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(174);
        antlrcpp::downCast<Relational_op_newContext *>(_localctx)->op_rel = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 8053063680) != 0))) {
          antlrcpp::downCast<Relational_op_newContext *>(_localctx)->op_rel = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(175);
        additive_expr(0); 
      }
      setState(180);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Additive_exprContext ------------------------------------------------------------------

mygrParser::Additive_exprContext::Additive_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Additive_exprContext::getRuleIndex() const {
  return mygrParser::RuleAdditive_expr;
}

void mygrParser::Additive_exprContext::copyFrom(Additive_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Additive_op_newContext ------------------------------------------------------------------

mygrParser::Additive_exprContext* mygrParser::Additive_op_newContext::additive_expr() {
  return getRuleContext<mygrParser::Additive_exprContext>(0);
}

mygrParser::Multiplicative_exprContext* mygrParser::Additive_op_newContext::multiplicative_expr() {
  return getRuleContext<mygrParser::Multiplicative_exprContext>(0);
}

tree::TerminalNode* mygrParser::Additive_op_newContext::ADD() {
  return getToken(mygrParser::ADD, 0);
}

tree::TerminalNode* mygrParser::Additive_op_newContext::SUB() {
  return getToken(mygrParser::SUB, 0);
}

mygrParser::Additive_op_newContext::Additive_op_newContext(Additive_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Additive_op_newContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive_op_new(this);
}
void mygrParser::Additive_op_newContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive_op_new(this);
}

std::any mygrParser::Additive_op_newContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitAdditive_op_new(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Pass_mul_to_addContext ------------------------------------------------------------------

mygrParser::Multiplicative_exprContext* mygrParser::Pass_mul_to_addContext::multiplicative_expr() {
  return getRuleContext<mygrParser::Multiplicative_exprContext>(0);
}

mygrParser::Pass_mul_to_addContext::Pass_mul_to_addContext(Additive_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_mul_to_addContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_mul_to_add(this);
}
void mygrParser::Pass_mul_to_addContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_mul_to_add(this);
}

std::any mygrParser::Pass_mul_to_addContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_mul_to_add(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::Additive_exprContext* mygrParser::additive_expr() {
   return additive_expr(0);
}

mygrParser::Additive_exprContext* mygrParser::additive_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrParser::Additive_exprContext *_localctx = _tracker.createInstance<Additive_exprContext>(_ctx, parentState);
  mygrParser::Additive_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, mygrParser::RuleAdditive_expr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Pass_mul_to_addContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(182);
    multiplicative_expr(0);
    _ctx->stop = _input->LT(-1);
    setState(189);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Additive_op_newContext>(_tracker.createInstance<Additive_exprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleAdditive_expr);
        setState(184);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(185);
        antlrcpp::downCast<Additive_op_newContext *>(_localctx)->op_add = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == mygrParser::SUB

        || _la == mygrParser::ADD)) {
          antlrcpp::downCast<Additive_op_newContext *>(_localctx)->op_add = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(186);
        multiplicative_expr(0); 
      }
      setState(191);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Multiplicative_exprContext ------------------------------------------------------------------

mygrParser::Multiplicative_exprContext::Multiplicative_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Multiplicative_exprContext::getRuleIndex() const {
  return mygrParser::RuleMultiplicative_expr;
}

void mygrParser::Multiplicative_exprContext::copyFrom(Multiplicative_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Pass_una_to_mulContext ------------------------------------------------------------------

mygrParser::Unary_exprContext* mygrParser::Pass_una_to_mulContext::unary_expr() {
  return getRuleContext<mygrParser::Unary_exprContext>(0);
}

mygrParser::Pass_una_to_mulContext::Pass_una_to_mulContext(Multiplicative_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_una_to_mulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_una_to_mul(this);
}
void mygrParser::Pass_una_to_mulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_una_to_mul(this);
}

std::any mygrParser::Pass_una_to_mulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_una_to_mul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Multiplicative_op_new_unary_rightContext ------------------------------------------------------------------

mygrParser::Multiplicative_exprContext* mygrParser::Multiplicative_op_new_unary_rightContext::multiplicative_expr() {
  return getRuleContext<mygrParser::Multiplicative_exprContext>(0);
}

mygrParser::Unary_exprContext* mygrParser::Multiplicative_op_new_unary_rightContext::unary_expr() {
  return getRuleContext<mygrParser::Unary_exprContext>(0);
}

tree::TerminalNode* mygrParser::Multiplicative_op_new_unary_rightContext::MUL() {
  return getToken(mygrParser::MUL, 0);
}

tree::TerminalNode* mygrParser::Multiplicative_op_new_unary_rightContext::DIV() {
  return getToken(mygrParser::DIV, 0);
}

tree::TerminalNode* mygrParser::Multiplicative_op_new_unary_rightContext::MOD() {
  return getToken(mygrParser::MOD, 0);
}

mygrParser::Multiplicative_op_new_unary_rightContext::Multiplicative_op_new_unary_rightContext(Multiplicative_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Multiplicative_op_new_unary_rightContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative_op_new_unary_right(this);
}
void mygrParser::Multiplicative_op_new_unary_rightContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative_op_new_unary_right(this);
}

std::any mygrParser::Multiplicative_op_new_unary_rightContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitMultiplicative_op_new_unary_right(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::Multiplicative_exprContext* mygrParser::multiplicative_expr() {
   return multiplicative_expr(0);
}

mygrParser::Multiplicative_exprContext* mygrParser::multiplicative_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrParser::Multiplicative_exprContext *_localctx = _tracker.createInstance<Multiplicative_exprContext>(_ctx, parentState);
  mygrParser::Multiplicative_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, mygrParser::RuleMultiplicative_expr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Pass_una_to_mulContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(193);
    unary_expr();
    _ctx->stop = _input->LT(-1);
    setState(200);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Multiplicative_op_new_unary_rightContext>(_tracker.createInstance<Multiplicative_exprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleMultiplicative_expr);
        setState(195);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(196);
        antlrcpp::downCast<Multiplicative_op_new_unary_rightContext *>(_localctx)->op_mul = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 29360128) != 0))) {
          antlrcpp::downCast<Multiplicative_op_new_unary_rightContext *>(_localctx)->op_mul = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(197);
        unary_expr(); 
      }
      setState(202);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Unary_exprContext ------------------------------------------------------------------

mygrParser::Unary_exprContext::Unary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Unary_exprContext::getRuleIndex() const {
  return mygrParser::RuleUnary_expr;
}

void mygrParser::Unary_exprContext::copyFrom(Unary_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Pass_post_to_unaContext ------------------------------------------------------------------

mygrParser::Postfix_exprContext* mygrParser::Pass_post_to_unaContext::postfix_expr() {
  return getRuleContext<mygrParser::Postfix_exprContext>(0);
}

mygrParser::Pass_post_to_unaContext::Pass_post_to_unaContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Pass_post_to_unaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPass_post_to_una(this);
}
void mygrParser::Pass_post_to_unaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPass_post_to_una(this);
}

std::any mygrParser::Pass_post_to_unaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPass_post_to_una(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_plus_opContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Unary_plus_opContext::ADD() {
  return getToken(mygrParser::ADD, 0);
}

mygrParser::Postfix_exprContext* mygrParser::Unary_plus_opContext::postfix_expr() {
  return getRuleContext<mygrParser::Postfix_exprContext>(0);
}

mygrParser::Unary_plus_opContext::Unary_plus_opContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Unary_plus_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_plus_op(this);
}
void mygrParser::Unary_plus_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_plus_op(this);
}

std::any mygrParser::Unary_plus_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitUnary_plus_op(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_minus_opContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Unary_minus_opContext::SUB() {
  return getToken(mygrParser::SUB, 0);
}

mygrParser::Postfix_exprContext* mygrParser::Unary_minus_opContext::postfix_expr() {
  return getRuleContext<mygrParser::Postfix_exprContext>(0);
}

mygrParser::Unary_minus_opContext::Unary_minus_opContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Unary_minus_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_minus_op(this);
}
void mygrParser::Unary_minus_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_minus_op(this);
}

std::any mygrParser::Unary_minus_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitUnary_minus_op(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Prefix_dec_opContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Prefix_dec_opContext::DEC() {
  return getToken(mygrParser::DEC, 0);
}

mygrParser::Postfix_exprContext* mygrParser::Prefix_dec_opContext::postfix_expr() {
  return getRuleContext<mygrParser::Postfix_exprContext>(0);
}

mygrParser::Prefix_dec_opContext::Prefix_dec_opContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Prefix_dec_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefix_dec_op(this);
}
void mygrParser::Prefix_dec_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefix_dec_op(this);
}

std::any mygrParser::Prefix_dec_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPrefix_dec_op(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Prefix_inc_opContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Prefix_inc_opContext::INC() {
  return getToken(mygrParser::INC, 0);
}

mygrParser::Postfix_exprContext* mygrParser::Prefix_inc_opContext::postfix_expr() {
  return getRuleContext<mygrParser::Postfix_exprContext>(0);
}

mygrParser::Prefix_inc_opContext::Prefix_inc_opContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Prefix_inc_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefix_inc_op(this);
}
void mygrParser::Prefix_inc_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefix_inc_op(this);
}

std::any mygrParser::Prefix_inc_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPrefix_inc_op(this);
  else
    return visitor->visitChildren(this);
}
mygrParser::Unary_exprContext* mygrParser::unary_expr() {
  Unary_exprContext *_localctx = _tracker.createInstance<Unary_exprContext>(_ctx, getState());
  enterRule(_localctx, 36, mygrParser::RuleUnary_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mygrParser::TRUE:
      case mygrParser::FALSE:
      case mygrParser::INPUT:
      case mygrParser::INPUT_INT:
      case mygrParser::INPUT_FLOAT:
      case mygrParser::ID:
      case mygrParser::INT:
      case mygrParser::FLOAT:
      case mygrParser::STRING:
      case mygrParser::LPAR: {
        _localctx = _tracker.createInstance<mygrParser::Pass_post_to_unaContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(203);
        postfix_expr(0);
        break;
      }

      case mygrParser::INC: {
        _localctx = _tracker.createInstance<mygrParser::Prefix_inc_opContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(204);
        match(mygrParser::INC);
        setState(205);
        postfix_expr(0);
        break;
      }

      case mygrParser::DEC: {
        _localctx = _tracker.createInstance<mygrParser::Prefix_dec_opContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(206);
        match(mygrParser::DEC);
        setState(207);
        postfix_expr(0);
        break;
      }

      case mygrParser::ADD: {
        _localctx = _tracker.createInstance<mygrParser::Unary_plus_opContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(208);
        match(mygrParser::ADD);
        setState(209);
        postfix_expr(0);
        break;
      }

      case mygrParser::SUB: {
        _localctx = _tracker.createInstance<mygrParser::Unary_minus_opContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(210);
        match(mygrParser::SUB);
        setState(211);
        postfix_expr(0);
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

//----------------- Postfix_exprContext ------------------------------------------------------------------

mygrParser::Postfix_exprContext::Postfix_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Postfix_exprContext::getRuleIndex() const {
  return mygrParser::RulePostfix_expr;
}

void mygrParser::Postfix_exprContext::copyFrom(Postfix_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Postfix_dec_opContext ------------------------------------------------------------------

mygrParser::Postfix_exprContext* mygrParser::Postfix_dec_opContext::postfix_expr() {
  return getRuleContext<mygrParser::Postfix_exprContext>(0);
}

tree::TerminalNode* mygrParser::Postfix_dec_opContext::DEC() {
  return getToken(mygrParser::DEC, 0);
}

mygrParser::Postfix_dec_opContext::Postfix_dec_opContext(Postfix_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Postfix_dec_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_dec_op(this);
}
void mygrParser::Postfix_dec_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_dec_op(this);
}

std::any mygrParser::Postfix_dec_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPostfix_dec_op(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Primary_as_postfix_baseContext ------------------------------------------------------------------

mygrParser::Primary_exprContext* mygrParser::Primary_as_postfix_baseContext::primary_expr() {
  return getRuleContext<mygrParser::Primary_exprContext>(0);
}

mygrParser::Primary_as_postfix_baseContext::Primary_as_postfix_baseContext(Postfix_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Primary_as_postfix_baseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary_as_postfix_base(this);
}
void mygrParser::Primary_as_postfix_baseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary_as_postfix_base(this);
}

std::any mygrParser::Primary_as_postfix_baseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPrimary_as_postfix_base(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Postfix_inc_opContext ------------------------------------------------------------------

mygrParser::Postfix_exprContext* mygrParser::Postfix_inc_opContext::postfix_expr() {
  return getRuleContext<mygrParser::Postfix_exprContext>(0);
}

tree::TerminalNode* mygrParser::Postfix_inc_opContext::INC() {
  return getToken(mygrParser::INC, 0);
}

mygrParser::Postfix_inc_opContext::Postfix_inc_opContext(Postfix_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Postfix_inc_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_inc_op(this);
}
void mygrParser::Postfix_inc_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_inc_op(this);
}

std::any mygrParser::Postfix_inc_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitPostfix_inc_op(this);
  else
    return visitor->visitChildren(this);
}

mygrParser::Postfix_exprContext* mygrParser::postfix_expr() {
   return postfix_expr(0);
}

mygrParser::Postfix_exprContext* mygrParser::postfix_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrParser::Postfix_exprContext *_localctx = _tracker.createInstance<Postfix_exprContext>(_ctx, parentState);
  mygrParser::Postfix_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, mygrParser::RulePostfix_expr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<Primary_as_postfix_baseContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(215);
    primary_expr();
    _ctx->stop = _input->LT(-1);
    setState(223);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(221);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Postfix_inc_opContext>(_tracker.createInstance<Postfix_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePostfix_expr);
          setState(217);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(218);
          match(mygrParser::INC);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Postfix_dec_opContext>(_tracker.createInstance<Postfix_exprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RulePostfix_expr);
          setState(219);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(220);
          match(mygrParser::DEC);
          break;
        }

        default:
          break;
        } 
      }
      setState(225);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Primary_exprContext ------------------------------------------------------------------

mygrParser::Primary_exprContext::Primary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrParser::Primary_exprContext::getRuleIndex() const {
  return mygrParser::RulePrimary_expr;
}

void mygrParser::Primary_exprContext::copyFrom(Primary_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Paren_exprContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Paren_exprContext::LPAR() {
  return getToken(mygrParser::LPAR, 0);
}

mygrParser::ExprContext* mygrParser::Paren_exprContext::expr() {
  return getRuleContext<mygrParser::ExprContext>(0);
}

tree::TerminalNode* mygrParser::Paren_exprContext::RPAR() {
  return getToken(mygrParser::RPAR, 0);
}

mygrParser::Paren_exprContext::Paren_exprContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Paren_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParen_expr(this);
}
void mygrParser::Paren_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParen_expr(this);
}

std::any mygrParser::Paren_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitParen_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Input_int_callContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Input_int_callContext::INPUT_INT() {
  return getToken(mygrParser::INPUT_INT, 0);
}

tree::TerminalNode* mygrParser::Input_int_callContext::LPAR() {
  return getToken(mygrParser::LPAR, 0);
}

tree::TerminalNode* mygrParser::Input_int_callContext::RPAR() {
  return getToken(mygrParser::RPAR, 0);
}

tree::TerminalNode* mygrParser::Input_int_callContext::STRING() {
  return getToken(mygrParser::STRING, 0);
}

mygrParser::Input_int_callContext::Input_int_callContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Input_int_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput_int_call(this);
}
void mygrParser::Input_int_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput_int_call(this);
}

std::any mygrParser::Input_int_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitInput_int_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int_literalContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Int_literalContext::INT() {
  return getToken(mygrParser::INT, 0);
}

mygrParser::Int_literalContext::Int_literalContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Int_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt_literal(this);
}
void mygrParser::Int_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt_literal(this);
}

std::any mygrParser::Int_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitInt_literal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- String_literalContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::String_literalContext::STRING() {
  return getToken(mygrParser::STRING, 0);
}

mygrParser::String_literalContext::String_literalContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::String_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_literal(this);
}
void mygrParser::String_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_literal(this);
}

std::any mygrParser::String_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitString_literal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Id_operandContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Id_operandContext::ID() {
  return getToken(mygrParser::ID, 0);
}

mygrParser::Id_operandContext::Id_operandContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Id_operandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_operand(this);
}
void mygrParser::Id_operandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_operand(this);
}

std::any mygrParser::Id_operandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitId_operand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Input_string_callContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Input_string_callContext::INPUT() {
  return getToken(mygrParser::INPUT, 0);
}

tree::TerminalNode* mygrParser::Input_string_callContext::LPAR() {
  return getToken(mygrParser::LPAR, 0);
}

tree::TerminalNode* mygrParser::Input_string_callContext::RPAR() {
  return getToken(mygrParser::RPAR, 0);
}

tree::TerminalNode* mygrParser::Input_string_callContext::STRING() {
  return getToken(mygrParser::STRING, 0);
}

mygrParser::Input_string_callContext::Input_string_callContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Input_string_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput_string_call(this);
}
void mygrParser::Input_string_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput_string_call(this);
}

std::any mygrParser::Input_string_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitInput_string_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- True_literalContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::True_literalContext::TRUE() {
  return getToken(mygrParser::TRUE, 0);
}

mygrParser::True_literalContext::True_literalContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::True_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrue_literal(this);
}
void mygrParser::True_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrue_literal(this);
}

std::any mygrParser::True_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitTrue_literal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Float_literalContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Float_literalContext::FLOAT() {
  return getToken(mygrParser::FLOAT, 0);
}

mygrParser::Float_literalContext::Float_literalContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Float_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat_literal(this);
}
void mygrParser::Float_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat_literal(this);
}

std::any mygrParser::Float_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitFloat_literal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Input_float_callContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::Input_float_callContext::INPUT_FLOAT() {
  return getToken(mygrParser::INPUT_FLOAT, 0);
}

tree::TerminalNode* mygrParser::Input_float_callContext::LPAR() {
  return getToken(mygrParser::LPAR, 0);
}

tree::TerminalNode* mygrParser::Input_float_callContext::RPAR() {
  return getToken(mygrParser::RPAR, 0);
}

tree::TerminalNode* mygrParser::Input_float_callContext::STRING() {
  return getToken(mygrParser::STRING, 0);
}

mygrParser::Input_float_callContext::Input_float_callContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::Input_float_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput_float_call(this);
}
void mygrParser::Input_float_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput_float_call(this);
}

std::any mygrParser::Input_float_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitInput_float_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- False_literalContext ------------------------------------------------------------------

tree::TerminalNode* mygrParser::False_literalContext::FALSE() {
  return getToken(mygrParser::FALSE, 0);
}

mygrParser::False_literalContext::False_literalContext(Primary_exprContext *ctx) { copyFrom(ctx); }

void mygrParser::False_literalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFalse_literal(this);
}
void mygrParser::False_literalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mygrListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFalse_literal(this);
}

std::any mygrParser::False_literalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrVisitor*>(visitor))
    return parserVisitor->visitFalse_literal(this);
  else
    return visitor->visitChildren(this);
}
mygrParser::Primary_exprContext* mygrParser::primary_expr() {
  Primary_exprContext *_localctx = _tracker.createInstance<Primary_exprContext>(_ctx, getState());
  enterRule(_localctx, 40, mygrParser::RulePrimary_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mygrParser::LPAR: {
        _localctx = _tracker.createInstance<mygrParser::Paren_exprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(226);
        match(mygrParser::LPAR);
        setState(227);
        expr();
        setState(228);
        match(mygrParser::RPAR);
        break;
      }

      case mygrParser::INT: {
        _localctx = _tracker.createInstance<mygrParser::Int_literalContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(230);
        match(mygrParser::INT);
        break;
      }

      case mygrParser::FLOAT: {
        _localctx = _tracker.createInstance<mygrParser::Float_literalContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(231);
        match(mygrParser::FLOAT);
        break;
      }

      case mygrParser::TRUE: {
        _localctx = _tracker.createInstance<mygrParser::True_literalContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(232);
        match(mygrParser::TRUE);
        break;
      }

      case mygrParser::FALSE: {
        _localctx = _tracker.createInstance<mygrParser::False_literalContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(233);
        match(mygrParser::FALSE);
        break;
      }

      case mygrParser::ID: {
        _localctx = _tracker.createInstance<mygrParser::Id_operandContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(234);
        match(mygrParser::ID);
        break;
      }

      case mygrParser::STRING: {
        _localctx = _tracker.createInstance<mygrParser::String_literalContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(235);
        match(mygrParser::STRING);
        break;
      }

      case mygrParser::INPUT: {
        _localctx = _tracker.createInstance<mygrParser::Input_string_callContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(236);
        match(mygrParser::INPUT);
        setState(237);
        match(mygrParser::LPAR);
        setState(239);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == mygrParser::STRING) {
          setState(238);
          match(mygrParser::STRING);
        }
        setState(241);
        match(mygrParser::RPAR);
        break;
      }

      case mygrParser::INPUT_INT: {
        _localctx = _tracker.createInstance<mygrParser::Input_int_callContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(242);
        match(mygrParser::INPUT_INT);
        setState(243);
        match(mygrParser::LPAR);
        setState(245);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == mygrParser::STRING) {
          setState(244);
          match(mygrParser::STRING);
        }
        setState(247);
        match(mygrParser::RPAR);
        break;
      }

      case mygrParser::INPUT_FLOAT: {
        _localctx = _tracker.createInstance<mygrParser::Input_float_callContext>(_localctx);
        enterOuterAlt(_localctx, 10);
        setState(248);
        match(mygrParser::INPUT_FLOAT);
        setState(249);
        match(mygrParser::LPAR);
        setState(251);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == mygrParser::STRING) {
          setState(250);
          match(mygrParser::STRING);
        }
        setState(253);
        match(mygrParser::RPAR);
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

bool mygrParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return logical_or_exprSempred(antlrcpp::downCast<Logical_or_exprContext *>(context), predicateIndex);
    case 13: return logical_and_exprSempred(antlrcpp::downCast<Logical_and_exprContext *>(context), predicateIndex);
    case 14: return equality_exprSempred(antlrcpp::downCast<Equality_exprContext *>(context), predicateIndex);
    case 15: return relational_exprSempred(antlrcpp::downCast<Relational_exprContext *>(context), predicateIndex);
    case 16: return additive_exprSempred(antlrcpp::downCast<Additive_exprContext *>(context), predicateIndex);
    case 17: return multiplicative_exprSempred(antlrcpp::downCast<Multiplicative_exprContext *>(context), predicateIndex);
    case 19: return postfix_exprSempred(antlrcpp::downCast<Postfix_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool mygrParser::logical_or_exprSempred(Logical_or_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool mygrParser::logical_and_exprSempred(Logical_and_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool mygrParser::equality_exprSempred(Equality_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool mygrParser::relational_exprSempred(Relational_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool mygrParser::additive_exprSempred(Additive_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool mygrParser::multiplicative_exprSempred(Multiplicative_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool mygrParser::postfix_exprSempred(Postfix_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void mygrParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrParserInitialize();
#else
  ::antlr4::internal::call_once(mygrParserOnceFlag, mygrParserInitialize);
#endif
}
