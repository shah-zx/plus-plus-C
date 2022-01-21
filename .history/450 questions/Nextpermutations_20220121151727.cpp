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

void Reverse(int arr[], int n)
{
    for (int i = n; i > 0; i--)
    {
        cout << arr[i] << " ";
    }
}

signed main()
{

    int n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int idx1 = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr1[i + 1] < arr1[i])
        {
            idx1 = i;
            break;
        }
    }
    if (idx1 < 0)
    {
        Reverse(arr1, n);
    }
    else
    {
        int idx2 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr1[i] > arr1[idx1])
            {
                idx2 = i;
                break;
            }
        }
        swap(arr1[idx1], arr1[idx2]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[idx1][i] <<" ";
    }
    
}
