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
signed main()
{
    int n1, n2, n3, ja;
    cin >> n1 >> n2 >> n3 >> ja;
    int sumco = 0;
    int sumct = 0;
    int sumcr = 0;

    int one = 10 - n1;
    int two = 10 - n2;
    int three = 10 - n3;

    while (one != 10)
    {
        one++;
        sumco++;
    }
    while (two != 10)
    {
        two++;
        sumct++;
    }
    while (three != 10)
    {
        three++;
        sumcr++;
    }

    int res = sumco + sumct + sumcr;
}