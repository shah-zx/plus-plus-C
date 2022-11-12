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
    int n, m, r;
    cin >> n >> m >> r;
    int inc[n];
    int out[m];
    vector<int> in;
    vector<int> ou;
    for (int i = 0; i < n; i++)
    {
        cin >> inc[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> out[j];
    }
    for (int i = 0; i < n; i++)
    {
        inc[i] -= r;
        in.push_back(inc[i]);
    }

}