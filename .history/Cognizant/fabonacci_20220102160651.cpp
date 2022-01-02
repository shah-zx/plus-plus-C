#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int Fab(int n)
{
    int ans = 0;
    if (n == 0)
    {
        return 0;
    }

    ans += Fab(n - 1) + Fab(n - 2);
    return ans;
}

signed main()
{
    int n;
    cin>> n;
    cout<<Fab(n);
}
