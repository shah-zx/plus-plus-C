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
    int n, k, q;
    cin >> n >> k >> q;
    int arr[n];
    int in[q];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> in[i];
    }
    vector <int>l;
    for (int i = 0; i < q; i++)
    {
        l.push_back(in[i]);
    }
    
    int rem = k * 2;
    while (rem > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
        }
        rem--;
    }
    for (int i = 0; i < n; i++)
    {
        for(auto j : l){
            if(j == i){
                cout << arr[i] << " ";
            }
        }
    }
}
