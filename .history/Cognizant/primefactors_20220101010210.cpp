#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool primeorNot(int n)
{
    bool hai = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            hai = 0;
        }
    }
    if (hai == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int_fast32_t main()
{

    int n;
    cin >> n;
    bool hai = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && i == )
        {
            hai = 1;
            cout << i << " ";
        }
    }
}