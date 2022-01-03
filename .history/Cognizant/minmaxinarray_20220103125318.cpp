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
    int arr1[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int minNo = INT_MAX;
    int maxNo = INT_MIN;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr1[i]);
        maxNo = min(minNo, arr1[i]);
    }
    cout << "Minimum element is : " << minNo << "and "
         << "Maximum element is : " << maxNo << endl;
}