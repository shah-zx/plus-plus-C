#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

void Reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
    }
}

void Display(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {1, 2, 3, 4, 5};

    // Reverse()
}