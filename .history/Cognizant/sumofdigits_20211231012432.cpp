#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repm(i, a, b) for (int i = a; i >= b; i--)
#define ai int arr[]

int_fast32_t main()
{
    int sum = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n; i >= 0; i--)
    {
        sum += arr[i];
        cout << sum << endl;
    }
}