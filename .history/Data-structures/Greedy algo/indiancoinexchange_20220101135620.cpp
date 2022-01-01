#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int_fast32_t main()
{
    cout << "Enter the sizr of your array" << endl;
    int n;
    cin >> n;

    vi a(n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;

    // Sorting our vector from increasing order to decreasing order

    sort(a.begin(), a.end(), greater<int>());

    int ans = 0;
    rep(i, 0, n)
    {
        // Dividing the x by maximum number

        ans += x / a[i];

        // Finding the remainder

        x -= x / a[i] * a[i];
    }
    cout << ans << endl;

}