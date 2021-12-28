#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void heapify(vi &arr, int n, int i)
{

    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, arr[largest]);
    }
}

void HeapSort(vi &arr)
{
    int n = arr.size();

    // This part is for last non leaf node in the tree  :

    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // This part is for rest part of the array :

    for (int i = n - 1; i >=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n)
            cin >>
        arr[i];
    HeapSort(arr);
    rep(i, 0, n)
    {
        cout << arr[i] << " ";
    }
}