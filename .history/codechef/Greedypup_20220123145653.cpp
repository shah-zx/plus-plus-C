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
        int n, k, rem = 0, m = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            rem = n % i;
            m = max(m, rem);
        }
        cout << m << endl;
    }
    return 0;
}
