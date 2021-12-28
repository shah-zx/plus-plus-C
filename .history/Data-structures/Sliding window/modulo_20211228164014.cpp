#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    if (arr[l] > largest)
    {
        largest = l;
    }
    if (arr[r] > largest)
    {
        largest = r;
    }
    if (i != largest)
    {
        swap(arr[i], largest);
        heapify(arr, n, largest);
    }
}

void BuildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int main()
{
    int n;
    cin>>n
    rep(i,0,n)
    BuildHeap(arr, 6);

}