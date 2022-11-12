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
    int level, total, profit;
    cin >> level >> total >> profit;
    int sum;
    for (int i = 1; i < level; i++)
    {
        sum = 0;
        sum = total * (profit / 100);
        // sum = total;
    }
}