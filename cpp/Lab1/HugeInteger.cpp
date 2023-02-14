#include <vector>
using std::vector;
#include <string>
using std::string;
#include <sstream>
using std::stringstream;
#include "HugeInteger.h"

HugeInteger::HugeInteger()
{
    this->data = new vector<int>();
    data->push_back(0);
}
HugeInteger::HugeInteger(const HugeInteger &other)
{
    for (auto i = other.data->begin(); i != other.data->end(); ++i)
    {
        data->push_back(*i);
    }
}
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
HugeInteger HugeInteger::operator+(const HugeInteger &rightSide) const
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
    for (auto i = data->begin(); i < data->end(); i++)
    {
        returnValue << *i;
    }
    return returnValue.str();
}
int HugeInteger::size() const
{
    return this->data->empty();
}