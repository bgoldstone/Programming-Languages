#include <string>
#include <iostream>
#include <vector>
#include <map>
#pragma once
class Grammar
{
private:
    std::vector<std::string> *tokens;
    std::map<std::string, std::vector<std::string>> *terminals;

public:
    Grammar();
    ~Grammar();
    void addProduction(std::string nonTerm, std::string rhs);
    const char *getRandomRHS(std::string nonTerm) const;
    bool containsNonTerminal(std::string nonTerm);
    friend std::ostream& operator<<(std::ostream &out, const Grammar &c);
};