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

int CountappOr(){
 int s, t, a, b; // a = location of apple tree // b id location of orange tree
    int m, n;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int apples[m];
    int oranges[n];
    for (int i = 0; i < m; i++)
    {
        cin >> apples[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> oranges[i];
    }
    for (int i = 0; i < m; i++)
    {
        a += apples[i];
    }
    for (int j = 0; j < n; j++)
    {
        b += oranges[j];
    }
    for (int i = 0; i < m; i++)
    {
        cout << apples[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << oranges[i] << " ";
    }
}

signed main()
{
   CountappOr()
}