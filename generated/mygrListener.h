
// Generated from grammar/mygr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrParser.h"


namespace mylang {

/**
 * This interface defines an abstract listener for a parse tree produced by mygrParser.
 */
class  mygrListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(mygrParser::ProgContext *ctx) = 0;
  virtual void exitProg(mygrParser::ProgContext *ctx) = 0;

  virtual void enterAssignment_stmt_node(mygrParser::Assignment_stmt_nodeContext *ctx) = 0;
  virtual void exitAssignment_stmt_node(mygrParser::Assignment_stmt_nodeContext *ctx) = 0;

  virtual void enterPrint_stmt_node(mygrParser::Print_stmt_nodeContext *ctx) = 0;
  virtual void exitPrint_stmt_node(mygrParser::Print_stmt_nodeContext *ctx) = 0;

  virtual void enterExpr_stmt_node(mygrParser::Expr_stmt_nodeContext *ctx) = 0;
  virtual void exitExpr_stmt_node(mygrParser::Expr_stmt_nodeContext *ctx) = 0;

  virtual void enterIf_stmt_node(mygrParser::If_stmt_nodeContext *ctx) = 0;
  virtual void exitIf_stmt_node(mygrParser::If_stmt_nodeContext *ctx) = 0;

  virtual void enterWhile_loop_node(mygrParser::While_loop_nodeContext *ctx) = 0;
  virtual void exitWhile_loop_node(mygrParser::While_loop_nodeContext *ctx) = 0;

  virtual void enterFor_loop_node(mygrParser::For_loop_nodeContext *ctx) = 0;
  virtual void exitFor_loop_node(mygrParser::For_loop_nodeContext *ctx) = 0;

  virtual void enterBlock_stmt_node(mygrParser::Block_stmt_nodeContext *ctx) = 0;
  virtual void exitBlock_stmt_node(mygrParser::Block_stmt_nodeContext *ctx) = 0;

  virtual void enterAssignment_op_node(mygrParser::Assignment_op_nodeContext *ctx) = 0;
  virtual void exitAssignment_op_node(mygrParser::Assignment_op_nodeContext *ctx) = 0;

  virtual void enterPrint_func_call_node(mygrParser::Print_func_call_nodeContext *ctx) = 0;
  virtual void exitPrint_func_call_node(mygrParser::Print_func_call_nodeContext *ctx) = 0;

