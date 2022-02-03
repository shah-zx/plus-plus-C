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

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int s = 0;
        int e = n;
        int mid = (s + e) / 2;
        // int suml = 0;
        int sumr = 0;
        // for (int i = s; i < mid; i++)
        // {
        //     suml += arr[i];
        // }
        // cout << suml << endl;
        for (int j = mid + 1; j < e; j++)
        {
            sumr += arr[j];
        }
        if (suml == sumr)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
