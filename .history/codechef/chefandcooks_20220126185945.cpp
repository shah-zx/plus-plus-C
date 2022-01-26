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

        int n1, n2, n3, n4, n5;
        int rem = n1 + n2 + n3 + n4 + n5;
        switch (rem)
        {
        case 0:
            cout << "Beginner" << endl;
            break;
        case 1:
            cout << "Junior Developer" << endl;
            break;
        case 2:
            cout << "Middle Developer" << endl;
            break;
        case 3:
            cout << "Senior Developer" << endl;
            break;
        case 4:
            cout << "Hacker" << endl;
            break;
        case 5:
            cout << "Jeff Dean" << endl;
            break;

        default:
            break;
        }
    }
}