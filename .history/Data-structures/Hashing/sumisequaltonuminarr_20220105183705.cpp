#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
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
    int m;
    cin >> m;
    unordered_set<int> set(m);
    for (auto it : set)
    {
        set.insert(it);
    }
    for (int i = 0; i < m; i++)
    {
        cout<<set(it);
    }
    
}