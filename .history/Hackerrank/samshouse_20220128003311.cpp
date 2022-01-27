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

int CountappOr()
{
    int s, t, a, b; // a = location of apple tree // b id location of orange tree
    int m, n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int apples[m];
    int oranges[n];
    int counta = 0;
    int countb = 0;

    vector<int> v; // vector containing apples after adding a
    vector<int> z; // vector containing apples after adding b

    for (int i = 0; i < m; i++)
    {
        cin >> apples[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> oranges[j];
    }
    for (int k = 0; k < m; k++)
    {
        v.push_back(a + apples[k]);
    }
    for (int o = 0; o < n; o++)
    {
        z.push_back(b + oranges[o]);
    }
    for (auto i : v)
    {
        if (i <= s && i >= t)
        {
        }
    }
}

signed main()
{
    CountappOr();
}
