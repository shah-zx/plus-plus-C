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
    for (int i = 0; i < T; i++)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if ((n1 >= 1 && n1 <= 180) && (n2 >= 1 && n2 <= 180) && (n3 >= 1 && n3 <= 180))
        {
            int n4 = n1 + n2 + n3;
            if (n4 == 180)
            {
                cout << "YES";
            }
        } else {
            cout << "NO";
        }
    }
}