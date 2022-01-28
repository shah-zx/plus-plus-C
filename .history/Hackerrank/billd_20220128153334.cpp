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

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b;
    cin >> b;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int y = sum;
    for (int j = 0; j < n; j++)
    {
        if (j == k)
        {
            sum - arr[j];
        }
    }
    cout << sum << endl;
}