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
    for (int i = 0; i < T; i++)
    {
        int q;
        int p;
        cin >> q >> p;
        if (q > 1000)
        {
            float d = 0.1 * p; // dis
            float tt = p - d;
            double total1 = float(q) * tt;
            cout<<setprecision(6)<<fixed;
            cout << total1 << endl;
        }
        else
        {
            double total = float(q) * p;
            cout<<setprecision(10)<<fixed;
            cout << total << endl;
        }
    }
}