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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> inc[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> out[j];
    }
    for (int p = 0; p < n; p++)
    {
        inc[p] -= r;
        in.push_back(inc[p]);
    }
    for (int q = 0; q < m; q++)
    {
        out[q] -= r;
        ou.push_back(out[q]);
    }
    for (auto w : in)
    {
        sum += w;
    }
    

}