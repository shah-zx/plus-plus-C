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
    int array[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n);
    for (int i = n; i >= 0; i++)
    {
        v.push_back(array[i]);
    }
    for (auto l : v)
    {
        cout << l << " ";
    }
}