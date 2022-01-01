#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void Activities(int start[], int finish[], int n)
{

    int i, j;
    i = 0;
    cout << " " << i;
    for (j = 1; j < n; j++)
    {
        if (start[j] >= finish[i])
        {
            cout << " " << j;
            i = j;
        }
    }
}

int_fast32_t main()
{
    int arr1[] = {1, 3, 0, 5, 8, 5};
    int arr2[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    Activities(arr1, arr2, n);
}