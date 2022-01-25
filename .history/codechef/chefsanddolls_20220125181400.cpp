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

void solve()
{
    unordered_map<int, int> mp;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        mp[k]++;
    }
    for (auto i : mp)
    {
        int key = i.first;
        int value = i.second;
        if (i.second % 2 == 1)
        {
            cout << key << endl;
            return;
        }
    }
}

signed main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
    }
    
}

// Naive approach

//  int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if(arr[i] == 0){
//                 count++;
//             }
//             if(arr[i] != 2 || arr[i] % 2 != 0)
//             {
//                 arr[i] += 1;
//                 count++;
//             }
//         }
//         cout << count << endl;