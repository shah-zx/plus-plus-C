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

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}
signed main()
{

    int n;
    cin >> n;
    string r[n];
    rep(i, 0, n)
    {
        cin >> r[i];
    }
    sort(r, r + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << r[i] << endl;
    }
    
}
