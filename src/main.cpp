#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>
#include <any>
#include <map>
#include <optional>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <cmath> 

#include "antlr4-runtime.h"
#include "mygrLexer.h"       
#include "mygrParser.h"       
#include "mygrBaseVisitor.h"       

using namespace mylang;        
using namespace antlr4;

class CalculatorVisitor : public mygrBaseVisitor {
public:
    std::map<std::string, std::any> variables;
private:
    std::any getNumericValue(const std::any& val, const std::string& context_msg = "operand") { if (!val.has_value()) { std::cerr << "Error: " << context_msg << " no value." << std::endl; return std::any(); } if (val.type() == typeid(int) || val.type() == typeid(double)) { return val; } if (val.type() == typeid(bool)) { std::cerr << "Warning: bool in numeric context (" << context_msg << "). true->1, false->0." << std::endl; return std::any(std::any_cast<bool>(val) ? 1 : 0); } if (val.type() == typeid(std::string)) { std::cerr << "Error: Expected num for " << context_msg << " got str: \"" << std::any_cast<std::string>(val) << "\"" << std::endl; return std::any(); } std::cerr << "Error: Cannot cast " << context_msg << " to num. Type: " << val.type().name() << "." << std::endl; return std::any(); }
    bool evaluateCondition(const std::any& val_any) { if (!val_any.has_value()) { std::cerr << "Error: Condition no value." << std::endl; return false; } if (val_any.type() == typeid(bool)) { return std::any_cast<bool>(val_any); } std::any numeric_val = getNumericValue(val_any, "condition expr"); if (numeric_val.has_value()) { if (numeric_val.type() == typeid(int)) return std::any_cast<int>(numeric_val) != 0; if (numeric_val.type() == typeid(double)) return std::any_cast<double>(numeric_val) != 0.0; } if (val_any.type() == typeid(std::string)) { std::cerr << "Error: Condition is str: \"" << std::any_cast<std::string>(val_any) << "\"" << std::endl; } else if (val_any.type() != typeid(bool) && !numeric_val.has_value()) { std::cerr << "Error: Condition unconvertible type " << val_any.type().name() << std::endl; } return false; }
    std::optional<std::string> getLValueName(antlr4::tree::ParseTree* node) { if (auto p_ctx = dynamic_cast<mygrParser::Postfix_exprContext*>(node)) { if (auto prim_base_ctx = dynamic_cast<mygrParser::Primary_as_postfix_baseContext*>(p_ctx)) { node = prim_base_ctx->primary_expr(); } else if (dynamic_cast<mygrParser::Postfix_inc_opContext*>(p_ctx) || dynamic_cast<mygrParser::Postfix_dec_opContext*>(p_ctx)) { std::cerr << "Error: lvalue req for inc/dec.\n"; return std::nullopt; } else { return std::nullopt; } } if (auto prim_ctx = dynamic_cast<mygrParser::Primary_exprContext*>(node)) { if (auto id_op_ctx = dynamic_cast<mygrParser::Id_operandContext*>(prim_ctx)) { return id_op_ctx->ID()->getText(); } else if (dynamic_cast<mygrParser::Paren_exprContext*>(prim_ctx)) { std::cerr << "Error: lvalue req for inc/dec (no parens).\n"; return std::nullopt; } } std::cerr << "Error: lvalue (var name) req for inc/dec.\n"; return std::nullopt; }
    std::string processStringToken(const std::string& raw_text) { std::string text = raw_text; if (text.length() >= 2 && text.front() == '"' && text.back() == '"') { text = text.substr(1, text.length() - 2); size_t pos = 0; while ((pos = text.find("\\\"", pos)) != std::string::npos) { text.replace(pos, 2, "\""); pos += 1; } pos = 0; while ((pos = text.find("\\\\", pos)) != std::string::npos) { text.replace(pos, 2, "\\"); pos += 1; } } else { std::cerr << "Warning: Malformed string literal token: " << raw_text << std::endl; } return text; }
    std::optional<std::string> readLineWithPrompt(antlr4::tree::TerminalNode* promptTerminalNode) { if (promptTerminalNode) { std::string prompt_text = processStringToken(promptTerminalNode->getText()); std::cout << prompt_text << std::flush; } std::string line_input; if (std::getline(std::cin, line_input)) { return line_input; } if (std::cin.eof()) { std::cerr << "Input Error: EOF received." << std::endl; } else if (std::cin.fail()) { std::cerr << "Input Error: Failed to read." << std::endl; } std::cin.clear(); return std::nullopt; }

public:
    std::any visitProg(mygrParser::ProgContext* ctx) override { for (auto stmtCtx : ctx->statement()) { visit(stmtCtx); } return nullptr; }
    std::any visitAssignment_stmt_node(mygrParser::Assignment_stmt_nodeContext* ctx) override { return visit(ctx->assignment()); }
    std::any visitPrint_stmt_node(mygrParser::Print_stmt_nodeContext* ctx) override { return visit(ctx->print_statement()); }
    std::any visitExpr_stmt_node(mygrParser::Expr_stmt_nodeContext* ctx) override { if (ctx->expr()) { visit(ctx->expr()); } return nullptr; }
    std::any visitBlock_stmt_node(mygrParser::Block_stmt_nodeContext* ctx) override { return visit(ctx->block()); }
    std::any visitBlock(mygrParser::BlockContext* ctx) override { for (auto stmtCtx : ctx->statement()) { visit(stmtCtx); } return nullptr; }
    std::any visitIf_stmt_node(mygrParser::If_stmt_nodeContext* ctx) override { return visit(ctx->if_statement()); }
    std::any visitIf_statement(mygrParser::If_statementContext* ctx) { if (evaluateCondition(visit(ctx->expr(0)))) { visit(ctx->block(0)); return nullptr; } for (size_t i = 0; i < ctx->ELIF().size(); ++i) { if (evaluateCondition(visit(ctx->expr(i + 1)))) { visit(ctx->block(i + 1)); return nullptr; } } if (ctx->ELSE()) { visit(ctx->block(ctx->ELIF().size() + 1)); } return nullptr; }
    std::any visitWhile_loop_node(mygrParser::While_loop_nodeContext* ctx) override { return visit(ctx->while_statement()); }
    std::any visitWhile_statement(mygrParser::While_statementContext* ctx) { while (evaluateCondition(visit(ctx->expr()))) { visit(ctx->block()); } return nullptr; }
    std::any visitFor_loop_node(mygrParser::For_loop_nodeContext* ctx) override { return visit(ctx->for_statement()); }
    std::any visitFor_statement(mygrParser::For_statementContext* ctx) { if (ctx->for_initializer()) { visit(ctx->for_initializer()); } while (true) { bool conditionHolds = true; if (ctx->for_condition()) { conditionHolds = evaluateCondition(visit(ctx->for_condition())); } if (!conditionHolds) break; visit(ctx->block()); if (ctx->for_updater()) { visit(ctx->for_updater()); } } return nullptr; }
    std::any visitFor_initializer(mygrParser::For_initializerContext* ctx) override { if (ctx->assignment()) return visit(ctx->assignment()); if (ctx->expr()) return visit(ctx->expr()); return nullptr; }
    std::any visitFor_condition(mygrParser::For_conditionContext* ctx) override { if (ctx->expr()) return visit(ctx->expr()); return nullptr; }
    std::any visitFor_updater(mygrParser::For_updaterContext* ctx) override { if (ctx->assignment()) return visit(ctx->assignment()); if (ctx->expr()) return visit(ctx->expr()); return nullptr; }
    std::any visitAssignment_op_node(mygrParser::Assignment_op_nodeContext* ctx) override { std::string varName = ctx->ID()->getText(); std::any value_any = visit(ctx->expr()); if (value_any.has_value()) { if (value_any.type() == typeid(int) || value_any.type() == typeid(double) || value_any.type() == typeid(bool) || value_any.type() == typeid(std::string)) { variables[varName] = value_any; return value_any; } else { std::cerr << "Error: Cannot assign value of type " << value_any.type().name() << " to variable '" << varName << "'." << std::endl; } } else { std::cerr << "Error: Expression for assignment to '" << varName << "' did not yield a value." << std::endl; } return std::any(); }
    std::any visitPrint_func_call_node(mygrParser::Print_func_call_nodeContext* ctx) override { if (ctx->expr()) { std::any result = visit(ctx->expr()); if (result.has_value()) { if (result.type() == typeid(int)) { std::cout << std::any_cast<int>(result) << std::endl; } else if (result.type() == typeid(double)) { std::cout << std::fixed << std::setprecision(6) << std::any_cast<double>(result) << std::endl; } else if (result.type() == typeid(bool)) { std::cout << (std::any_cast<bool>(result) ? "true" : "false") << std::endl; } else if (result.type() == typeid(std::string)) { std::cout << std::any_cast<std::string>(result) << std::endl; } else { std::cerr << "Error: Print arg unprintable type: " << result.type().name() << std::endl; } } else { std::cerr << "Error: Print arg no value.\n"; } } return nullptr; }

