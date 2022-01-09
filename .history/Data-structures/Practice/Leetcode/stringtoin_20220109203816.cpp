#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
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

    string s;
    cin>> s;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = s[i] - '0';
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}