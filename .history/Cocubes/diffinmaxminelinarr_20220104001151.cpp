#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
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

    // Approach one :

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int minNo = INT_MAX;
    // int maxNo = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     minNo = min(minNo, arr[i]);
    //     maxNo = max(maxNo, arr[i]);
    // }

    // int diff = maxNo - minNo;
    // cout << diff << endl;

    int diff = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int i = 1; i < n; i++)
        {
            diff += arr[i + 1] - arr[i];
            int mx = INT_MAX;
            if (diff < mx)
            {
                diff = mx;
            }
        }
    }
    cout << diff << endl;
}
