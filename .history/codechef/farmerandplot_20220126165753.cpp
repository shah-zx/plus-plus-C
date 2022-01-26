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

int GCD(int a, int b)
{
    int rem = 0;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

signed main()
{
    int T;
    cin >> T;

    while (T--)
    {

        int l, b;
        cin >> l >> b;
        int g = GCD(l, b);
        int r = l / g;
        int p = b / g;
        int t = r * p;
        cout << t << endl;
    }
}