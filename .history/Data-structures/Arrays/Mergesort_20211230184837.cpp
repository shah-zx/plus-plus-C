#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void merge(int arr[], int mid, int l, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++) // This will be loop for first sorted array
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++) // This will be loop for second sorted array
    {
        b[i] = arr[mid + 1 + i];
    }

    // Here we are checking the conditions for smaller and larger element and putting them into the array //

    int k = l;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (arr[i] < arr[j])
        {
            arr[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr[j];
            j++;
            k++;
        }
    }

    // Checking wether the pointer i has reached to the size // 

    while (i < n1)
    {
        arr[k] = arr[i];
        k++;
        i++;
    }
    
    // Checking wether the pointer  j has reached to the size // 

    while (j < n2)
    {
        arr[k] = arr[j];
        k++;
        j++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid - 1);
        mergesort(arr, mid + 1, r);
        merge(arr, mid, l, r);
    }
}

int_fast32_t main()
{
}

// I can code whole the long and my passion is to code all the day
// Last but not the least , i want a big company and a seven figures salry //