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
// const HugeInteger HugeInteger::operator=(const HugeInteger &other) const
// {
//     if (this == &other)
//         return *this;
//     for (int i = 0; i < size(); i++)
//     {
//         data->push_back(other.data.at(i))
//     }
// }
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
const HugeInteger HugeInteger::operator+(const HugeInteger &rightSide) const
{
    HugeInteger newData = HugeInteger();
    for (int i = 0; i < this->data->size(); i++)
    {
        int left = *this->data[i].data();
        int right = *rightSide.data[i].data();
        newData.data->push_back(left + right);
    }
    return newData;
}
bool HugeInteger::operator>(const HugeInteger &rightSide) const
{
    for (int i = this->data->size(); i > 0; i--)
    {
        int left = *this->data[i].data();
        int right = *rightSide.data[i].data();
        if (left > right)
            return true;
    }
    return false;
}

bool HugeInteger::isZero() const
{
    for (auto i = data->begin(); i < data->end(); i++)
    {
        if (*i != 0)
            return false;
    }
    return true;
}
string HugeInteger::toString() const
{
    stringstream returnValue;
    returnValue << "[";
    for (auto i = data->begin(); i < data->end(); i++)
    {

        returnValue << (char)*i << " ";
    }
    returnValue << "]" << endl;

    return returnValue.str();
}
// void HugeInteger::setData(const string &str) const
// {
//     delete data;
//     *this->data = new vector<int>();
// }
int HugeInteger::size() const
{
    return this->data->empty();
}