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

    int max_diff = arr[1] - arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; i++)
        {
            if (arr[j] - arr[i] > max_diff)
            {
                max_diff = arr[j] - arr[i];
            }
        }
    }
    // cout << diff << endl;
    cout<<max_diff << endl;
}
