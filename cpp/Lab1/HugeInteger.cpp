#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "HugeInteger.h"
using namespace std;

/// @brief Constructor function for HugeInteger Object.
HugeInteger::HugeInteger()
{
    this->data = new vector<int>();
    data->push_back(0);
}

/**
 * @brief Copy Constructor for HugeInteger Object
 *
 * @param other object to copy.
 */
HugeInteger::HugeInteger(const HugeInteger &other)
{
    this->data = new vector<int>();
    // Copy values of vector from other to this vector.
    for (auto i = other.data->begin(); i != other.data->end(); ++i)
    {
        data->push_back(*i);
    }
}

/**
 * @brief Construct a new HugeInteger from a string object.
 *
 * @param str string object to convert to HugeInteger
 */
HugeInteger::HugeInteger(const string &str)
{
    this->data = new vector<int>();
    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (isdigit(c))
            data->push_back((int)c);
    }
}

/**
 * @brief Delete the HugeInteger object
 *
 */
HugeInteger::~HugeInteger()
{
    delete this->data;
}

/**
 * @brief Operator overloading for assignment operators.
 *
 * @param other HugeInteger object to be assigned.
 * @return const HugeInteger HugeInteger object.
 */
const HugeInteger HugeInteger::operator=(const HugeInteger &other) const
{
    if (this == &other)
        return *this;
    for (int i = 0; i < size(); i++)
    {
        data->push_back(other.data->at(i));
    }
    return *this;
}

/**
 * @brief Checks for equality between two HugeInteger objects.
 *
 * @param other Other HugeInteger object to compare.
 * @return true if equal.
 * @return false if not equal.
 */
bool HugeInteger::operator==(const HugeInteger &other) const
{
    if (other.data->size() != this->data->size())
        return false;
    for (int i = 0; i < this->data->size(); i++)
    {
        if (other.data[i] != this->data[i])
            return false;
    }
    return true;
}

/**
 * @brief Adds two HugeIntegers together.
 *
 * @param rightSide other HugeInteger to add.
 * @return const HugeInteger HugeInteger added.
 */
const HugeInteger HugeInteger::operator+(const HugeInteger &rightSide) const
{
    long result = atoi(rightSide.toString()) + atoi(toString());
    string added = to_string(result);
    return HugeInteger(added);
}

/**
 * @brief Checks if the left HugeInteger is bigger than the right.
 *
 * @param rightSide right HugeInteger to check.
 * @return true if greater than.
 * @return false if not greater than.
 */
bool HugeInteger::operator>(const HugeInteger &rightSide) const
{
    int size = rightSide.size();
    if (this->size() > rightSide.size())
        size = this->size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (i < rightSide.size() && i < this->size())
            if (this->data->at(i) > rightSide.data->at(i))
                return true;
    }
    return false;
}

/**
 * @brief Checks if this HugeInteger is equal to zero.
 *
 * @return true if equal to zero
 * @return false if not equal to zero
 */
bool HugeInteger::isZero() const
{
    for (auto i = data->begin(); i < data->end(); i++)
    {
        if (*i != 0)
            return false;
    }
    return true;
}

/**
 * @brief Converts a HugeInteger into a string.
 *
 * @return string string representation of HugeInteger.
 */
const char *HugeInteger::toString() const
{
    stringstream sstream;
    if (size() <= 1)
    {
        return "0";
    }
    for (auto i = data->begin(); i < data->end(); i++)
    {

        sstream << (char)*i << "";
    }
    string returnValue = sstream.str();
    return returnValue.c_str();
}
// void HugeInteger::setData(const string &str) const
// {
//     delete data;
//     *this->data = new vector<int>();
// }

/**
 * @brief Returns the size of a HugeInteger.
 *
 * @return int HugeInteger size.
 */
int HugeInteger::size() const
{
    return this->data->size();
}