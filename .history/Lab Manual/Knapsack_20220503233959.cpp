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
#define ll long long int



int KnapSack(int wt[], int val[], int n, int W)
{
    if (n == 0 || wt == 0)
        return 0;
    else if (wt[n - 1] <= W)
    {
        return max(val[n - 1] + KnapSack(wt, val, W - wt[n - 1], n - 1), KnapSack(wt, val, W, n - 1));
    }
}

signed main()
{
    ll n;
    cin >> n;
    ll wt[n], val[n], w;
    for (ll i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    cin >> w;
    ll ans = knapsackR(wt, val, w, n);
    cout << ans;
    return 0;
}