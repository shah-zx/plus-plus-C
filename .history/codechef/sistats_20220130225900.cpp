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
        int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            v.push_back(arr[i]);
        }
        int u = *max_element(v.begin(), v.end());
        int r = *min_element(v.begin(), v.end());
        int sum = 0;
        int sume = 0;
        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                sum += arr[i];
            }
            else
            {
                sume += arr[i];
            }
        }
        if (k > 0)
        {
            int ro = u + r;
            int rem = sum - ro;
            int j = n - 2;
            float f = rem / j;
            cout << setprecision(6) << fixed;
            cout << f << endl;
        }
        else
        {
            int a = n;
            float remain = sume / a;
            cout << remain << endl;
        }
    }
}