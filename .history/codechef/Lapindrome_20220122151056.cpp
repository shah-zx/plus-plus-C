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

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        vector<char> v;
        int mid = s.size() / 2;
        for (int i = 0; i < s.size(); i++)
        {
            if (s.size() % 2 != 0)
            {
                for (int i = 0; i < mid; i++)
                {
                    v.push_back(s[i]);
                }
                for (auto i = i.begin(); i != i.end(); i++)
                {
                    cout << ;
                }
            }
        }
    }
}