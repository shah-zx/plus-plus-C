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

    unordered_map<string, int> umap;
    umap["shahnawaz"] = 1;
    umap["hamza"] = 2;
    umap["huma"] = 3;
    umap["amin"] = 1;

    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }

    string key = "shahnawaz";
    if (umap.find(key) != umap.end())
    {
        // Making a iterator using find :
        auto temp = umap.find(key);
        cout << "Found" << key;
    }



    
}