#include <iostream>
using namespace std;

void Merge(int array[], int l, int r, int mid)
{
    int inv = 0;
    int n1 = mid + l - 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = array[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = array[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            array[k] = a[i];
            k++;
            i++;
        }
        if (a[i] == b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
    }
}

void Mergesort(int arr[], int l, int r)
{

    int mid = (l + r) / 2;
    if (l < r)
    {
        inv += Mergesort(arr, l, mid);
        inv += Mergesort(arr, mid + 1, r);
        inv += Merge(arr, l, r, mid);
    }
}

int main()
{
}