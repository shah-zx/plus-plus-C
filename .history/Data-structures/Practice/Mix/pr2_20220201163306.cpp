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

int Odd(int n)
{
    if (n % 2 == 1)
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
    int r;
    cin>> r;
    if (Odd(r))
    {
        while (r % 2 != 0)
        {
            r += 1;
            count++;
        }
    }
}