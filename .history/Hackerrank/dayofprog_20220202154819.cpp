#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main()
{
    int n;
    cin >> n;
    int a = 12;
    int b = 13;
    if (n >= 1700 && n <= 1917)
    {
        if (n % 4 == 0)
        {
            cout << a << "."
                 << "09"
                 << "." << n << endl;
        }
        else
        {
            cout << b << "."
                 << "09"
                 << "." << n << endl;
        }
    }
    if (n >= 1918 && n <= 2700)
    {
        if (n % 400 == 0 && n % 4 == 0 && n % 100 != 0)
        {
            cout << a << "."
                 << "09"
                 << "." << n << endl;
        }
        else
        {
            cout << b << "."
                 << "09"
                 << "." << n << endl;
        }
    }
}