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

int Swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Partition(int arr[], int l, int h)
{
    int Pivot = arr[h];
    int i = l - 1;
    int j = l;
    for (int i = j; i < h; i++)
    {
        if (arr[j] < Pivot)
        {
            i++;
            Swap(arr, i, j);
        }
    }
    Swap(arr, i + 1, h);
    return i + 1;
}

void QuickSort(int arr[], int l, int h)
{
    int Pi = Partition(arr, l, h);
    QuickSort(arr, l, Pi - 1);
    QuickSort(arr, Pi + 1, h);
}

signed main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}