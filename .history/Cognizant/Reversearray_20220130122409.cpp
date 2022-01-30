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



signed main()
{
    int n, y;
    cin >> n >> y;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    Reverse(arr, n, y);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

