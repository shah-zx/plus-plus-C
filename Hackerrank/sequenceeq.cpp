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
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)    // 1 2 3 4 5 - indexes
    {
        for (int j = 1; j <= n; j++)   // Nos array
        {
            if (arr[j] == i)
            {
                v.push_back(j);
            }
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (auto l : v)
        {
            if (arr[k] == l)
            {
                cout << k << " ";
            }
        }
    }
}