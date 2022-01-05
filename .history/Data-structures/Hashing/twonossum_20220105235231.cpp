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

int sum(vector<int> &v, int n, int target)
{
    vector<int> ans;
    unordered_map<int, int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.find(target - v[i]) != s.end())
        {
            ans.push_back(s[target - v[i]]);
            ans.push_back(i);
            // return ans;
        }
    s[v[i]] = i;

    }
}

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
    }

}