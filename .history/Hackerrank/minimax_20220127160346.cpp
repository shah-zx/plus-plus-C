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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum = 0;
    int sume = 0;
    for (int i = 1; i < n; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        sume += arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] << " ";
    }
}