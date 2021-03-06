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

void Swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Partition(int array[], int l, int h)
{

    int pivot = array[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            Swap(array, i, j);
        }
    }
    Swap(array, i + 1, h);
    return i + 1;
}

void QuickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = Partition(arr, l, h);
        QuickSort(arr, l, pi - 1);
        QuickSort(arr, pi + 1, h);
    }
}

signed main()
{

    // int arr[7] = {6,3,5,2,9,8,7};
    // QuickSort(arr, 0, 6);
    // cout << "The sorted array is : " << endl;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    QuickSort(arr, 0, n - 1);
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}
