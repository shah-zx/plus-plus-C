#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void GetPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (start - end) / 2;
    while (start < end)
    {
        if (arr[mid] >= 0)
        {
            start = mid + 1;
        } else
        {
            end = mid;
        }
        mid = start + (start - end) / 2;
    }
}

int_fast32_t main()
{
}