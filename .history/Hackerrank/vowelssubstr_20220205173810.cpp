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

    string s;
    int k;
    cin >> s;
    cin >> k;
    int h = s.length();
    for (int i = 0; i < h; i++)
    {
        for (int j = i; j < k; j++)
        {
            cout << s[j] << " ";
        }
    }
}