    std::any visitParen_expr(mygrParser::Paren_exprContext* ctx) override { return visit(ctx->expr()); }
    std::any visitInt_literal(mygrParser::Int_literalContext* ctx) override { try { return std::stoi(ctx->INT()->getText()); } catch (const std::exception& e) { std::cerr << "Error parsing int '" << ctx->INT()->getText() << "': " << e.what() << std::endl; return std::any(); } }
    std::any visitFloat_literal(mygrParser::Float_literalContext* ctx) override { try { return std::stod(ctx->FLOAT()->getText()); } catch (const std::exception& e) { std::cerr << "Error parsing float '" << ctx->FLOAT()->getText() << "': " << e.what() << std::endl; return std::any(); } }
    std::any visitTrue_literal(mygrParser::True_literalContext* ctx) override { return true; }
    std::any visitFalse_literal(mygrParser::False_literalContext* ctx) override { return false; }
    std::any visitId_operand(mygrParser::Id_operandContext* ctx) override { std::string varName = ctx->ID()->getText(); if (variables.count(varName)) { return variables.at(varName); } std::cerr << "Error: Undefined variable '" << varName << "'" << std::endl; return std::any(); }
    std::any visitString_literal(mygrParser::String_literalContext* ctx) override { return processStringToken(ctx->STRING()->getText()); }
    std::any visitInput_string_call(mygrParser::Input_string_callContext* ctx) override { auto lineOpt = readLineWithPrompt(ctx->STRING()); if (lineOpt) { return *lineOpt; } return std::any(); }
    std::any visitInput_int_call(mygrParser::Input_int_callContext* ctx) override { auto lineOpt = readLineWithPrompt(ctx->STRING()); if (lineOpt) { try { return std::stoi(*lineOpt); } catch (const std::exception& e) { std::cerr << "Input Error for input_int(): \"" << *lineOpt << "\" - " << e.what() << std::endl; } } return std::any(); }
    std::any visitInput_float_call(mygrParser::Input_float_callContext* ctx) override { auto lineOpt = readLineWithPrompt(ctx->STRING()); if (lineOpt) { try { return std::stod(*lineOpt); } catch (const std::exception& e) { std::cerr << "Input Error for input_float(): \"" << *lineOpt << "\" - " << e.what() << std::endl; } } return std::any(); }

