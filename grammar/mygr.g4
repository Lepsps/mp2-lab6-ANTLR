grammar mygr;

prog: statement* EOF;

statement: assignment SEMI # assignment_stmt_node | print_statement SEMI # print_stmt_node | expr SEMI # expr_stmt_node | if_statement # if_stmt_node | while_statement # while_loop_node | for_statement # for_loop_node | block # block_stmt_node ;
assignment: ID ASSIGN expr # assignment_op_node ;
print_statement: PRINT LPAR expr RPAR # print_func_call_node ;
if_statement: IF LPAR expr RPAR block (ELIF LPAR expr RPAR block)* (ELSE block)? ;
while_statement: WHILE LPAR expr RPAR block ;
for_statement: FOR LPAR for_initializer? SEMI for_condition? SEMI for_updater? RPAR block ;
for_initializer : assignment | expr ; for_condition : expr ; for_updater : assignment | expr ;
block: LBRACE statement* RBRACE ;

expr
    : logical_or_expr       # pass_to_logical_or
    ;

logical_or_expr
    : logical_and_expr                                  # pass_to_logical_and
    | logical_or_expr LOR logical_and_expr              # logical_or_operation
    ;

logical_and_expr
    : equality_expr                                     # pass_to_equality
    | logical_and_expr LAND equality_expr               # logical_and_operation
    ;

equality_expr: relational_expr # pass_rel_to_eq | equality_expr op_eq=(EQ | NEQ) relational_expr # equality_op_new;
relational_expr: additive_expr # pass_add_to_rel | relational_expr op_rel=(LT | GT | LTE | GTE) additive_expr # relational_op_new;
additive_expr: multiplicative_expr # pass_mul_to_add | additive_expr op_add=(ADD | SUB) multiplicative_expr # additive_op_new;
multiplicative_expr: unary_expr # pass_una_to_mul | multiplicative_expr op_mul=(MUL | DIV | MOD) unary_expr # multiplicative_op_new_unary_right;
unary_expr: postfix_expr # pass_post_to_una | INC postfix_expr # prefix_inc_op | DEC postfix_expr # prefix_dec_op | ADD postfix_expr # unary_plus_op | SUB postfix_expr # unary_minus_op;
postfix_expr: primary_expr # primary_as_postfix_base | postfix_expr INC # postfix_inc_op | postfix_expr DEC # postfix_dec_op;
primary_expr: LPAR expr RPAR # paren_expr | INT # int_literal | FLOAT # float_literal | TRUE # true_literal | FALSE # false_literal | ID # id_operand | STRING # string_literal | INPUT LPAR (STRING)? RPAR # input_string_call | INPUT_INT LPAR (STRING)? RPAR # input_int_call | INPUT_FLOAT LPAR (STRING)? RPAR # input_float_call ;


PRINT:'print';
IF:'if';
ELSE:'else';
ELIF:'elif';
WHILE:'while';
FOR:'for';
TRUE:'true';
FALSE:'false';
INPUT:'input';
INPUT_INT:'input_int';
INPUT_FLOAT:'input_float';

ID    : [a-zA-Z_] [a-zA-Z_0-9]* ;
INT   : [0-9]+ ;
FLOAT : [0-9]+ '.' [0-9]+ | '.' [0-9]+ | [0-9]+ '.' ;
STRING: '"' ( ~["\\] | '\\' . )*? '"' ;

ASSIGN: '=' ; 
SEMI  : ';' ; 
LBRACE: '{' ; 
RBRACE: '}' ;
SUB   : '-' ; 
ADD   : '+' ; 
DIV   : '/' ; 
MUL   : '*' ; 
MOD   : '%' ; 
INC   : '++' ; 
DEC   : '--' ;
EQ    : '==' ; 
NEQ   : '!=' ; 
LT    : '<' ; 
GT    : '>' ; 
LTE   : '<=' ; 
GTE   : '>=' ;

LAND  : '&&' ;
LOR   : '||' ;

LPAR  : '(' ; RPAR  : ')' ;
WS    : [ \t\r\n]+ -> skip ;
COMMENT: '//' ~[\r\n]* -> skip;