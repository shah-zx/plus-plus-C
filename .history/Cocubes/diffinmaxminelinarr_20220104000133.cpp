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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minNo = min(minNo, arr[i]);
        maxNo = max(maxNo, arr[i]);
    }

    int diff = maxNo - minNo;
}