#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int FirstOccur(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
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

int FirstOccur(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;
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

int main()
{

    int arr[7] = {1, 2, 4, 3, 5, 6, 3};
    cout << "The first occurrence of the number is at index : " << FirstOccur(arr, 7, 3);
    cout << "The Last occurrence of the number is at index : " << FirstOccur(arr, 7, 3);
    
}