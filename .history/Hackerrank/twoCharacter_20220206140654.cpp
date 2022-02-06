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
        int y = s.length();
        unordered_map<char, int> m;
        vector<int> v;
        vector<char> x;
        for (int i = 0; i < y; i++)
        {
            char c = s[i];
            m[c]++;
        }
        for (auto j : m)
        {
            v.push_back(j.second);
        }
        int g = *max_element(v.begin(), v.end());
        int h = *min_element(v.begin(), v.end());
        for (auto z : m)
        {
            if (z.second != g && z.second != h)
            {
                x.push_back(z.first);
            }
        }
        int count  = 0;
        for (int i = 0; i < y; i++)
        {
            for(auto a : x){
                if(a == s[i]){
                    count++;
                }
            }
        }
        
    }
}