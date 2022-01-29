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

        int a, b, c;
        cin >> a >> b >> c;
        int f = abs(c - a);
        int d = abs(c - b);
        if (f > d)
        {
            cout << "Cat B" << endl;
        } else if ( d > f) {
            cout << "Cat A" << endl;
        }
    }
}