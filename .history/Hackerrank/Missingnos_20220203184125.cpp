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
    int T;
    cin >> T;
    while (T--)
    {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m;
        cin>>m;
        int brr[m];
        for (int j = 0; j < m; j++)
        {
            cin >> brr[j];
        }
        sort(arr ,arr + n);
        sort(brr ,brr + m);
        unordered_map<int, int> f;
        unordered_map<int, int> q;

        for (int g = 0; g < n; g++)
        {
            int p = arr[g];
            f[p]++;
        }
        for (int j = 0; j < m; j++)
        {
            int y = brr[j];
            q[y]++;
        }
        vector <int> u;
        for (auto c : f)
        {
            cout << c.first << " " << c.second << endl;
        }
    }
}