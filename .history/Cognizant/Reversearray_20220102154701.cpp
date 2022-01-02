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

int Rev(int arr[], int n)
{
    for (int i = n; i >=0; i--)
    {
        return arr[i];
    }
}

signed main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << Rev(arr, 7);
}
