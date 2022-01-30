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
        int g;
        cin >> g;
        int arr[g];
        for (int i = 0; i < g; i++)
        {
            cin>>arr[i];
        }
        int count = 0;
        for (int i = 0; i < g; i++)
        {
            if(arr[i] != arr[i+1]){
                count++;
            }
        }
        cout << count << endl;
        
        
    }
}