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
const int N = 1e5 + 2;
#define ll long long int
ll dp[101][101];

int wt[N], val[N];

// int Knapsack(int n, int w)
// {
//     if (w <= 0)
//     {
//         return 0;
//     }
//     if (n <= 0)
//     {
//         return 0;
//     }
//     if (wt[n - 1] <= w)
//     {
//         return Knapsack(n - 1, w);
//     }

//     return max(Knapsack(n - 1, w), Knapsack(n - 1, w - wt[n - 1]) + val[n - 1]);
// }

ll knapsackR(ll wt[], ll val[], ll w, ll n)
{
	if(n==0||w==0)
		return 0;
	else if(wt[n-1]<=w)
		return max(val[n-1]+knapsackR(wt, val, w-wt[n-1], n-1), knapsackR(wt, val, w, n-1));
	return knapsackR(wt, val, w, n-1);
}


signed main()
{
    ll n;
	cin>>n;
	ll wt[n],val[n],w;
	for(ll i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>val[i];
	}
	for(ll i=0;i<101;i++)
		for(ll j=0;j<101;j++)
			dp[i][j]=-1;
	cin>>w;
	ll ans=knapsackR(wt, val, w, n);
	cout<<ans;
	return 0;
}
