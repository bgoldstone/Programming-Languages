#include "Lexer.h"
/**
 * name: Ben Goldstone
 * semester: Spring 2023
 * date: 3/7/23
 * sources used: N/A
 *
 */
int main()
{

  Lexer lex("test.txt");

  do
  {
    lex.lex(); // Get next token

    int tok = lex.getNextToken();
    string text = lex.getLexeme();

    printf("Next token is: %d, Next lexeme is %s\n", tok, text.c_str());
  } while (lex.getNextToken() != EOF);
}