    template<typename Func> std::any apply_inc_dec(antlr4::tree::ParseTree* oN, Func op, bool iP) { auto vNO = getLValueName(oN); if (!vNO)return std::any(); std::string vN = *vNO; if (variables.find(vN) == variables.end()) { std::cerr << "Err: Var '" << vN << "' not def for inc/dec.\n"; return std::any(); } std::any& vva = variables.at(vN); std::any nV = getNumericValue(vva, "var " + vN); if (!nV.has_value())return std::any(); if (nV.type() == typeid(int)) { int v = std::any_cast<int>(nV); int oV = v; v = op(v, 1); vva = v; return iP ? v : oV; } else if (nV.type() == typeid(double)) { double v = std::any_cast<double>(nV); double oV = v; v = op(v, 1.0); vva = v; return iP ? v : oV; } else { std::cerr << "Err: Var '" << vN << "' not num for inc/dec.\n"; return std::any(); } }
    std::any visitPrimary_as_postfix_base(mygrParser::Primary_as_postfix_baseContext* ctx) override { return visit(ctx->primary_expr()); }
    std::any visitPostfix_inc_op(mygrParser::Postfix_inc_opContext* ctx) override { return apply_inc_dec(ctx->postfix_expr(), std::plus<double>(), false); }
    std::any visitPostfix_dec_op(mygrParser::Postfix_dec_opContext* ctx) override { return apply_inc_dec(ctx->postfix_expr(), std::minus<double>(), false); }
    std::any visitPrefix_inc_op(mygrParser::Prefix_inc_opContext* ctx) override { return apply_inc_dec(ctx->postfix_expr(), std::plus<double>(), true); }
    std::any visitPrefix_dec_op(mygrParser::Prefix_dec_opContext* ctx) override { return apply_inc_dec(ctx->postfix_expr(), std::minus<double>(), true); }
    std::any visitPass_post_to_una(mygrParser::Pass_post_to_unaContext* ctx) override { return visit(ctx->postfix_expr()); }
    std::any visitUnary_plus_op(mygrParser::Unary_plus_opContext* ctx) override { std::any vA = visit(ctx->postfix_expr()); std::any nV = getNumericValue(vA, "op of unary +"); return nV; }
    std::any visitUnary_minus_op(mygrParser::Unary_minus_opContext* ctx) override { std::any vA = visit(ctx->postfix_expr()); std::any nV = getNumericValue(vA, "op of unary -"); if (nV.has_value()) { if (nV.type() == typeid(int))return-std::any_cast<int>(nV); if (nV.type() == typeid(double))return-std::any_cast<double>(nV); } return std::any(); }
    template<typename FI, typename FD> std::any apply_binary_op(const std::any& lAR, const std::any& rAR, FI oI, FD oD, const std::string& oN) { std::any lA = getNumericValue(lAR, "left op of " + oN); std::any rA = getNumericValue(rAR, "right op of " + oN); if (!lA.has_value() || !rA.has_value())return std::any(); bool lID = lA.type() == typeid(double); bool rID = rA.type() == typeid(double); if (lID || rID) { double lV = lID ? std::any_cast<double>(lA) : static_cast<double>(std::any_cast<int>(lA)); double rV = rID ? std::any_cast<double>(rA) : static_cast<double>(std::any_cast<int>(rA)); return oD(lV, rV); } else { return oI(std::any_cast<int>(lA), std::any_cast<int>(rA)); } }
    std::any apply_division(const std::any& lAR, const std::any& rAR) { std::any lA = getNumericValue(lAR, "left op of DIV"); std::any rA = getNumericValue(rAR, "right op of DIV"); if (!lA.has_value() || !rA.has_value())return std::any(); double lV, rV; if (lA.type() == typeid(double))lV = std::any_cast<double>(lA); else lV = static_cast<double>(std::any_cast<int>(lA)); if (rA.type() == typeid(double))rV = std::any_cast<double>(rA); else rV = static_cast<double>(std::any_cast<int>(rA)); if (rV == 0.0) { std::cerr << "Err: Div by zero.\n"; return std::any(); }return lV / rV; }
    std::any visitPass_una_to_mul(mygrParser::Pass_una_to_mulContext* ctx) override { return visit(ctx->unary_expr()); }
    std::any visitMultiplicative_op_new_unary_right(mygrParser::Multiplicative_op_new_unary_rightContext* ctx) override { std::any left_raw = visit(ctx->multiplicative_expr()); std::any right_raw = visit(ctx->unary_expr()); if (ctx->op_mul->getType() == mygrLexer::MUL) { return apply_binary_op(left_raw, right_raw, std::multiplies<int>(), std::multiplies<double>(), "MUL"); } else if (ctx->op_mul->getType() == mygrLexer::DIV) { return apply_division(left_raw, right_raw); } else if (ctx->op_mul->getType() == mygrLexer::MOD) { std::any left_any = getNumericValue(left_raw, "left op of MOD"); std::any right_any = getNumericValue(right_raw, "right op of MOD"); if (!left_any.has_value() || !right_any.has_value()) return std::any(); bool left_is_double = left_any.type() == typeid(double); bool right_is_double = right_any.type() == typeid(double); if (left_is_double || right_is_double) { double l_val = left_is_double ? std::any_cast<double>(left_any) : static_cast<double>(std::any_cast<int>(left_any)); double r_val = right_is_double ? std::any_cast<double>(right_any) : static_cast<double>(std::any_cast<int>(right_any)); if (r_val == 0.0) { std::cerr << "Error: Modulo by zero (double)." << std::endl; return std::any(); } return std::fmod(l_val, r_val); } else { int l_val = std::any_cast<int>(left_any); int r_val = std::any_cast<int>(right_any); if (r_val == 0) { std::cerr << "Error: Modulo by zero (int)." << std::endl; return std::any(); } return l_val % r_val; } } std::cerr << "Internal Error: Unknown mul op." << std::endl; return std::any(); }
    std::any visitPass_mul_to_add(mygrParser::Pass_mul_to_addContext* ctx) override { return visit(ctx->multiplicative_expr()); }
    std::any visitAdditive_op_new(mygrParser::Additive_op_newContext* ctx) override { std::any left = visit(ctx->additive_expr()); std::any right = visit(ctx->multiplicative_expr()); if (ctx->op_add->getType() == mygrLexer::ADD) { return apply_binary_op(left, right, std::plus<int>(), std::plus<double>(), "ADD"); } else if (ctx->op_add->getType() == mygrLexer::SUB) { return apply_binary_op(left, right, std::minus<int>(), std::minus<double>(), "SUB"); } std::cerr << "Internal Error: Unknown add op." << std::endl; return std::any(); }
    std::any visitPass_add_to_rel(mygrParser::Pass_add_to_relContext* ctx) override { return visit(ctx->additive_expr()); }
    std::any visitRelational_op_new(mygrParser::Relational_op_newContext* ctx) override { std::any left = visit(ctx->relational_expr()); std::any right = visit(ctx->additive_expr()); switch (ctx->op_rel->getType()) { case mygrLexer::LT: return apply_binary_op(left, right, std::less<int>(), std::less<double>(), "LT"); case mygrLexer::GT: return apply_binary_op(left, right, std::greater<int>(), std::greater<double>(), "GT"); case mygrLexer::LTE: return apply_binary_op(left, right, std::less_equal<int>(), std::less_equal<double>(), "LTE"); case mygrLexer::GTE: return apply_binary_op(left, right, std::greater_equal<int>(), std::greater_equal<double>(), "GTE"); default: std::cerr << "Internal Error: Unknown rel op." << std::endl; return std::any(false); } }
    std::any visitPass_rel_to_eq(mygrParser::Pass_rel_to_eqContext* ctx) override { return visit(ctx->relational_expr()); }
    std::any visitEquality_op_new(mygrParser::Equality_op_newContext* ctx) override { std::any left_val = visit(ctx->equality_expr()); std::any right_val = visit(ctx->relational_expr()); if (left_val.has_value() && right_val.has_value() && left_val.type() == typeid(bool) && right_val.type() == typeid(bool)) { bool l_b = std::any_cast<bool>(left_val); bool r_b = std::any_cast<bool>(right_val); if (ctx->op_eq->getType() == mygrLexer::EQ) return l_b == r_b; if (ctx->op_eq->getType() == mygrLexer::NEQ) return l_b != r_b; } if (left_val.has_value() && right_val.has_value() && left_val.type() == typeid(std::string) && right_val.type() == typeid(std::string)) { std::string l_s = std::any_cast<std::string>(left_val); std::string r_s = std::any_cast<std::string>(right_val); if (ctx->op_eq->getType() == mygrLexer::EQ) return l_s == r_s; if (ctx->op_eq->getType() == mygrLexer::NEQ) return l_s != r_s; } if (ctx->op_eq->getType() == mygrLexer::EQ) { return apply_binary_op(left_val, right_val, std::equal_to<int>(), std::equal_to<double>(), "EQ"); } else if (ctx->op_eq->getType() == mygrLexer::NEQ) { return apply_binary_op(left_val, right_val, std::not_equal_to<int>(), std::not_equal_to<double>(), "NEQ"); } std::cerr << "Internal Error: Unknown eq op or incompatible types." << std::endl; return std::any(false); }

