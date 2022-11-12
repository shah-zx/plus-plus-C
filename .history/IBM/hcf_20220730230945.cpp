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
    int n, m;
    cin >> n >> m;
    vector<int> v;
    vector<int> p;
    for (int i = 1; i <= n; i++)
    {
        if (n / i == 0)
        {
            v.push_back(i);
        }
    }
    for (int j = 0; j < m; j++)
    {
        if (m / j == 0)
        {
            p.push_back(j);
        }
    }
    for(auto it : v){
        for(auto pt : p){
            if(it == pt)
        }
    }
}