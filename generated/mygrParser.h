
// Generated from grammar/mygr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace mylang {


class  mygrParser : public antlr4::Parser {
public:
  enum {
    PRINT = 1, IF = 2, ELSE = 3, ELIF = 4, WHILE = 5, FOR = 6, TRUE = 7, 
    FALSE = 8, INPUT = 9, INPUT_INT = 10, INPUT_FLOAT = 11, ID = 12, INT = 13, 
    FLOAT = 14, STRING = 15, ASSIGN = 16, SEMI = 17, LBRACE = 18, RBRACE = 19, 
    SUB = 20, ADD = 21, DIV = 22, MUL = 23, MOD = 24, INC = 25, DEC = 26, 
    EQ = 27, NEQ = 28, LT = 29, GT = 30, LTE = 31, GTE = 32, LAND = 33, 
    LOR = 34, LPAR = 35, RPAR = 36, WS = 37, COMMENT = 38
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleAssignment = 2, RulePrint_statement = 3, 
    RuleIf_statement = 4, RuleWhile_statement = 5, RuleFor_statement = 6, 
    RuleFor_initializer = 7, RuleFor_condition = 8, RuleFor_updater = 9, 
    RuleBlock = 10, RuleExpr = 11, RuleLogical_or_expr = 12, RuleLogical_and_expr = 13, 
    RuleEquality_expr = 14, RuleRelational_expr = 15, RuleAdditive_expr = 16, 
    RuleMultiplicative_expr = 17, RuleUnary_expr = 18, RulePostfix_expr = 19, 
    RulePrimary_expr = 20
  };

  explicit mygrParser(antlr4::TokenStream *input);

  mygrParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~mygrParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatementContext;
  class AssignmentContext;
  class Print_statementContext;
  class If_statementContext;
  class While_statementContext;
  class For_statementContext;
  class For_initializerContext;
  class For_conditionContext;
  class For_updaterContext;
  class BlockContext;
  class ExprContext;
  class Logical_or_exprContext;
  class Logical_and_exprContext;
  class Equality_exprContext;
  class Relational_exprContext;
  class Additive_exprContext;
  class Multiplicative_exprContext;
  class Unary_exprContext;
  class Postfix_exprContext;
  class Primary_exprContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  For_loop_nodeContext : public StatementContext {
  public:
    For_loop_nodeContext(StatementContext *ctx);

