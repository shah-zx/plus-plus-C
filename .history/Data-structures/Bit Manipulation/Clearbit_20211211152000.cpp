#include<iostream>
using namespace std;

int ClearBit(int n , int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int main()
{
    cout<<ClearBit(7,1);
}


