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
    int n;
    cin >> n;
    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int k = a[i];
        mp[k]++;
    }

    unordered_map<int, int>::iterator it;
    bool hai = 0;
    for (int i = 0; i < n; i++)
    {
        int key = a[i];
        auto temp = mp.find(key);
    }
}
