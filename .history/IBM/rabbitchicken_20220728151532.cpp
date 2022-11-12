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

    int rhch, rlcl;
    cin >> rhch >> rlcl;

    if (rhch == 0 or rlcl == 0)
    {
        return 0;
    }
    if (rlcl % 2 != 0)
    {
        return 0;
    }
    int rabbits = rlcl - (2 * chickens) / 4;
    int chickens = rhch - rabbits;

}