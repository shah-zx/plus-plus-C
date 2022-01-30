#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void Reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}


void Rev(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

signed main()
{
    int arr[3] = {3,4,5};
    Reverse(arr, 3);
    Rev(arr, 3);
}
