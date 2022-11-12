#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void Reverse(int arr[], int low, int high)
{
    while (low <= high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void Rotate(int arr[], int n, int k)
{
    k = k % n; // For no repititions
    Reverse(arr, 0, n - k - 1);
    Reverse(arr, n - k, n - 1);
    Reverse(arr, 0, n - 1);
}

signed main()
{

    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    
    Rotate(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}