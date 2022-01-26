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

bool Even(int n)
{
    if (n % 2 == 0)
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

        int a, b, t;
        cin >> a >> b >> t;
        int counta = 0;
        int countb = 0;
        for (int i = t; i > 0; i--)
        {
            if (!Even(i))
            {
                counta = a *= 2;
            }
            else
            {
                countb = b *= 2;
            }
        }
        int y = max(counta, countb);
        int z = min(counta, countb);
        int x = y / z;
        cout << z << endl;
    }
}