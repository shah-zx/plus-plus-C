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
    if (n == 1)
    {
        return 1;
    }
    s = n + Sum(n - 1);
    return s;
}

signed main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n1, n2;
        cin >> n1 >> n2;
        int count = 0;
        for (int i = 0; i < n1; i++)
        {
           count += Sum(n1);
        }
        
    }
}
