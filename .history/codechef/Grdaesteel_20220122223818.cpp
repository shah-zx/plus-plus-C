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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if (n1 > 50 && n2 < 0.7 && n3 > 5600)
        {
            cout << "10" << endl;
        }
        else if (n1 > 50 && n2 < 0.7 && n3 < 5600)
        {
            cout << "9" << endl;
        }
        else if (n1 < 50 && n2 < 0.7 && n3 > 5600)
        {
            cout << "8" << endl;
        }
        else if (n1 > 50 && n2 > 0.7 && n3 > 5600)
        {
            cout << "7" << endl;
        }
        else if (n1 < 50 || n2 > 0.7 || n3)
        {
            cout << "6" << endl;
        }
        else {
            cout << "5";
        }
    }
}