#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int Max(int arr[], int n)
{
    int ans = 0;
    int s = 0;
    int e = n - 1;
    int mid = s + (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (s - e) / 2;
    }
    return s;
}

int main()
{
    int num;
    cin >> num;
    int arr[num] = {};
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    cout << Max(arr, 8) << endl;
}