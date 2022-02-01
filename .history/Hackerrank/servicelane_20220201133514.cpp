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
    int arr[n];
    vector<int> v;
    int s, e;
    int y = 0;
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> s >> e;
    }
    for (int i = s; i <= e; i++)
    {
        v.push_back(arr[i]);
    }
    int g = *min_element(v.begin(), v.end());
    cout << g << endl;

    s = y;
    e = h;
}

// 8 5
// 2 3 1 2 3 2 3 3
// 0 3
// 4 6
// 6 7
// 3 5
// 0 7