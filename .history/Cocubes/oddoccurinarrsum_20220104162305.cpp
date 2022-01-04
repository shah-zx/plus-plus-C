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
    vi a(n);

    rep(i, 0, n)
    {
        cin >> a[i];
    }

    map<int, int> p;
    for (int i = 0; i < n; i++)
    {
        p[a[i]]++;
    }
    int sum = 0;
    map<int, int>::iterator it;
    for (it = p.begin(); it != p.end(); it++)
    {
        if (it->second % 2 != 0)
        {
            sum += it->first;
        }
    }
    cout<<"sum";
}