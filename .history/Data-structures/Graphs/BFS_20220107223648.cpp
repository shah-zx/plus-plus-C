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

void BFSofgraph(vector<int> adj[], int V, int s) // Nodes and adjacency list
{
    vector<bool> vis(V + 1, false);
    queue<int> q;
    vis[s] = true; // depects that we have visited the source node //
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int V : adj[u])
        {
            if (vis[u] == false)
            {
                vis[u] = true;
                q.push(u);
            }
        }
    }
}

signed main()
{

    // creation of an adjency list :

    int V = 5;
    vector<int> adj[V];
    for (int i = 0; i < V; i++)
    {
        adj[i].push_back(i);
    }
    BFSofgraph(adj , V , 0);
}
