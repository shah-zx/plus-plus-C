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
    char arr1[n];
    unordered_set<char> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.insert(arr1[i]);
    }
    for (auto i : arr2)
    {
        int k = arr1[i];
        if (k == i)
        {
            cout << i << " ";
        }
    }
}
