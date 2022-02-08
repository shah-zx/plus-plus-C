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

        int a, b;
        char c;
        cin >> a >> b;
        cin >> c;
        switch (c)
        {
        case '+':
            int d = a + b;
            cout << d << endl;
            break;
        case '-':
            int e = a - b;
            cout << abs(e);
            break;
        case '*':
            int f = a * b;
            cout << f << endl;
        case '/':
            int g = a / b;
            cout << setprecision(1) <<fixed
            cout << g << endl;
        default:
            break;
        }
    }
}
