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
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    int sc = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum += arr[i][j];
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= 0; j--)
        {
            sc += arr[i][j];
        }
    }
    cout << sc << endl;
}