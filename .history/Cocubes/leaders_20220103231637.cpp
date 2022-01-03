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
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] - '0' <  s[i + 1] - '0')
        {
            swap(s[i],s[i + 1]);
        }
        cout << s;
    }
}