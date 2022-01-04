#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

class Solution
{
public:
    bool isCycleingraph(int s, int V, vector<int> vis, vector<int> adj[])
    {

       
        
    }
    bool isCycle(int V, vector<int> ad[])
    {
        vector<int> vis(V + 1, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (isCycleingraph())
                {
                    true;
                }
            }
            else
            {
                return false;
            }
        }
    }
};

signed main()
{
}