#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

signed main()
{
    int num;
    cin >> num;
    int sum = 0;
    int arr[num] = {};
    rep(i,0,num)
    {
        cin >> arr[i];
    }
    rep(i,0,num)
    {
        sum += arr[i];
    }
    int avg = sum / num;
}