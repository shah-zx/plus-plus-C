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

    vector<int> v();
    v.push_back(100);
    v.push_back(50);
    v.push_back(10);
    v.push_back(5);
    v.push_back(2);
    v.push_back(1);

    sort(v.begin(), v.end(), greater<int>());
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        int d = 0;
        for (auto j : v)
        {
            while (t > 0)
            {
                d += t / v[i];
                t -= t / v[i] * v[i];
            }
        }
        cout << d << endl;
    }
}