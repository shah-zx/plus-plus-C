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
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int count = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (k >= arr[i])
            {
                k -= arr[i];
                count++;
            }
        }
        cout << count << endl;

        // for (auto i : v)
        // {
        //     cout << v[i];
        // }
    }
}