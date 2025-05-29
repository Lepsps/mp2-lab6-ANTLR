
// Generated from grammar/mygr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrVisitor.h"


namespace mylang {

/**
 * This class provides an empty implementation of mygrVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mygrBaseVisitor : public mygrVisitor {
public:

  virtual std::any visitProg(mygrParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_stmt_node(mygrParser::Assignment_stmt_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_stmt_node(mygrParser::Print_stmt_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_stmt_node(mygrParser::Expr_stmt_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_stmt_node(mygrParser::If_stmt_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_loop_node(mygrParser::While_loop_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_loop_node(mygrParser::For_loop_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock_stmt_node(mygrParser::Block_stmt_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_op_node(mygrParser::Assignment_op_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_func_call_node(mygrParser::Print_func_call_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(mygrParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(mygrParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_statement(mygrParser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_initializer(mygrParser::For_initializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_condition(mygrParser::For_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_updater(mygrParser::For_updaterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(mygrParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_to_logical_or(mygrParser::Pass_to_logical_orContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_to_logical_and(mygrParser::Pass_to_logical_andContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogical_or_operation(mygrParser::Logical_or_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_to_equality(mygrParser::Pass_to_equalityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogical_and_operation(mygrParser::Logical_and_operationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_rel_to_eq(mygrParser::Pass_rel_to_eqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquality_op_new(mygrParser::Equality_op_newContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelational_op_new(mygrParser::Relational_op_newContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_add_to_rel(mygrParser::Pass_add_to_relContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditive_op_new(mygrParser::Additive_op_newContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_mul_to_add(mygrParser::Pass_mul_to_addContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_una_to_mul(mygrParser::Pass_una_to_mulContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicative_op_new_unary_right(mygrParser::Multiplicative_op_new_unary_rightContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPass_post_to_una(mygrParser::Pass_post_to_unaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefix_inc_op(mygrParser::Prefix_inc_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefix_dec_op(mygrParser::Prefix_dec_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_plus_op(mygrParser::Unary_plus_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_minus_op(mygrParser::Unary_minus_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_dec_op(mygrParser::Postfix_dec_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary_as_postfix_base(mygrParser::Primary_as_postfix_baseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_inc_op(mygrParser::Postfix_inc_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParen_expr(mygrParser::Paren_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt_literal(mygrParser::Int_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloat_literal(mygrParser::Float_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrue_literal(mygrParser::True_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFalse_literal(mygrParser::False_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_operand(mygrParser::Id_operandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_literal(mygrParser::String_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInput_string_call(mygrParser::Input_string_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInput_int_call(mygrParser::Input_int_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInput_float_call(mygrParser::Input_float_callContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace mylang
