#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

signed main()
{
    int element;
    int n;
    cin >> n;
    int arr[n];
    int maxNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    
    map<int, int>::iterator it;
    for(auto it = m.begin(); it != m.end(); it++)
    {
       if(it->first == element)
       {
           cout<<it->second;
       }
    }
}