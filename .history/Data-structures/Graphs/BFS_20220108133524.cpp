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
        for (int v : adj[u])
        {
            if (vis[v] == false)
            {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

void Addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int PrintGraph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (auto x : adj[i])
        {
            cout << x << " " << endl;
        }
    }
}

signed main()
{

    // creation of an adjency list :

    int V = 5;
    int s = 0;
    vector<int> adj[V];
    // Adding our edges of the graph 
    
    Addedge(adj, 0, 1);
    Addedge(adj, 0, 2);
    Addedge(adj, 1, 0);
    Addedge(adj, 1, 2);
    Addedge(adj, 1, 3);
    Addedge(adj, 2, 0);
    Addedge(adj, 2, 1);
    Addedge(adj, 2, 3);
    Addedge(adj, 2, 4);
    Addedge(adj, 3, 1);
    Addedge(adj, 3, 2);
    Addedge(adj, 3, 4);
    Addedge(adj, 4, 2);
    Addedge(adj, 4, 3);

    BFSofgraph(adj, V, s);

    //  Graph g(4);
    //   g.addEdge(0, 1);
    //   g.addEdge(0, 2);
    //   g.addEdge(1, 2);
    //   g.addEdge(2, 0);
    //   g.addEdge(2, 3);
    //   g.addEdge(3, 3);
}
