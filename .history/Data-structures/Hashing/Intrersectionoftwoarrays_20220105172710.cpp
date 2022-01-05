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

    int n;
    cin >> n;
    int arr[n];
    rep(i, 0, n)
    {
        cin >> arr[i];
    }


    int m;
    cin>> m;
    int arr[m];
    rep(i, 0, m){
       cin>> arr[i];
    }

    unordered_set<int> mp;

    rep(i,0,n){
        mp.insert(arr[i]);
    }


    


}