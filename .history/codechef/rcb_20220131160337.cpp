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
        int p, m;
        cin >> p >> m;
        int count = 0;
        if (p % 2 == 0)
        {
            int y = p / 2;
            count = y;
            cout << count << endl;
        }
        else
        {
            while (p % 2 != 1)
            {
                int ld = p % 2;
                count++;
                cout << count << endl;
            }
        }
    }
}