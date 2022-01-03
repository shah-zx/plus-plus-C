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

    int n;
    int arr[] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos;
    cout << "Enter pos ";
    cin >> pos;
    int element;
    cout << "Enter the number ";
    cin >> element;

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}