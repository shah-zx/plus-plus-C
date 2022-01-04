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
    void dfs(int Node, vector<int> &vis, vector<int> adj[], vector<int> &storeDFS)
    {
        storeDFS.push_back(Node);
        vis[Node] = 1;
        for (auto it : adj[Node])
        {
            if (!vis[it])
            {
                dfs(it, vis, adj, storeDFS);
            }
        }
    }

public:
    vector<int> dfsOfgraph(int V, vector<int> adj[])
    {
        vector<int> storeDFS;
        vector<int> vis(V + 1, 0);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, adj, storeDFS);
            }
        }
    }
};




signed main()
{

    int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
