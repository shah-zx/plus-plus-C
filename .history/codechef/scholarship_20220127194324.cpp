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
    if (T >= 1 && T <= 50)
    {
        cout << "100" << endl;
    }
    else if (T >= 51 && T <= 100)
    {
        cout << "50" << endl;
    } else {
        cout << "0" << endl;
    }
}