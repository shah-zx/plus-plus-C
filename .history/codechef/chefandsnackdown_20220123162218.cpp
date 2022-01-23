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
        int T;
        cin >> T;
        if (T == 2010 || T == 2015 || T == 2016 || T == 2017 || T == 2019)
        {
            cout << "HOSTED" << endl;
        }
        else
        {
            cout << "NOT HOSTED" << endl;
        }
    }
}