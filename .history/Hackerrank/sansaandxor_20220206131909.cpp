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

        int n;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                for (int k = i; k <= j; k++)
                {
                    x = x ^ arr[k];
                    v.push_back(x);
                }
            }
        }
        for(auto f : v){
            cout << f << endl;
        }
    }
}