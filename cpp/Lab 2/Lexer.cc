#include <cstdlib>
#include <iostream>
#include "Lexer.h"
using std::cout;
using std::endl;

Lexer::Lexer(const string &fileName) : nextToken(EOF), charClass(UNKNOWN), nextChar(' ')
{
  inputStream.open(fileName.c_str(), ifstream::in);
}

Lexer::~Lexer()
{
  inputStream.close();
}

int Lexer::getNextToken() const
{
  return nextToken;
}

string Lexer::getLexeme() const
{
  return lexeme;
}

// lookup - a function to lookup operators and parentheses
//          and return the token
int Lexer::lookup(char ch)
{
  switch (ch)
  {
  case '(':
    addChar();
    nextToken = LEFT_PAREN;
    break;
  case ')':
    addChar();
    nextToken = RIGHT_PAREN;
    break;
  case '+':
    addChar();
    nextToken = ADD_OP;
    break;
  case '-':
    addChar();
    nextToken = SUB_OP;
    break;
  case '*':
    addChar();
    nextToken = MULT_OP;
    break;
  case '/':
    addChar();
    nextToken = DIV_OP;
    break;
  case '{':
    addChar();
    nextToken = LEFT_CUR;
    break;
  case '}':
    addChar();
    nextToken = RIGHT_CUR;
    break;
  case ',':
    addChar();
    nextToken = COMMA;
    break;
  case ';':
    addChar();
    nextToken = SEMICOLON;
    break;
  case '=':
    addChar();
    nextToken = ASSIGN_OP;
    break;
  case '.':
    addChar();
    nextToken = PERIOD;
    break;
  case '"':
    addChar();
    nextToken = QUOTE;
  default:
    addChar();
    nextToken = EOF;
    break;
  }
  return nextToken;
}

// addChar() - a function to add nextChar to lexeme
void Lexer::addChar()
{
  lexeme.push_back(nextChar);
}

// getChar() - a function to get the next character of
//             input and determine its character class
void Lexer::getChar()
{
  nextChar = inputStream.get();

  if (inputStream.good())
  {
    if (isalpha(nextChar))
      charClass = LETTER;
    else if (isdigit(nextChar))
      charClass = DIGIT;
    else if (nextChar == '.')
      charClass = PERIOD;
    else if (nextChar == '"')
      charClass = QUOTE;
    else if (nextChar == ',')
      charClass = COMMA;
    else if (nextChar == ' ')
      charClass = SPACE;
    else
      charClass = UNKNOWN;
  }
  else
  {
    charClass = EOF;
  }
}

// getNonBlank - a function to call getChar until it
//               returns a non-whitespace character
void Lexer::getNonBlank()
{
  while (isspace(nextChar))
    getChar();
}

// lex() - a simple lexical analyzer
int Lexer::lex()
{
  getNonBlank();
  lexeme = "";

  switch (charClass)
  {
  case QUOTE:
    do
    {
      addChar();
      getChar();
    } while (charClass == LETTER || charClass == QUOTE || charClass == SPACE || charClass == COMMA);
    nextToken = STRING_LIT;
    break;
  case COMMA:
    addChar();
    getChar();
    nextToken = COMMA;
    break;
  case LETTER:
    addChar();
    getChar();
    while (charClass == LETTER || charClass == DIGIT)
    {
      addChar();
      getChar();
    }
    if (lexeme == "while" || lexeme == "void" || lexeme == "else" || lexeme == "return" || lexeme == "if" || lexeme == "break")
      nextToken = KEYWORD;
    else if (lexeme == ",")
      nextToken = COMMA;
    else
      nextToken = IDENT;
    break; // identifiers
  case PERIOD:
    bool isDecimal;
    isDecimal = false;
    while (charClass == DIGIT || charClass == PERIOD)
    {
      addChar();
      getChar();
      if (charClass == DIGIT)
        isDecimal = true;
    }
    if (isDecimal)
      nextToken = FLOAT_LIT; // floats
    else
      nextToken = PERIOD; // period
    break;
  case DIGIT:
    bool numIsDecimal;
    numIsDecimal = false;
    while (charClass == DIGIT || charClass == PERIOD)
    {
      addChar();
      getChar();
      if (charClass == PERIOD)
        numIsDecimal = true;
    }
    if (numIsDecimal)
      nextToken = FLOAT_LIT; // floats
    else
      nextToken = INT_LIT; // integers
    break;
  case UNKNOWN:
    lookup(nextChar);
    getChar();
    break; // Other characters
  case EOF:
    nextToken = EOF;
    lexeme = "EOF";
    break;
  }
  return nextToken;
}
