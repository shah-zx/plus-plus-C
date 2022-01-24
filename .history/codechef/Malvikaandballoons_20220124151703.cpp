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
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                s[i]  += '1';
                count++;
            }
            else if (s[i] == 'b')
            {
                s[i] -= '1';
                count++;
            }
            cout << count << endl;
            cout << s;
        }
    }

    char c;
    cin>>c;
    char b =  c - '0' + c - '0';
    char a = c - '0' + c - '1';
    cout << b << endl;
    cout << a << endl;
}