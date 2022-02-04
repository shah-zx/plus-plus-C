#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        a[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (arr[i] < arr[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
        while (i < n1)
        {
            arr[k] = a[i];
            k++;
            i++;
        }

        while (j < n2)
        {
            arr[k] = b[j];
            k++;
            j++;
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
        Merge(arr, l, mid, r);
    }
}

int main()
{

    int array[] = {5, 4, 3, 2, 1};
    Mergesort(array, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
}