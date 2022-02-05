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

    int a;
    cin >> a;
    int b;
    cin>> b;
    vector<int> v;
    int s = 0;
    for (int i = a; i < = b; i++)
    {
        for (int j = i; j < n; j++)
        {
            s = arr[j] ^ arr[i];
            v.push_back(s);
        }
    }
    int r = *max_element(v.begin(), v.end());
    cout << r << endl;
}
