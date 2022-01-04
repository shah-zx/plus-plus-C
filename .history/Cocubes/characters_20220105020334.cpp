#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_set>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

signed main()
{
    int n;
    cin >> n;
    vector<char> vc(n);

    rep(i, 0, n)
    {
        cin >> vc[i];
    }

    unordered_map<char, int> mp;

    for (int i = 0; i < n; i++)
    {
        int k = vc[i];
        mp[k]++;
    }

    for (auto it : mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    
    
}