#include <iostream>
using namespace std;

int UpBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val<<pos));
}

int main()
{
    cout<<UpdateBit(5 , 1  ,1);
}
