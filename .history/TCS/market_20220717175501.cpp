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
    float level, total, profit;
    cin >> level >> total >> profit;
    float sum = 0;
    for (int i = 0; i < level; i++)
    {
        sum = total * (profit / 100);
        sum = total;
    }
    cout << sum << endl;
}