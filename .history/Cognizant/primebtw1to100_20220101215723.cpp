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
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
    }
}