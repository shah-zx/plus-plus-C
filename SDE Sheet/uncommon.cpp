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
    string d;
    string f;
    cin >> d >> f;
    unordered_map<int, char> fr;
    unordered_map<int, char> sc;
    vector<char> vch;
    for (int i = 0; i < d.size(); i++)
    {
        int k = d[i];
        fr[k]++;
    }
    for (int j = 0; j < f.size(); j++)
    {
        int h = f[j];
        sc[h]++;
    }
    for(auto m : fr){
        if(m.second == 1){
           vch.push_back(m.first);
        }
    }
    for(auto v : sc){
        if(v.second == 1){
            vch.push_back(v.first);
        }
    }
    for ( int o = 0; o < vch.size(); o++ ){
        cout << vch[o];
    }
    return 0;
}