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
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int k = arr[i];
        m[k]++;
    }
    int sum = 0;
    int sume = 0;
    for (auto i : m)
    {
        if (i.second % 2 == 1)
        {
            sum += (i.second - 1) / 2;
        }
        else
        {
            sume += i.second / 2;
        }
    }
    int rem = sum + sume;
    cout << rem << endl;
}
