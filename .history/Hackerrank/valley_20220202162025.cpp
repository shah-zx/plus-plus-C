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

    string s;
    cin >> s;
    int h = s.length();
    int count = 0;
    int rem = -1;
    for (int j = 0; j < h; j++)
    {
        if (s[j] == 'U')
        {
            count++;
        }
        if (s[j] == 'D')
        {
            count--;
        }
        rem++;
    }
    
}