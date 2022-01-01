#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int_fast32_t main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    for (int i = n1; i <=n2; i++)
    {
        if (primeorNot(i))
        {
            cout << i << endl;
        }
    }
}