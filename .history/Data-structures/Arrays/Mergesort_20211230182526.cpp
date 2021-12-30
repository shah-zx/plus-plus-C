#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void merge(int arr[], int mid, int l, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)  // This will be loop for first sorted array 
    {
        a[i] = arr[l + i];
    }  

    for (int i = 0; i < n2; i++)  // This will be loop for second sorted array 
    {
        b[i] = arr[mid + 1 + i];
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid - 1);
        mergesort(arr, mid + 1, r);
        merge(arr, mid, l, r);
    }
}

int_fast32_t main()
{
}