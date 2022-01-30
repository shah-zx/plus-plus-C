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

void Reverse(int arr[], int n, int y)
{
    int s = 0;
    int e = n - 1;
    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < n; i++)
        {
            while (s <= e)
            {
                swap(arr[s], arr[e]);
                s++;
                e--;
            }
        }
    }
}

void Rev(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

signed main()
{
    int n, y;
    cin >> n >> y;
    int arr[3] = {3, 4, 5};
    Reverse(arr, n, y);
    Rev(arr, 3);
}

