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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int num = n;
         if (num <= 33)
        {
            cout << num << endl;
        }
        int count = 0;
        if (n % 5 != 0)
        {
            n += 1;
            count++;
        }
        int y = n - num;
       
        if (y < 3)
        {
            cout << n << endl;
        }
        if (y >= 3)
        {
            cout << num << endl;
        }
    }
}

// 73
// 67
// 38
// 33