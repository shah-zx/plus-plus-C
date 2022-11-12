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
    
        int m, n;
        cin >> m >> n;
        int arr1[m];
        int arr2[n];
        vector<int> l;
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> arr1[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[j];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr1[i] >= arr2[j])
                {
                    count++;
                }
            l.push_back(count);

            }
        }
    for(auto i : l){
        cout << l[i] << " ";
    }
    return 0;
}