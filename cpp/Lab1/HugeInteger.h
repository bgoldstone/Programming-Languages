#include <vector>
#include <string>
#pragma once
using namespace std;
class HugeInteger
{
private:
    vector<int> *data;

public:
    HugeInteger();
    HugeInteger(const HugeInteger &other);
    bool operator==(const HugeInteger &other) const;
    HugeInteger operator+(const HugeInteger &rightSide) const;
    bool operator>(const HugeInteger &rightSide) const;
    bool isZero() const;
    string toString() const;
    int size() const;
};