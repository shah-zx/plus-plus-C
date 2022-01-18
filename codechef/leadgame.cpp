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
    int leadp = 0; // Person who is in lead
    int lead = 0;  // How much lead
    int max = 0;   // Max btw  c1 and c2
    int c1 = 0, c2 = 0;
    for (int i = 0; i < T; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        c1 += n1;
        c2 += n2;
        if (c1 > c2)
        {
            lead = c1 - c2;
            if (lead > max)
            {
                max = lead;
                leadp = 1;
            }
        }
        else
        {
            lead = c2 - c1;
            if (lead > max)
            {
                max = lead;
                leadp = 2;
            }
        }
    }
    cout << leadp << " " << max;
}