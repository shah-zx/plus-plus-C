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

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int Max = arr[n - 1];
    int Min = arr[0];
    int res = Max - Min;
    int k;

    cin >> k;
    for (int i = 0; i < n; i++)
    {
        Max = max(arr[i - 1] + k, arr[n - 1] - k);
        Min = min(arr[i] - k, arr[0] + k);
        res = min(res, Max - Min);
    }
    cout << res << endl;
}