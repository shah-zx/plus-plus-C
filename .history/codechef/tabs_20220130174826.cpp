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

        int n, b; // n =  no. of tabs  , b = budget
        cin >> n;
        vector<int> v;
        int f;
        int w , h , p;
        for (int i = 0; i < n; i++)
        {
            cin >> w >> h >> p;
        }
        for (int i = 0; i < 3; i++)
        {
            int f = w * h;
            if(p < b){
                v.push_back(f);
            }
        }
        

    }
}
