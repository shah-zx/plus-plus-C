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
    int T;
    cin >> T;
    while (T--)
    {
        int n, c, m;
        cin >> n >> c >> m;
        int r = n / c;
        int y = r;
        int count = 0;
        if (y >= m)
        {
            while (y >= 0 && y >= m)
            {
                y -= m;
                count++;
            }
            int o = y + count;
            cout << o << endl;

        }
        cout << y << endl;
    }
}