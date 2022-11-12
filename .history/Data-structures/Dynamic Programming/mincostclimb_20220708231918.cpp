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

int Solve(int cost[], int n, vector<int> &dp)
{
    if (n == 0) // stair 0
    {
        cost[0] = 0;
    }
    if (n == 1) // stais 1
    {
        cost[1] = 1;
    }
    // step 2 :

    if (dp[n] != -1)
    {
        return dp[n];
    }

    // step 3 :
    dp[n] = cost[n] + min(Solve(cost, n - 1, dp), Solve(cost, n - 2, dp));
    return dp[n];
}

// for tabulation :

int Sol(vector<int> &cost, int n)
{
    vector<int> dp(n + 1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i <= n; i++)
    {
        dp[i] = cost[i] + min(Sol(cost, n - 1), Sol(cost, n - 2));
    }
    int ans = cost[n] + min(Sol(cost, n - 1), Sol(cost, n - 2));
}

signed main()
{
    int c;
    cin >> c;
    int cost[c];
    int n;
    cin >> n;
    // step 3 :

    vector<int> dp(n + 1, -1);
    int ans = min(Solve(cost, n - 1, dp), Solve(cost, n - 2, dp));
}