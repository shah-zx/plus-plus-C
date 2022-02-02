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

bool Persq(int n)
{
    int d = sqrt(n);
    int r = n / sqrt(n);
    if (r == sqrt(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int n1;
        int n2;
        cin >> n1 >> n2;
        int g = floor(sqrt(n2));
        int k = ceil(sqrt(n1));
        int r = g - k + 1;
        cout << r << endl;
    }
}
