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

    int n;
    cin >> n;
    while (n--)
    {
        int g;
        cin >> g;
        int count = 0;
        while (g % 10 != 0)
        {
            if (g == 1)
            {
                cout << "-1";
            }
            g *= 2;
            count++;
        }
        cout << count;
    }
}