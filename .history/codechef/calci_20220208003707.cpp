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
        if (c == '+')
        {
            cout << a + b << endl;
        }
        else if (c == '-')
        {
            cout << a - b << endl;
        }
        else if (c == '*')
        {
            cout << a * b << endl;
        }
        else if (c == '/')
        {
            cout << setprecision(1) << fixed;
            cout << a / b;
        }
    }
}

// switch (c)
//         {
//         case '+':
//             cout << a + b << endl;
//             break;
//         case '-':
//             cout << abs(a - b);
//             break;
//         case '*':
//             cout << a * b << endl;
//             break;
//         case '/':
//             cout << setprecision(1) << fixed;
//             cout << float(a) / float(b) << endl;
//             break;
//         default:
//             break;
//         }