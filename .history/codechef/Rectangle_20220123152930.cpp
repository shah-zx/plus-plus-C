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
    unordered_map<int, int> mp;
    while (T--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 4; i++)
        {
            int k = arr[i];
            mp[k]++;
        }
        for (auto i : mp)
        {
            int ans = 1;
            ans *= i.first;
        }
    }
}
