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

    unordered_set<int> mp;
    int prefSum = 0;

    for (int i = 0; i < n; i++)
    {
        prefSum += arr[i];
        if (prefSum == 0)
        {
            cout << "Found";
        }
        if (mp.find(prefSum) != mp.end())
        {
            /* code */
        }
        
    }
}