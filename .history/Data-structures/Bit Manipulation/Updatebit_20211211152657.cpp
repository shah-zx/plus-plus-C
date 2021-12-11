#include<iostream>
using namespace std;

int UpdateBit(int n , int pos , int val)
{
    int mask = ~(1 << pos);
    n = n&mask;
    return (n | (val<<pos);
}

int main()
{
    
}