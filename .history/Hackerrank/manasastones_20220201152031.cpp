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

        int stones, a, b;
        cin >> stones >> a >> b;
        int sum = 0;
        for (int i = stones - 1; i >= 0; i++)
        {
            for (int j = 0; j < a - 1; j++)
            {
                sum = (i * a) + (j * b);
            }
            cout << sum << endl;
        }
    }
}
