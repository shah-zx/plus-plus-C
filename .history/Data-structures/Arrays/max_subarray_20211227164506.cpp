#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int SubArray(int arr[], int n, int k, int x)
{
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if (sum < x)
    {
        ans = sum;
    }
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k];
        sum + arr[i];
        if (sum < x)
        {
            ans = max(ans, sum);
        }
    }
    cout << ans << "is the maiximum subarray sum < x ";
}

int main()
{

    int arr[] = {7, 5, 4, 6, 8, 9};
    int k = 3;
    int x = 20;
    SubArray(arr, 6, k, x);
    return 0;
}