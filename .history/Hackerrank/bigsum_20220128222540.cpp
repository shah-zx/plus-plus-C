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
    long long int n;
    cin >> n;
    long long int array[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    long long int sum = 0;
    for (long long int j = 0; j < n; j++)
    {
        sum += array[j];
    }
    cout << sum << endl;
}

// 5
// 1000000001 1000000002 1000000003 1000000004 1000000005
