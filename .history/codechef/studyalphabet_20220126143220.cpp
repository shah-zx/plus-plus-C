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

void Freq(string s , string e)
{
    int h = s.length();
    int l = e.length();
    vector<char> v;
    for (int i = 0; i < h; i++)
    {
        v.push_back(s[i]);
    }
    for (int i = 0; i < h; i++)
    {
        for (auto j : v)
        {
            if (s[i] == j)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

signed main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string e;
        cin >> e;
        // Freq(s ,e);
    }
}