    std::any visitPass_to_logical_or(mygrParser::Pass_to_logical_orContext* ctx) override {
        return visit(ctx->logical_or_expr());            
        return visit(ctx->logical_or_expr());         
    }


    std::any visitPass_to_logical_and(mygrParser::Pass_to_logical_andContext* ctx) override {
        return visit(ctx->logical_and_expr());
    }

    std::any visitLogical_or_operation(mygrParser::Logical_or_operationContext* ctx) override {
        bool left_bool = evaluateCondition(visit(ctx->logical_or_expr()));
        if (left_bool) {
            return true;
        }
        bool right_bool = evaluateCondition(visit(ctx->logical_and_expr()));
        return right_bool;           
    }

    std::any visitPass_to_equality(mygrParser::Pass_to_equalityContext* ctx) override {
        return visit(ctx->equality_expr());
    }

    std::any visitLogical_and_operation(mygrParser::Logical_and_operationContext* ctx) override {
        bool left_bool = evaluateCondition(visit(ctx->logical_and_expr()));
        if (!left_bool) {
            return false;
        }
        bool right_bool = evaluateCondition(visit(ctx->equality_expr()));
        return right_bool;           
    }
};

class MyErrorListener : public antlr4::BaseErrorListener {
public:
    bool hasErrors = false;
    void syntaxError(antlr4::Recognizer* recognizer, antlr4::Token* offendingSymbol, size_t line,
        size_t charPositionInLine, const std::string& msg, std::exception_ptr e) override {
        if (msg.find("token recognition error at: '<EOF>'") != std::string::npos && offendingSymbol && offendingSymbol->getType() == antlr4::Token::EOF) {
        }
        else { std::cerr << "Syntax Error at line " << line << ":" << charPositionInLine << " -> " << msg << std::endl; }
        hasErrors = true;
    }
};

