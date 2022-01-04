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
signed main()
{

    // if n>m return (n*m)-(n-m)
    // if n<=m return (m%n)-(m+n)

    int n;
    cin >> n;
    int m;
    cin >> m;

    if (n > m)
    {
        cout << (n * m) - (n - m);
    }
    else
    {
        cout << (m % n) - (m + n);
    }
}
