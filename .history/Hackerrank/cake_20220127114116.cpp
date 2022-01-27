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
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int g = arr[n - 1];
    // cout << g << endl;

    for (int i = 0; i < n; i++)
    {
        int k;
        m[k]++;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}