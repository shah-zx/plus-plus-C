#include <iostream>
using namespace std;

int GetBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{

    cout<< GetBit(7, 1);
}