int main(int argc, const char* argv[]) {
    if (argc > 1) {
        std::string inputString;
        for (int i = 1; i < argc; ++i) { inputString += argv[i]; if (i < argc - 1) inputString += " "; }
        if (!inputString.empty() && inputString.back() != ';' && inputString.back() != '}') inputString += ";";

        ANTLRInputStream input(inputString);
        mygrLexer lexer(&input);     
        CommonTokenStream tokens(&lexer);
        mygrParser parser(&tokens);     
        MyErrorListener errorListener;
        lexer.removeErrorListeners(); lexer.addErrorListener(&errorListener);
        parser.removeErrorListeners(); parser.addErrorListener(&errorListener);
        mygrParser::ProgContext* tree = nullptr;     
        try { tree = parser.prog(); }
        catch (const std::exception& e) { std::cerr << "Parsing error (exception): " << e.what() << std::endl; return 1; }

        if (errorListener.hasErrors || !tree) { std::cout << "\nInput has syntax errors. Aborting." << std::endl; return 1; }
        else { CalculatorVisitor visitor; try { visitor.visit(tree); } catch (const std::exception& e) { std::cerr << "Runtime error: " << e.what() << std::endl; return 1; } }
        return 0;
    }

    std::cout << "\nEnter statements (e.g., 'print(true && (1 < 2));', '1+2*3-4%2')." << std::endl;
    std::cout << "End input with EOF (Ctrl+D or Ctrl+Z+Enter). Type 'exit' to quit." << std::endl;

    CalculatorVisitor globalVisitor;
    while (true) {
        std::cout << ">> ";
        std::string currentBlockInput;
        std::stringstream ss;
        std::string line;
        while (std::getline(std::cin, line)) {
            if (line == "exit") { std::cout << "\nExiting." << std::endl; return 0; }
            ss << line << "\n";
        }
        currentBlockInput = ss.str();
        bool isEmptyOrWhitespace = currentBlockInput.empty() || std::all_of(currentBlockInput.begin(), currentBlockInput.end(), [](unsigned char c) { return std::isspace(c); });

        if (std::cin.eof() && isEmptyOrWhitespace) { std::cout << "\nExiting." << std::endl; break; }
        if (std::cin.eof() || (std::cin.fail() && !std::cin.bad())) { std::cin.clear(); }

        if (isEmptyOrWhitespace && !std::cin.eof() && currentBlockInput.find_first_not_of(" \t\r\n") == std::string::npos) {
            continue;
        }

        ANTLRInputStream input(currentBlockInput);
        mygrLexer lexer(&input);     
        CommonTokenStream tokens(&lexer);
        mygrParser parser(&tokens);     
        MyErrorListener errorListener;
        lexer.removeErrorListeners(); lexer.addErrorListener(&errorListener);
        parser.removeErrorListeners(); parser.addErrorListener(&errorListener);
        mygrParser::ProgContext* tree = nullptr;     
        try { tree = parser.prog(); }
        catch (const std::exception& e) { std::cerr << "Parsing error: " << e.what() << std::endl; continue; }

        if (errorListener.hasErrors) {      }
        else if (tree && (!tree->statement().empty() || (tree->children.size() > 1 && tree->children[0] != tree->EOF()))) {
            try { globalVisitor.visit(tree); }
            catch (const std::exception& e) { std::cerr << "Runtime error: " << e.what() << std::endl; }
        }
    }
    return 0;
}