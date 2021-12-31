#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void primeorNot(int n)
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
        cout << "Prime";
    }
    else
    {
        cout << "Not";
    }
}

int_fast32_t main()
{
    int n;
    cin >> n;
    primeorNot(n);
}