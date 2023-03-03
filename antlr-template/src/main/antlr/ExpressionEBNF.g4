grammar ExpressionEBNF;

// Lexer
WS: [ \t\n\r]+ -> skip;

// Grammar
expr : term '+' term* | term '-' term* | term;
term : factor '*' factor* | factor '/' factor* | factor;
factor : exp  '**' exp* | exp;
 exp : '(' expr ')'| id;
 id : 'A' | 'B' | 'C';