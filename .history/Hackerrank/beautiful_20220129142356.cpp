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

int Rev(int n)
{
    int ld = 0;
    while (n != 0)
    {
        int ld = n % 10;
        n /= 10;
        return ld;
    }
}

signed main()
{

    // int i, j, k;
    // cin >> i >> j >> k;
    // vector<int> n;
    // for (int s = i; s <= j; s++)
    // {
    //     n.push_back(s);
    // }
    // for (auto i : n)
    // {
    //     cout << i << " ";
    // }

    int n, u;
    cin >> n >> u;
    int y = Rev(n);
    int h = u - y;
    cout << h;
}
