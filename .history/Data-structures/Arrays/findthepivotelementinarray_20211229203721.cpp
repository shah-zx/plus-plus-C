#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int GetPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start) / 2;
    while (start < end)
    {
        if (arr[mid] >= 0)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end-start) / 2;
    }
    return start;
}

int_fast32_t main()
{

    int arr[5] = {8, 10, 17, 1, 3};
    cout << GetPivot(arr, 5);

}