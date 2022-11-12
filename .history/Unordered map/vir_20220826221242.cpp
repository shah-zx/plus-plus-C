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
    unordered_map<char, int> mp;
    vector<int> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int y = s[i];
        mp[y]++;
    }
    for (auto p : mp)
    {
        if (p.second > 1)
        {
            v.push_back(p.second);
        }
    }
    int h = v.size();
    if (h > 1)
    {
        cout << "0";
    }
    else
    {
        for (int i = 0; i<v.size(); i++)
        {
            cout << v[i];
        }
    }
}