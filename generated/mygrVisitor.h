
// Generated from grammar/mygr.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrParser.h"


namespace mylang {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by mygrParser.
 */
class  mygrVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mygrParser.
   */
    virtual std::any visitProg(mygrParser::ProgContext *context) = 0;

    virtual std::any visitAssignment_stmt_node(mygrParser::Assignment_stmt_nodeContext *context) = 0;

    virtual std::any visitPrint_stmt_node(mygrParser::Print_stmt_nodeContext *context) = 0;

    virtual std::any visitExpr_stmt_node(mygrParser::Expr_stmt_nodeContext *context) = 0;

    virtual std::any visitIf_stmt_node(mygrParser::If_stmt_nodeContext *context) = 0;

    virtual std::any visitWhile_loop_node(mygrParser::While_loop_nodeContext *context) = 0;

    virtual std::any visitFor_loop_node(mygrParser::For_loop_nodeContext *context) = 0;

    virtual std::any visitBlock_stmt_node(mygrParser::Block_stmt_nodeContext *context) = 0;

    virtual std::any visitAssignment_op_node(mygrParser::Assignment_op_nodeContext *context) = 0;

    virtual std::any visitPrint_func_call_node(mygrParser::Print_func_call_nodeContext *context) = 0;

    virtual std::any visitIf_statement(mygrParser::If_statementContext *context) = 0;

    virtual std::any visitWhile_statement(mygrParser::While_statementContext *context) = 0;

    virtual std::any visitFor_statement(mygrParser::For_statementContext *context) = 0;

    virtual std::any visitFor_initializer(mygrParser::For_initializerContext *context) = 0;

    virtual std::any visitFor_condition(mygrParser::For_conditionContext *context) = 0;

    virtual std::any visitFor_updater(mygrParser::For_updaterContext *context) = 0;

    virtual std::any visitBlock(mygrParser::BlockContext *context) = 0;

    virtual std::any visitPass_to_logical_or(mygrParser::Pass_to_logical_orContext *context) = 0;

    virtual std::any visitPass_to_logical_and(mygrParser::Pass_to_logical_andContext *context) = 0;

    virtual std::any visitLogical_or_operation(mygrParser::Logical_or_operationContext *context) = 0;

    virtual std::any visitPass_to_equality(mygrParser::Pass_to_equalityContext *context) = 0;

    virtual std::any visitLogical_and_operation(mygrParser::Logical_and_operationContext *context) = 0;

    virtual std::any visitPass_rel_to_eq(mygrParser::Pass_rel_to_eqContext *context) = 0;

    virtual std::any visitEquality_op_new(mygrParser::Equality_op_newContext *context) = 0;

    virtual std::any visitRelational_op_new(mygrParser::Relational_op_newContext *context) = 0;

    virtual std::any visitPass_add_to_rel(mygrParser::Pass_add_to_relContext *context) = 0;

    virtual std::any visitAdditive_op_new(mygrParser::Additive_op_newContext *context) = 0;

    virtual std::any visitPass_mul_to_add(mygrParser::Pass_mul_to_addContext *context) = 0;

    virtual std::any visitPass_una_to_mul(mygrParser::Pass_una_to_mulContext *context) = 0;

    virtual std::any visitMultiplicative_op_new_unary_right(mygrParser::Multiplicative_op_new_unary_rightContext *context) = 0;

    virtual std::any visitPass_post_to_una(mygrParser::Pass_post_to_unaContext *context) = 0;

    virtual std::any visitPrefix_inc_op(mygrParser::Prefix_inc_opContext *context) = 0;

    virtual std::any visitPrefix_dec_op(mygrParser::Prefix_dec_opContext *context) = 0;

    virtual std::any visitUnary_plus_op(mygrParser::Unary_plus_opContext *context) = 0;

    virtual std::any visitUnary_minus_op(mygrParser::Unary_minus_opContext *context) = 0;

    virtual std::any visitPostfix_dec_op(mygrParser::Postfix_dec_opContext *context) = 0;

    virtual std::any visitPrimary_as_postfix_base(mygrParser::Primary_as_postfix_baseContext *context) = 0;

    virtual std::any visitPostfix_inc_op(mygrParser::Postfix_inc_opContext *context) = 0;

    virtual std::any visitParen_expr(mygrParser::Paren_exprContext *context) = 0;

    virtual std::any visitInt_literal(mygrParser::Int_literalContext *context) = 0;

    virtual std::any visitFloat_literal(mygrParser::Float_literalContext *context) = 0;

    virtual std::any visitTrue_literal(mygrParser::True_literalContext *context) = 0;

    virtual std::any visitFalse_literal(mygrParser::False_literalContext *context) = 0;

    virtual std::any visitId_operand(mygrParser::Id_operandContext *context) = 0;

    virtual std::any visitString_literal(mygrParser::String_literalContext *context) = 0;

    virtual std::any visitInput_string_call(mygrParser::Input_string_callContext *context) = 0;

    virtual std::any visitInput_int_call(mygrParser::Input_int_callContext *context) = 0;

    virtual std::any visitInput_float_call(mygrParser::Input_float_callContext *context) = 0;


};

}  // namespace mylang
