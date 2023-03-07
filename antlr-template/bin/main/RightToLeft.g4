
grammar RightToLeft;

// Lexer
WS: [ \t\n\r]+ -> skip;

// Grammar
expr : expr '*' expr | expr '-' expr | expr '+' expr | expr '/' expr | expr '**' expr | '(' expr ')' | id;
id : 'A' | 'B' | 'C';