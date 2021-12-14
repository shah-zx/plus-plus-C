#include <iostream>
using namespace std;

void Merge(int arr[], int mid, int l, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i<n1 && j<n2)
    {
        if (arr[i]<arr[j])
        {
            arr[k] = arr1[i];
        }
        else{
            arr[k] = arr2[j];
        }
        
    }
    

}

void Mergesort(int arr[], int l, int r)
{
    while (l < r)
    {
        int mid = l + r / 2;
        Mergesort(arr, l, mid);
        Mergesort(arr, mid + 1, r);
        Merge(arr, mid, l, r);
    }
}

int main()
{
}