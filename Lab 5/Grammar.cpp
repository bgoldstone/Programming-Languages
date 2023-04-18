#include "Grammar.h"
#include <sstream>
/// @brief Constructor for Grammar object.
Grammar::Grammar()
{
    this->tokens = new std::vector<std::string>();
    this->tokens->push_back("");
    // https://cplusplus.com/reference/map/map/find/
    this->terminals = new std::map<std::string, std::vector<std::string>>;
}

/// @brief Destructor for Grammar object.
Grammar::~Grammar()
{
    delete this->tokens;
    delete this->terminals;
}

/// @brief Adds a production token to the grammar.
/// @param nonTerm Non-terminal element to add.
/// @param rhs element to add to non-terminal.
void Grammar::addProduction(std::string nonTerm, std::string rhs)
{
}

/// @brief generates a random grammar.
/// @param nonTerm Non-terminal element to start with.
/// @return random element.
const char *Grammar::getRandomRHS(std::string nonTerm) const
{
    std::stringstream ss;

    return ss.str().c_str();
}

/// @brief Checks if a non-terminal element exists in the map.
/// @param nonTerm non-terminal element to check for existence.
/// @return true if the non-terminal exists.
bool Grammar::containsNonTerminal(std::string nonTerm)
{
}

/// @brief Stream object for a Grammar object.
/// @param out stream object (cout, stringstream, etc)
/// @param c Grammar object to add.
/// @return stream containing the original stream object and the passed Grammar object.
std::ostream &operator<<(std::ostream &out, const Grammar &c)
{
    out << "cat\n";
    return out;
}