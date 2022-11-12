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

// Recursion + Memoization :

int Fib(int n, vector<int> &dp)
{
    // base case
    if (n <= 1)
    {
        return n;
    }

    // if -1 is not present at the position then return the number at that postion //
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // Updating the vector
    dp[n] = Fib(n - 1, dp) + Fib(n - 2, dp);
}
// R + M

signed main()
{

    int n;
    cin >> n;
    // Created 1d table
    vector<int> dp(n + 1);
    // for (int i = 0; i <= n; i++)
    //     dp[i] = -1;

    // cout << Fib(n, dp) << endl;

    // Tabulation method :

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[n] << endl;
}