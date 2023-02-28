#pragma once

/* This is a C++ version of the lexer provided in the Sebesta
 * text (Edition 10) on pages 172-176
 */

#include <fstream>
using std::ifstream;
#include <string>
using std::string;

// Character classes
#define LETTER 0
#define DIGIT 1
#define UNKNOWN 99

// Token codes
#define INT_LIT 10
#define IDENT 11
#define ASSIGN_OP 20
#define ADD_OP 21
#define SUB_OP 22
#define MULT_OP 23
#define DIV_OP 24
#define LEFT_PAREN 25
#define RIGHT_PAREN 26

class Lexer {

private:
  string lexeme;
  int nextToken;
  int charClass;
  char nextChar;
  ifstream inputStream;

public:
  Lexer( const string & fileName );
  ~Lexer();

  int lex();
  int getNextToken() const;
  string getLexeme() const;

private:
  void getNonBlank();
  void getChar();
  void addChar();
  int lookup(char ch);
};
