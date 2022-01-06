#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
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

    unordered_map<string, int> mp;
    int m = INT_MAX;
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        string key = arr[i];
        mp[key]++;
    }

    unordered_map<string, int>::iterator it;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > m)
        {
            cout << it->first;
        }
    }
}