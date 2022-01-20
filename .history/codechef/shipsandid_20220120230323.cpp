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
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'B' || c == 'b')
        {
            cout << "BattleShip";
        }
        else if (c == 'c' || c == 'C')
        {
            cout << "Cruiser";
        }
        else if (c == 'd' || c == 'D')
        {
            cout << "Destroyer";
        }
        else if (c == 'f' || c == 'F')
        {
            cout << "Frigate";
        }
        else
        {
            cout << "Unknown";
        }
    }
}
