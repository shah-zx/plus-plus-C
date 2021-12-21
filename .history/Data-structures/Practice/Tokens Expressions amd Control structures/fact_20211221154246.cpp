#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include<math.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

float Sinx(float x)
{
    return x - ((pow(x,3)/fact(3)) + (pow(x,5)/fact(5)) - (pow(x,7)/fact(7)));
    // return pow(x,3);
}

int main()
{
    cout<<Sinx(20.98);
}