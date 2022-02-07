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

int Fib(int n)
{

    if (n == 1 || n == 0)
    {
        return n;
    }
    return Fib(n - 1) + Fib(n - 2);
}

signed main()
{
    int T;
    cin >> T;
    int r = Fib(T);
    cout << r << endl;
}