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

    int n; // Test cases
    cin >> n;
    while (n--)
    {
        int count = 0;
        int g; // value of x
        cin >> g;
        if (g == 1)
        {
            count = -1;
            cout<<count;
            break;
        }
        while (g % 10 != 0)
        {
            g *= 2;
            count++; // steps
        }
        cout << count;
    }
}