#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int fact(int n)
{
    int res = 0;
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 1;
    }
    res = n * fact(n - 1);
    return res;
}

int main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        cout << fact(n);
    }
}