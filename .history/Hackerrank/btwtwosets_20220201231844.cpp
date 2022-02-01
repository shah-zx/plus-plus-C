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

int LCM(int arr[], int n)
{
    int lcm = arr[0];
    for (int i = 0; i < n; i++)
    {
        lcm = (lcm * arr[i]) / __gcd(lcm, arr[i]);
    }
    return lcm;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 1; j < m; j++)
        {
            __gcd(arr[i], arr[j]);
        }
    }
}