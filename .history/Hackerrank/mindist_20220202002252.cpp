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
    int arr[n];
    unordered_map<int, int> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << i << endl;
            }
        }
    }
}

//  for (int i = 0; i < n; i++)
//     {
//         int k = arr[i];
//         m[k]++;
//     }
//     for(auto i : m){
//         if(i.second == 2){
//             v.push_back(i.first);
//         }
//     }

//     for(auto i : v){
//         cout << i << " ";
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for(auto p : v){
//             if(v[p] == arr[i]){
//                 cout << i << " ";
//             }
//         }
//     }