#include <string>
#include <iostream>
#include <vector>
#include <map>
#pragma once
class Grammar
{
private:
    // map of all non-terminals to a vector of terminals.
    std::map<std::string, std::vector<std::string>> *nonTerminals;

public:
    Grammar();
    ~Grammar();
    void addProduction(std::string nonTerm, std::string rhs);
    std::string getRandomRHS(std::string nonTerm) const;
    bool containsNonTerminal(std::string nonTerm);
    friend std::ostream &operator<<(std::ostream &out, const Grammar &c);
};