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

vector<int> SortedM(int n, vector<vector<int>> mat)
{
    vector<int> v;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            v.push_back(mat[i][j]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = v[k++];
        }
    }
}

signed main() {}
