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

    int x1, x2, v1, v2;
    cin >> x1 >> v1;
    cin >> x2 >> v2;
    while (x1 != x2)
    {
        x1 += v1;
        x2 += v2;
        if (x1 == x2)
        {
            cout << "Yes";
        }
    }
    if (v2 > v1)
    {
        cout << "No";
    }
}