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

// Function for printing the graph

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

// Function for making the edges 

void Addedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

signed main()
{

    int V = 4; // vertices //
    vector<int> adj[V];
    Addedge(adj, 0, 1);
    Addedge(adj, 0, 2);
    Addedge(adj, 1, 2);
    Addedge(adj, 2, 3);

    PrintGraph(adj , V);
}