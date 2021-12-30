#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int Permutations(int arr[], int pos)
{

    for (int i = pos; i < 3; i++)
    {
        swap(arr[i], pos);
        Permutations(arr, pos + 1);
        swap(arr[i], pos);
    }
}

int_fast32_t main()
{

    int arr[] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << Permutations(arr, 0);
    }
}