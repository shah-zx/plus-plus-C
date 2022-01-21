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
    while (T--){
        int q;
        int p;
        cin >> q >> p;
        double total1 = q * p;
        if (q > 1000)
        {
            total1 -= total1 * 0.1;
        }
            cout<<setprecision(10)<<fixed;
            cout << total1 << endl;
    }
}