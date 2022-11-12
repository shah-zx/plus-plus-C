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

class Grpah
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v)
    {
        adj[v].push_back(u);
    }

    void PrintG(int u, int v)
    {
        for (auto i : adj)
        {
            cout << i.first;
            for (auto j : i.second)
            {
                cout << j << " , ";
            }
        }
    }
}

signed
main()
{
}