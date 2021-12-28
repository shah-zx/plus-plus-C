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

void BuildHeap(vi &arr, int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n; i < 0 ; i--)
    {
        swap(arr[0] , a[i]);
        heapify(arr , i , 0);
    }
    
}

int main()
{
    int n;
    cin>>n;
    vi arr(n);
    rep(i,0,n)
    cin>>arr[i];
    BuildHeap(arr, 6);
    rep(i,0,n){
    cout<<arr[i]<<" ";
    }
}