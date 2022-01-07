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

vector<int> BFSofgraph(int V, vector<int> adj[])  // Nodes and adjacency list 
{
    vector<int> vis(V + 1, 0); // This is the vector for visited nodes which are initially not visited (0)
    vector<int> bfs;           // This is the vector for traversed nodes
    for (int i = 1; i <= V; i++)
    {
        if (!vis[i])
        {
            queue<int> q; // This is the queue for traversed nodes
            q.push(i);
            vis[i] = 1;       // The node has been visited
            bfs.push_back(i); // Pushing it into the traversed vector

            while (!q.empty())
            {
                int node = q.front();  // Top of the queue element 
                q.pop();
                bfs.push_back(node);

                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        q.push(it);
                        vis[it] = 1;
                    }
                }
            }
        }
    }
    return bfs;
}

signed main()
{

// creation of an adjency list :

int v;
int e;

cin>>v>>e;
vector<int> adj[] = {};
for (int i = 1; i < e; i++)
{
    int m;
    int n;
    cin>>m>>n;
    adj[v].push_back(m);
    adj[v].push_back(n);
}



}
