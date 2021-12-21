#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    cout<<fact(5);
}