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
    for (int j = 0; j < n; j++)
    {
        cin >> oranges[j];
    }
    for (int k = 0; k < m; k++)
    {
        a += apples[k];
    }
    for (int o = 0; o < n; o++)
    {
        b += oranges[o];
    }
    for (int p = 0; p < m; p++)
    {
        cout << apples[p] << " ";
    }
    cout << endl;
    for (int q = 0; q < n; q++)
    {
        cout << oranges[q] << " ";
    }
}

signed main()
{
   CountappOr();
}