#include "Grammar.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

/// @brief Constructor for Grammar object.
Grammar::Grammar()
{
    // https://cplusplus.com/reference/map/map/find/
    this->nonTerminals = new std::map<std::string, std::vector<std::string>>;
    srand(time(NULL));
}

/// @brief Destructor for Grammar object.
Grammar::~Grammar()
{
    delete this->nonTerminals;
}

/// @brief Adds a production token to the grammar.
/// @param nonTerm Non-terminal element to add.
/// @param rhs element to add to non-terminal.
void Grammar::addProduction(std::string nonTerm, std::string rhs)
{
    if (this->containsNonTerminal(nonTerm))
    {
        this->nonTerminals->at(nonTerm).push_back(rhs);
    }
    else
    {
        std::vector<std::string> production;
        production.push_back(rhs);
        this->nonTerminals->insert(std::make_pair(nonTerm, production));
    }
}

/// @brief generates a random grammar.
/// @param nonTerm Non-terminal element to start with.
/// @return random element.
std::string Grammar::getRandomRHS(std::string nonTerm) const
{
    std::vector<std::string> rhs = this->nonTerminals->at(nonTerm);

    return rhs.at(rand() % rhs.size());
}

/// @brief Checks if a non-terminal element exists in the map.
/// @param nonTerm non-terminal element to check for existence.
/// @return true if the non-terminal exists.
bool Grammar::containsNonTerminal(std::string nonTerm)
{
    return this->nonTerminals->find(nonTerm) != this->nonTerminals->end();
}

/// @brief Stream object for a Grammar object.
/// @param out stream object (cout, stringstream, etc)
/// @param g Grammar object to add.
/// @return stream containing the original stream object and the passed Grammar object.
std::ostream &operator<<(std::ostream &out, const Grammar &g)
{
    std::map<std::string, std::vector<std::string>> *nonTerms = g.nonTerminals;

    out << "Grammar: \n";
    // for each non-terminal
    for (auto it = nonTerms->begin(); it != nonTerms->end(); it++)
    {
        out << "\t" << it->first << ": ";
        std::vector<std::string> terms = nonTerms->at(it->first);
        // for each term
        for (auto i : terms)
        {
            out << i << ", ";
        }
        out << "\b\b.\n\n";
    }

    return out;
}