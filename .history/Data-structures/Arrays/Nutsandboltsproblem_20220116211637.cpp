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

    char arr[6] = {'@', '#', '$', '%', '^', '&'};
    int n;
    char arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (arr2[i] == arr[i])
        {
            cout<<"same";
        }
        
    }
    
}
