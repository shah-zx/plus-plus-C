#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int Activities(int start[], int finish[], int n)
{

    int i, j;
    int i = 0;
    cout << " " << i;
    for (int j = 0; j < n; j++)
    {
        if (start[j] >= finish[j])
        {
            cout << " " << j;
            i = j;
        }
    }
}

int_fast32_t main()
{
    int arr1[] = {12, 10, 20};
    int arr2[] = {25, 20, 30};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << Activities(arr1, arr2, n);
}