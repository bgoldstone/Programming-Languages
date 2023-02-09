#include <iostream>
using namespace std;
void oil_leak();

// Class Example 2/7/23

int main()
{
    for (int i = 0; i < 100000000; i++)
    {
        oil_leak();
    }

    return 0;
}

void oil_leak()
{
    // this is a lingering pointer
    double *josh = new double(5.55);
    cout << josh << endl;
    // delete josh;
}