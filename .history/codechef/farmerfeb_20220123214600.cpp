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

bool Prime(int n)
{
    bool hai = 1;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            hai = 0;
            return false;
        }
    }
    if (hai == 1)
    {
        return true;
    } else {
        return false;
    }
    
}

signed main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int f, s;
        cin >> f >> s;
        int a = f + s;
    }
}