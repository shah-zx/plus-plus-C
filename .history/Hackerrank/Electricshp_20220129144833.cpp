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
    int b, n, m;
    cin >> b >> n >> m;
    int a[n];
    int c[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> c[j];
    }
    unordered_map<int, int> o;
    unordered_map<int, int> k;
    for(auto i : o){
        for(auto j : k){
            cout << i.first + j.first << " ";
        }
    }
}