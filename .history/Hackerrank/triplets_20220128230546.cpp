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

    int alice = 0;
    int bob = 0;
    int n = 3;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] > b[i])
            {
                alice++;
            }
            if (b[i] > a[i])
            {
                bob++;
            }
            if (a[i] == b[i])
            {
                alice += 0;
                bob += 0;
            }
        }
    }
    cout << alice << " " << bob << endl;
}
