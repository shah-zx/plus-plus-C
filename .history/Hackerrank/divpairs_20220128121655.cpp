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
    cin>>n;
    int arr[n];
    int k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] < arr[j] && arr[i] + arr[j] == k)
            {
                cout << "[" << arr[i] << "," << arr[j] << "]";
            }
        }
    }
}
