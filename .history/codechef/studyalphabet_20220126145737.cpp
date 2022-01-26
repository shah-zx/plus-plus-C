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
    string w;
    cin >> w;

    vector<char> isKnown(26, false);
    for (char c : w)
    {
        isKnown[c - 'a'] = true;
    }
    int n;
    cin >> n;
    while (n--)
    {

        string s;
        cin >> s;
        bool ans = 1;
        for (char c : s)
        {
            if (!isKnown[c - 'a'])
            {
                ans = false;
            }
        }
        if(ans){
            cout << "Yes" << endl;
        } else { cout << "No" << endl; }
    }
}