#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main()
{

    string s;
    cin >> s;
    int st = 0;
    int e = s.length();
    for (int i = 0; i < s.length(); i++)
    {

        while (s[i] != '\0')
        {
            while (st <= e)
            {
                swap(st, e);
                st++;
                e--;
            }
        }
    }

    cout << s;
}