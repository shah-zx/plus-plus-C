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
        int n1, n3;
        double n2;
        cin >> n1 >> n2 >> n3;
        bool h = false, c = false, tt = false;
        if (n1 > 50)
        {
            h = true;
        }
        if (n2 < 0.7)
        {
            c = true;
        }
        if (n3 > 5600)
        {
            tt = true;
        }
        if (h && c && tt)
        {
            cout << "10" << endl;
        }
        else if (h && c)
        {
            cout << "9" << endl;
        }
        else if (c && tt)
        {
            cout << "8" << endl;
        }
        else if (h && tt)
        {
            cout << "7" << endl;
        }
        else if (h || c || tt)
        {
            cout << "6" << endl;
        }
        else
        {
            cout << "5" << endl;
        }
    }
    return 0;
}

// int n1 , n3;
//         float n2;
//         cin >> n1 >> n2 >> n3;
//         if (n1 >=50 and n2 <=0.7 and n3 >=5600)
//         {
//             cout << "10" << endl;
//         }
//         else if (n1 >=50 and n2 <=0.7 and n3 < 5600)
//         {
//             cout << "9" << endl;
//         }
//         else if (n1 < 50 and n2 <=0.7 and n3 >=5600)
//         {
//             cout << "8" << endl;
//         }
//         else if (n1 >=50 and n2 > 0.7 and n3 >=5600)
//         {
//             cout << "7" << endl;
//         }
//         else if (n1 > 50 or n2 < 0.7 or n3 > 5600)
//         {
//             cout << "6" << endl;
//         }
//         else
//         {
//             cout << "5" << endl;
//         }