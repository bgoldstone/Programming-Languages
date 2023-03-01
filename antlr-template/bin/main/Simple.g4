grammar Simple;

// Lexer
WS: [ \t\n\r]+ -> skip;

// Grammar rules
assign:  id '=' expr;
id : 'A' | 'B' | 'C';
expr:
    id '+' expr
  | id '*' expr
  | '(' expr ')'
  | id ;
