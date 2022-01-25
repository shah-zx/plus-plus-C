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
        int arr1[n];
        // int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        // for (int j = 0; j < n; j++)
        // {
        //     cin >> arr2[j];
        // }
        int sub = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sub = arr1[j] - arr1[i];
            }
            cout << sub << endl;
        }
    }
}
