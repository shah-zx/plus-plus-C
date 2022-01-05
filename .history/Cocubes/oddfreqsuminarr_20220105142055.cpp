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

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int k = a[i];
        mp[k]++;
    }
    int sum = 0;
    unordered_map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {

        if (it->second % 2 != 0)
        {
            sum += it->first * it->second;
        }
    }
    cout << "sum : " << sum << endl;
} 