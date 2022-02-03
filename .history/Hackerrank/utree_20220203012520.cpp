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

bool Odd(int n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int utopianTree(int n)
{
    if (n == 0)
        return 1;

    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            ans += 1;
        else
            ans += ans;
    }
    return ans;
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int n;
        cin >> n;
        utopianTree(n);
        // if (Odd(n))
        // {
        //     int f = n * 2;
        //     cout << f << endl;
        // }
        // else
        // {
        //     int h = (n * 1) + 1;
        //     cout << h << endl;
        // }
    }
}
