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
        int m, x, y;
        int cops[101]{0};
        for (int i = 0; i < m; i++)
        {
            cin >> cops[i];
        }

        for (int h = 1; h <= 100; h++)
        {
            int d = x*y;
            for (int i = 0; i < m; i++)
            {
                if(m > (m - d) && m < (m + d)){

                }
            }
        }
    }
}

// int d = x * y; // Distance of cops
//                 int mi = (m - d);
//                 int ma = min(m + d , 100);
//                 if(mi == 0){
//                     mi = 1;
//                 }