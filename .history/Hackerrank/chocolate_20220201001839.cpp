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
        cout << y << endl;
        int count = 0;
        if (r >= m)
        {
            while (r <= 0)
            {
                r /= m;
                cout << r << " ";
                count++;
            }
        }
    }
}