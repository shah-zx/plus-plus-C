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
    int counto = 0;
    int countt = 0;
    int countth = 0;
    int countf = 0;
    int countfi = 0;
    vector<int> f;
    vector <int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int k = arr[i];
        m[k]++;
    }
    for (auto i : m)
    {
        if (i.first >= 1 && i.first <= 5)
        {
            f.push_back(i.second);    // This is the vector containing the count (first vector)
        }
    }
    int r = *max_element(f.begin(), f.end());
    for(auto x : f){
         q.push_back(x);
    }

}

