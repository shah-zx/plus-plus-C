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

class siolution{
    void dfs(int Node , vector<int> & vis , vector<int>  adj[] , vector<int> &storeDFS)
    {
         storeDFS.push_back(Node);
         vis[Node] = 1;
         for (auto it : adj[Node])
         {
             if(!vis[it]){
                 storeDFS.push_back(it);
                 vis[it] = 1;
             }
         }
         
    }
    public:
    vector <int> dfsOfgraph(int V , vector <int> adj[])
    {
       vector <int> storeDFS;
       vector <int> vis(V+1,0);
       for (int i = 0; i < V; i++)
       {
           if(!vis[i])
           {
               dfs(i , vis , adj , storeDFS);
           }
       }
       
        
    }
};



signed main(){




}