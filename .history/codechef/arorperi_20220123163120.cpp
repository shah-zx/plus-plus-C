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

    int l, b;
    cin >> l >> b;
    int lm = max(l,b);
    int bm = min(l,b);
    int area = lm * bm;
    int peri = lm * (lm + bm);
    if (area > peri)
    {
        cout << "Area" << endl;
        cout << area << endl;
    }
    else if (peri > area)
    {
        cout << "Peri" << endl;
        cout << peri << endl;
    }
    else
    {
        cout << "Eq" << endl;
        cout << area << endl;
    }
}