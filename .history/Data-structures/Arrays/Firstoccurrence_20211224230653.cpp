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

int LastOccur(int arr[], int n, int k)
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

    int arr[6] = {1,2,4,5,6,4};
    cout << "The first occurrence of the number is at index : " << FirstOccur(arr, 6, 4) << endl;
    cout << "The Last occurrence of the number is at index : " << LastOccur(arr, 6, 4) << endl;
}
