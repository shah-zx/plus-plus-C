#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

void SwapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n) // i+1 is the next element after i
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int brr[] = {1,2,3,4,5}
    SwapAlternate(arr, 6);
    cout << Display(arr, 6);
}