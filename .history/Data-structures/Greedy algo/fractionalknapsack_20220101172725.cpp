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

bool compare(pair<int, int> p1, pair<int, int> p2)
{
  double v1 = p1.first/p1.second;
  double v2 = p2.first/p2.second;
  

}

int_fast32_t main()
{

    int n;
    cin >> n;
    vii a(n);
    rep(i, 0, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end() , compare);
}