  virtual void enterIf_statement(mygrParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(mygrParser::If_statementContext *ctx) = 0;

  virtual void enterWhile_statement(mygrParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(mygrParser::While_statementContext *ctx) = 0;

  virtual void enterFor_statement(mygrParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(mygrParser::For_statementContext *ctx) = 0;

  virtual void enterFor_initializer(mygrParser::For_initializerContext *ctx) = 0;
  virtual void exitFor_initializer(mygrParser::For_initializerContext *ctx) = 0;

  virtual void enterFor_condition(mygrParser::For_conditionContext *ctx) = 0;
  virtual void exitFor_condition(mygrParser::For_conditionContext *ctx) = 0;

  virtual void enterFor_updater(mygrParser::For_updaterContext *ctx) = 0;
  virtual void exitFor_updater(mygrParser::For_updaterContext *ctx) = 0;

  virtual void enterBlock(mygrParser::BlockContext *ctx) = 0;
  virtual void exitBlock(mygrParser::BlockContext *ctx) = 0;

  virtual void enterPass_to_logical_or(mygrParser::Pass_to_logical_orContext *ctx) = 0;
  virtual void exitPass_to_logical_or(mygrParser::Pass_to_logical_orContext *ctx) = 0;

  virtual void enterPass_to_logical_and(mygrParser::Pass_to_logical_andContext *ctx) = 0;
  virtual void exitPass_to_logical_and(mygrParser::Pass_to_logical_andContext *ctx) = 0;

  virtual void enterLogical_or_operation(mygrParser::Logical_or_operationContext *ctx) = 0;
  virtual void exitLogical_or_operation(mygrParser::Logical_or_operationContext *ctx) = 0;

  virtual void enterPass_to_equality(mygrParser::Pass_to_equalityContext *ctx) = 0;
  virtual void exitPass_to_equality(mygrParser::Pass_to_equalityContext *ctx) = 0;

  virtual void enterLogical_and_operation(mygrParser::Logical_and_operationContext *ctx) = 0;
  virtual void exitLogical_and_operation(mygrParser::Logical_and_operationContext *ctx) = 0;

  virtual void enterPass_rel_to_eq(mygrParser::Pass_rel_to_eqContext *ctx) = 0;
  virtual void exitPass_rel_to_eq(mygrParser::Pass_rel_to_eqContext *ctx) = 0;

  virtual void enterEquality_op_new(mygrParser::Equality_op_newContext *ctx) = 0;
  virtual void exitEquality_op_new(mygrParser::Equality_op_newContext *ctx) = 0;

  virtual void enterRelational_op_new(mygrParser::Relational_op_newContext *ctx) = 0;
  virtual void exitRelational_op_new(mygrParser::Relational_op_newContext *ctx) = 0;

  virtual void enterPass_add_to_rel(mygrParser::Pass_add_to_relContext *ctx) = 0;
  virtual void exitPass_add_to_rel(mygrParser::Pass_add_to_relContext *ctx) = 0;

  virtual void enterAdditive_op_new(mygrParser::Additive_op_newContext *ctx) = 0;
  virtual void exitAdditive_op_new(mygrParser::Additive_op_newContext *ctx) = 0;

  virtual void enterPass_mul_to_add(mygrParser::Pass_mul_to_addContext *ctx) = 0;
  virtual void exitPass_mul_to_add(mygrParser::Pass_mul_to_addContext *ctx) = 0;

  virtual void enterPass_una_to_mul(mygrParser::Pass_una_to_mulContext *ctx) = 0;
  virtual void exitPass_una_to_mul(mygrParser::Pass_una_to_mulContext *ctx) = 0;

  virtual void enterMultiplicative_op_new_unary_right(mygrParser::Multiplicative_op_new_unary_rightContext *ctx) = 0;
  virtual void exitMultiplicative_op_new_unary_right(mygrParser::Multiplicative_op_new_unary_rightContext *ctx) = 0;

  virtual void enterPass_post_to_una(mygrParser::Pass_post_to_unaContext *ctx) = 0;
  virtual void exitPass_post_to_una(mygrParser::Pass_post_to_unaContext *ctx) = 0;

  virtual void enterPrefix_inc_op(mygrParser::Prefix_inc_opContext *ctx) = 0;
  virtual void exitPrefix_inc_op(mygrParser::Prefix_inc_opContext *ctx) = 0;

  virtual void enterPrefix_dec_op(mygrParser::Prefix_dec_opContext *ctx) = 0;
  virtual void exitPrefix_dec_op(mygrParser::Prefix_dec_opContext *ctx) = 0;

  virtual void enterUnary_plus_op(mygrParser::Unary_plus_opContext *ctx) = 0;
  virtual void exitUnary_plus_op(mygrParser::Unary_plus_opContext *ctx) = 0;

  virtual void enterUnary_minus_op(mygrParser::Unary_minus_opContext *ctx) = 0;
  virtual void exitUnary_minus_op(mygrParser::Unary_minus_opContext *ctx) = 0;

  virtual void enterPostfix_dec_op(mygrParser::Postfix_dec_opContext *ctx) = 0;
  virtual void exitPostfix_dec_op(mygrParser::Postfix_dec_opContext *ctx) = 0;

  virtual void enterPrimary_as_postfix_base(mygrParser::Primary_as_postfix_baseContext *ctx) = 0;
  virtual void exitPrimary_as_postfix_base(mygrParser::Primary_as_postfix_baseContext *ctx) = 0;

  virtual void enterPostfix_inc_op(mygrParser::Postfix_inc_opContext *ctx) = 0;
  virtual void exitPostfix_inc_op(mygrParser::Postfix_inc_opContext *ctx) = 0;

  virtual void enterParen_expr(mygrParser::Paren_exprContext *ctx) = 0;
  virtual void exitParen_expr(mygrParser::Paren_exprContext *ctx) = 0;

  virtual void enterInt_literal(mygrParser::Int_literalContext *ctx) = 0;
  virtual void exitInt_literal(mygrParser::Int_literalContext *ctx) = 0;

  virtual void enterFloat_literal(mygrParser::Float_literalContext *ctx) = 0;
  virtual void exitFloat_literal(mygrParser::Float_literalContext *ctx) = 0;

  virtual void enterTrue_literal(mygrParser::True_literalContext *ctx) = 0;
  virtual void exitTrue_literal(mygrParser::True_literalContext *ctx) = 0;

  virtual void enterFalse_literal(mygrParser::False_literalContext *ctx) = 0;
  virtual void exitFalse_literal(mygrParser::False_literalContext *ctx) = 0;

  virtual void enterId_operand(mygrParser::Id_operandContext *ctx) = 0;
  virtual void exitId_operand(mygrParser::Id_operandContext *ctx) = 0;

  virtual void enterString_literal(mygrParser::String_literalContext *ctx) = 0;
  virtual void exitString_literal(mygrParser::String_literalContext *ctx) = 0;

  virtual void enterInput_string_call(mygrParser::Input_string_callContext *ctx) = 0;
  virtual void exitInput_string_call(mygrParser::Input_string_callContext *ctx) = 0;

  virtual void enterInput_int_call(mygrParser::Input_int_callContext *ctx) = 0;
  virtual void exitInput_int_call(mygrParser::Input_int_callContext *ctx) = 0;

  virtual void enterInput_float_call(mygrParser::Input_float_callContext *ctx) = 0;
  virtual void exitInput_float_call(mygrParser::Input_float_callContext *ctx) = 0;


};

}  // namespace mylang
