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

        int n, k; // number of clicks  = n   //  number of tweets = k
        cin >> n >> k;
        for (int i = 0; i < k; i++)
        {
            int a = n;
            cin >> a;
            if (a == 0)
            {
                cout << "CLOSEALL" << endl;
            }
            if (0 < a && a <= a)
            {
                cout << "CLICK"
                     << " " << n;
            }
        }
    }
}
