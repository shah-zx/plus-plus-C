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
#define A &
#define B |
#define C ^

signed main()
{
    int ans = 0;
    char arr[40];
    cin >> arr;
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'A')
        {
            ans += arr[i] A arr[i + 1];
        }
        else if (arr[i] == 'B')
        {
            ans += arr[i] B arr[i + 1];
        }
        else
        {
            ans += arr[i] C arr[i + 1];
        }
    }
}
