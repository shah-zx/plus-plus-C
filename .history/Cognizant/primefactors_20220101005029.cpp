#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int_fast32_t main()
{

    int n;
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % 2 != 0)
        {
            cout << i;
        }
    }
}