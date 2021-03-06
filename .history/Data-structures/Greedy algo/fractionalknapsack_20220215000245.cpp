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

// This is our suctom comparator 

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    double v1 = (double)p1.first / p1.second;
    double v2 = (double)p2.first / p2.second;

    return v1 > v2;
}

int_fast32_t main()
{

    int n;
    cin >> n;  // Total number of things in the shop
    vii a(n);
    rep(i, 0, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), compare);
    int w;
    cin >> w;   // Weight of the knapsack 
    int ans = 0;  // Total value to be evaluted 
    rep(i, 0, n)
    {
        if (w >= a[i].second)
        {
            ans += a[i].first;
            w -= a[i].second;   // wieght remaining //
            continue;
        }
        double vw = (double) a[i].first / a[i].second;
        ans += vw * w;  // Remaining value added 
        w = 0;
        break;
    }
    cout<<ans<<endl;
}