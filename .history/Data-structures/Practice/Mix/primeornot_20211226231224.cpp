#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void negativeorPositive(int n)
{
    if (n >= -2147483648 && n <= 2147483647)
    {
        cout << "Number is negative";
    }
    else if (n >= 0 && n <= 4294967295)
    {
        cout<<"Number is positive";
    }
}

int main()
{
}