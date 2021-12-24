#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int FirstOccur(int arr[], int n, int k)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int LastOccur(int arr[], int n, int k)
{
    int ans = -1;
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int Totaloccur(int arr[], int n, int k)
{
    cout << LastOccur(arr, n, k) - FirstOccur(arr, n, k) + 1;
}

int main()
{

int arr[] = {1,2,3,3,3,3,4,5}


}