#include <vector>
#include <string>
#include "HugeInteger.h"
using namespace std;

HugeInteger::HugeInteger()
{
    this->data = new vector<int>();
    data->push_back(0);
}