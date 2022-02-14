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

int wt[N], val[N];

int Knapsack(int n, int w)
{
    if (w <= 0)
    {
        return 0;
    }
    if (n <= 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return Knapsack(n - 1, w);
    }

    return max(Knapsack(n - 1, w), Knapsack(n - 1, w - wt[n - 1]) + val[n - 1]);
}

signed main()
{
    int n;
    cin >> n;
    rep(i, 0, n)
    {
        cin >> wt[i];
    }
    rep(i, 0, n)
    {
        cin >> val[i];
    }
    int w;
    cin >> w;
    cout << Knapsack(n , w);   
}
