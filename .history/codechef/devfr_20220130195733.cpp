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
        int g;
        cin >> g;
        unordered_map<int, int> c;
        vector<int> v;
        int arr[g];
        for (int i = 0; i < g; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < g; i++)
        {

            int h = arr[i];
            c[h]++;
        }

        for (auto d : c)
        {
            v.push_back(d.first);
        }
        for (auto l : v)
        {
            cout << l << " ";
        }
    }
}
