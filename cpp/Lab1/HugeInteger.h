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
    HugeInteger(const string &str);
    ~HugeInteger();
    const HugeInteger operator=(const HugeInteger &other) const;
    bool operator==(const HugeInteger &other) const;
    const HugeInteger operator+(const HugeInteger &rightSide) const;
    bool operator>(const HugeInteger &rightSide) const;
    bool isZero() const;
    string toString() const;
    // void setData(const string &str) const;
    int size() const;
};