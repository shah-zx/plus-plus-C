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
    vector<int> v;
    vector<int> l;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> c[j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int s = a[i] + c[j];
            cout << s << endl;   
        }
    }
}





//     for (auto z : v)
//     {
//         if (z < b)
//         {
//             l.push_back(z);
//         }
//     }
//     int e = *max_element(l.begin(), l.end());
//     if (e < b)
//     {
//         cout << e << endl;
//     }
//     else
//     {
//         cout << "-1" << endl;
//     }
