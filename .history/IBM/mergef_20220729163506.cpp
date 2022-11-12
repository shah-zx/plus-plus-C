#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
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
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> mp(n + m);
        int arr[n];
        int brr[m];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp.push_back(arr[p]);
        }
        for (int j = 0; j < m; j++)
        {
            cin >> brr[j];
            mp.push_back(brr[q]);

        }
        for (int p = 0; p < n; p++)
        {
        }
        for (int q = 0; q < m; q++)
        {
        }
        sort(mp.begin(), mp.end());
        for (auto it : mp)
        {
            cout << mp[it] << endl;
        }
    }
}