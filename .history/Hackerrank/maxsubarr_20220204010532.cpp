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

    int n, k;
    cin >> n >> k;
    int array[n];
    vector<int> v;
    vector<int> o;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    int sume = 0;
    int s = 0;
    int e = n;
    int mid = (s + e) / 2;
    for (int i = s; i < mid; i++)
    {
        sum += array[i];
    }
    for (int i = mid + 1; i < e ; i++)
    {
        sume += array[i];
    }
    
    
}
