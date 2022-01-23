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
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        if (T % i == 0)
        {
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    int d = *max_element(v.begin(), v.end());
    cout << d << endl;
}
