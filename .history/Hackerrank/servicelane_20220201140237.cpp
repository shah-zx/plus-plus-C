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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int s, e;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> s >> e;
        int g = *min_element(v.begin() + s, v.end() + e + 1);
        cout << g << endl;
    }


    // s = y;
    // e = h;
}