    For_statementContext *for_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Print_stmt_nodeContext : public StatementContext {
  public:
    Print_stmt_nodeContext(StatementContext *ctx);

    Print_statementContext *print_statement();
    antlr4::tree::TerminalNode *SEMI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Expr_stmt_nodeContext : public StatementContext {
  public:
    Expr_stmt_nodeContext(StatementContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Assignment_stmt_nodeContext : public StatementContext {
  public:
    Assignment_stmt_nodeContext(StatementContext *ctx);

    AssignmentContext *assignment();
    antlr4::tree::TerminalNode *SEMI();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  While_loop_nodeContext : public StatementContext {
  public:
    While_loop_nodeContext(StatementContext *ctx);

    While_statementContext *while_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  If_stmt_nodeContext : public StatementContext {
  public:
    If_stmt_nodeContext(StatementContext *ctx);

    If_statementContext *if_statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Block_stmt_nodeContext : public StatementContext {
  public:
    Block_stmt_nodeContext(StatementContext *ctx);

    BlockContext *block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentContext() = default;
    void copyFrom(AssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Assignment_op_nodeContext : public AssignmentContext {
  public:
    Assignment_op_nodeContext(AssignmentContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentContext* assignment();

  class  Print_statementContext : public antlr4::ParserRuleContext {
  public:
    Print_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Print_statementContext() = default;
    void copyFrom(Print_statementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Print_func_call_nodeContext : public Print_statementContext {
  public:
    Print_func_call_nodeContext(Print_statementContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *LPAR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_statementContext* print_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> LPAR();
    antlr4::tree::TerminalNode* LPAR(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAR();
    antlr4::tree::TerminalNode* RPAR(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELIF();
    antlr4::tree::TerminalNode* ELIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  While_statementContext : public antlr4::ParserRuleContext {
  public:
    While_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAR();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_statementContext* while_statement();

  class  For_statementContext : public antlr4::ParserRuleContext {
  public:
    For_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAR();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *RPAR();
    BlockContext *block();
    For_initializerContext *for_initializer();
    For_conditionContext *for_condition();
    For_updaterContext *for_updater();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_statementContext* for_statement();

  class  For_initializerContext : public antlr4::ParserRuleContext {
  public:
    For_initializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_initializerContext* for_initializer();

  class  For_conditionContext : public antlr4::ParserRuleContext {
  public:
    For_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_conditionContext* for_condition();

  class  For_updaterContext : public antlr4::ParserRuleContext {
  public:
    For_updaterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_updaterContext* for_updater();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Pass_to_logical_orContext : public ExprContext {
  public:
    Pass_to_logical_orContext(ExprContext *ctx);

    Logical_or_exprContext *logical_or_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  Logical_or_exprContext : public antlr4::ParserRuleContext {
  public:
    Logical_or_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logical_or_exprContext() = default;
    void copyFrom(Logical_or_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Pass_to_logical_andContext : public Logical_or_exprContext {
  public:
    Pass_to_logical_andContext(Logical_or_exprContext *ctx);

    Logical_and_exprContext *logical_and_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Logical_or_operationContext : public Logical_or_exprContext {
  public:
    Logical_or_operationContext(Logical_or_exprContext *ctx);

    Logical_or_exprContext *logical_or_expr();
    antlr4::tree::TerminalNode *LOR();
    Logical_and_exprContext *logical_and_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logical_or_exprContext* logical_or_expr();
  Logical_or_exprContext* logical_or_expr(int precedence);
  class  Logical_and_exprContext : public antlr4::ParserRuleContext {
  public:
    Logical_and_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logical_and_exprContext() = default;
    void copyFrom(Logical_and_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Pass_to_equalityContext : public Logical_and_exprContext {
  public:
    Pass_to_equalityContext(Logical_and_exprContext *ctx);

    Equality_exprContext *equality_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Logical_and_operationContext : public Logical_and_exprContext {
  public:
    Logical_and_operationContext(Logical_and_exprContext *ctx);

    Logical_and_exprContext *logical_and_expr();
    antlr4::tree::TerminalNode *LAND();
    Equality_exprContext *equality_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logical_and_exprContext* logical_and_expr();
  Logical_and_exprContext* logical_and_expr(int precedence);
  class  Equality_exprContext : public antlr4::ParserRuleContext {
  public:
    Equality_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Equality_exprContext() = default;
    void copyFrom(Equality_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Pass_rel_to_eqContext : public Equality_exprContext {
  public:
    Pass_rel_to_eqContext(Equality_exprContext *ctx);

    Relational_exprContext *relational_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Equality_op_newContext : public Equality_exprContext {
  public:
    Equality_op_newContext(Equality_exprContext *ctx);

    antlr4::Token *op_eq = nullptr;
    Equality_exprContext *equality_expr();
    Relational_exprContext *relational_expr();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Equality_exprContext* equality_expr();
  Equality_exprContext* equality_expr(int precedence);
  class  Relational_exprContext : public antlr4::ParserRuleContext {
  public:
    Relational_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Relational_exprContext() = default;
    void copyFrom(Relational_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Relational_op_newContext : public Relational_exprContext {
  public:
    Relational_op_newContext(Relational_exprContext *ctx);

    antlr4::Token *op_rel = nullptr;
    Relational_exprContext *relational_expr();
    Additive_exprContext *additive_expr();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GTE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Pass_add_to_relContext : public Relational_exprContext {
  public:
    Pass_add_to_relContext(Relational_exprContext *ctx);

    Additive_exprContext *additive_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Relational_exprContext* relational_expr();
  Relational_exprContext* relational_expr(int precedence);
  class  Additive_exprContext : public antlr4::ParserRuleContext {
  public:
    Additive_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Additive_exprContext() = default;
    void copyFrom(Additive_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Additive_op_newContext : public Additive_exprContext {
  public:
    Additive_op_newContext(Additive_exprContext *ctx);

    antlr4::Token *op_add = nullptr;
    Additive_exprContext *additive_expr();
    Multiplicative_exprContext *multiplicative_expr();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Pass_mul_to_addContext : public Additive_exprContext {
  public:
    Pass_mul_to_addContext(Additive_exprContext *ctx);

    Multiplicative_exprContext *multiplicative_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Additive_exprContext* additive_expr();
  Additive_exprContext* additive_expr(int precedence);
  class  Multiplicative_exprContext : public antlr4::ParserRuleContext {
  public:
    Multiplicative_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Multiplicative_exprContext() = default;
    void copyFrom(Multiplicative_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Pass_una_to_mulContext : public Multiplicative_exprContext {
  public:
    Pass_una_to_mulContext(Multiplicative_exprContext *ctx);

    Unary_exprContext *unary_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Multiplicative_op_new_unary_rightContext : public Multiplicative_exprContext {
  public:
    Multiplicative_op_new_unary_rightContext(Multiplicative_exprContext *ctx);

    antlr4::Token *op_mul = nullptr;
    Multiplicative_exprContext *multiplicative_expr();
    Unary_exprContext *unary_expr();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Multiplicative_exprContext* multiplicative_expr();
  Multiplicative_exprContext* multiplicative_expr(int precedence);
  class  Unary_exprContext : public antlr4::ParserRuleContext {
  public:
    Unary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Unary_exprContext() = default;
    void copyFrom(Unary_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Pass_post_to_unaContext : public Unary_exprContext {
  public:
    Pass_post_to_unaContext(Unary_exprContext *ctx);

    Postfix_exprContext *postfix_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_plus_opContext : public Unary_exprContext {
  public:
    Unary_plus_opContext(Unary_exprContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    Postfix_exprContext *postfix_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_minus_opContext : public Unary_exprContext {
  public:
    Unary_minus_opContext(Unary_exprContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    Postfix_exprContext *postfix_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Prefix_dec_opContext : public Unary_exprContext {
  public:
    Prefix_dec_opContext(Unary_exprContext *ctx);

    antlr4::tree::TerminalNode *DEC();
    Postfix_exprContext *postfix_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Prefix_inc_opContext : public Unary_exprContext {
  public:
    Prefix_inc_opContext(Unary_exprContext *ctx);

    antlr4::tree::TerminalNode *INC();
    Postfix_exprContext *postfix_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Unary_exprContext* unary_expr();

  class  Postfix_exprContext : public antlr4::ParserRuleContext {
  public:
    Postfix_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Postfix_exprContext() = default;
    void copyFrom(Postfix_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Postfix_dec_opContext : public Postfix_exprContext {
  public:
    Postfix_dec_opContext(Postfix_exprContext *ctx);

    Postfix_exprContext *postfix_expr();
    antlr4::tree::TerminalNode *DEC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Primary_as_postfix_baseContext : public Postfix_exprContext {
  public:
    Primary_as_postfix_baseContext(Postfix_exprContext *ctx);

    Primary_exprContext *primary_expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Postfix_inc_opContext : public Postfix_exprContext {
  public:
    Postfix_inc_opContext(Postfix_exprContext *ctx);

    Postfix_exprContext *postfix_expr();
    antlr4::tree::TerminalNode *INC();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Postfix_exprContext* postfix_expr();
  Postfix_exprContext* postfix_expr(int precedence);
  class  Primary_exprContext : public antlr4::ParserRuleContext {
  public:
    Primary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Primary_exprContext() = default;
    void copyFrom(Primary_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Paren_exprContext : public Primary_exprContext {
  public:
    Paren_exprContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *LPAR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Input_int_callContext : public Primary_exprContext {
  public:
    Input_int_callContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *INPUT_INT();
    antlr4::tree::TerminalNode *LPAR();
    antlr4::tree::TerminalNode *RPAR();
    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Int_literalContext : public Primary_exprContext {
  public:
    Int_literalContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  String_literalContext : public Primary_exprContext {
  public:
    String_literalContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Id_operandContext : public Primary_exprContext {
  public:
    Id_operandContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Input_string_callContext : public Primary_exprContext {
  public:
    Input_string_callContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *LPAR();
    antlr4::tree::TerminalNode *RPAR();
    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  True_literalContext : public Primary_exprContext {
  public:
    True_literalContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *TRUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Float_literalContext : public Primary_exprContext {
  public:
    Float_literalContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Input_float_callContext : public Primary_exprContext {
  public:
    Input_float_callContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *INPUT_FLOAT();
    antlr4::tree::TerminalNode *LPAR();
    antlr4::tree::TerminalNode *RPAR();
    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  False_literalContext : public Primary_exprContext {
  public:
    False_literalContext(Primary_exprContext *ctx);

    antlr4::tree::TerminalNode *FALSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Primary_exprContext* primary_expr();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool logical_or_exprSempred(Logical_or_exprContext *_localctx, size_t predicateIndex);
  bool logical_and_exprSempred(Logical_and_exprContext *_localctx, size_t predicateIndex);
  bool equality_exprSempred(Equality_exprContext *_localctx, size_t predicateIndex);
  bool relational_exprSempred(Relational_exprContext *_localctx, size_t predicateIndex);
  bool additive_exprSempred(Additive_exprContext *_localctx, size_t predicateIndex);
  bool multiplicative_exprSempred(Multiplicative_exprContext *_localctx, size_t predicateIndex);
  bool postfix_exprSempred(Postfix_exprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace mylang
