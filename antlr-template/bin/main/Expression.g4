grammar Expression;

// Lexer
WS: [ \t\n\r]+ -> skip;

// Grammar
assign: id '=' expr;
expr : expr '+' term| expr '-' term| term;
term : term '*' factor| term '/' factor| factor;
factor : exp '**' factor | exp; 
exp : '('expr')' | id;
id: 'A' | 'B' | 'C';