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
        if (arr1[i] > INT_MIN)
        {
            cout << arr1[i];
        }
    }
}