#include <iostream>
using namespace std;

// Class example 2/7/23

void printArray(int *a, int length)
{
    cout << "[";
    for (int i = 0; i < length; i++)
    {
        cout << a[i];
        if (i < length - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main()
{
    int size = 10;
    int *a = new int[size];

    for (int i = 0; i < size; i++)
        a[i] = i;

    printArray(a, size);
    delete[] a;
    return 0;
}