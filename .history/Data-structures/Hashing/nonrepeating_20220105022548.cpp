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
    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    map<int, int> mp;

    rep(i, 0, n)
    {
        int k = a[i];
        mp[k]++;
    }

    map<int, int>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 0)
        {
            cout << " " << it->first;
        }
        
    }
    
}