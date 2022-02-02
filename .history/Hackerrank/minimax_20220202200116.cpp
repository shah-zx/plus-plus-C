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


    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    int sum = 0;
    int sume = 0;
    for (int i = 1; i < 5; i++)
    {
        sum += arr[i];
    }
    for (int i = 0; i < 5 - 1; i++)
    {
        sume += arr[i];
    }

    cout << sume << " " << sum << endl;
}
