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

bool PerSq(int n)
{
    int u = sqrt(n);
    int v = n / sqrt(n);
    if (v == sqrt(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}

signed main()
{

    int n;
    cin >> n;
    vector <int> v;
    for (int i = 1; i <= n; i++)
    {
        if (PerSq(i))
        {
            cout << sqrt(i) << " ";
        }
    }
    // }
}