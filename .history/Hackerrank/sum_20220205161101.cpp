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

int Sum(int n)
{

    int s = 0;
    while (n != 0)
    {
        int ld = n % 10;
        s += ld;
        n = n / 10;
        if (n <= 0)
        {
            return 1;
        }
        Sum(s);
    }
    return s;
}

signed main()
{
    int n;
    cin >> n;
    cout << Sum(n);
}