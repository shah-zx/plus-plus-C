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

int Solve(int cost[], int n)
{
    if (n == 0)
    {
        cost[0] = 0;
    }
    if (n == 1)
    {
        cost[1] = 1;
    }
    
}

signed main()
{
    int c;
    cin >> c;
    int cost[c];
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
}