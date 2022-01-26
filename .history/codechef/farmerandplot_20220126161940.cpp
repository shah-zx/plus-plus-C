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

int Sum(int n)
{
    int ans = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (n % i == 0)
        {
            ans += i;
        }
    }
    cout << max(ans, 0) << endl;
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int l, b;
        cin >> l >> b;
    }
}