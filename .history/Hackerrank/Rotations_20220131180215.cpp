#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int Rev(int s, int e, int arr[])
{
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int Rotate(int arr[], int n, int k)
{
    k = k % n;
    Rev(0, n - k - 1, arr);
    Rev(n - k, n - 1, arr);
    Rev(0, n - 1, arr);
}

signed main()
{
    int n, k , q;
    cin >> n >> k >> q;
    int arr[n];
    int in[q];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++)
    {
        
    }
    
    Rotate(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Brute force approach :

//  int n, k, q;
//     cin >> n >> k >> q;
//     int arr[n];
//     int in[q];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < q; i++)
//     {
//         cin >> in[i];
//     }
//     vector<int> l;
//     for (int i = 0; i < q; i++)
//     {
//         l.push_back(in[i]);
//     }

//     // int rem = k * 2;
//     while (k > 0)
//     {
//         int lastd = arr[n - 1];
//         for (int i = n - 1; i > 0; i--)
//         {
//             arr[i] = arr[i - 1];
//         }
//         arr[0] = lastd;
//         k--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (auto j : l)
//         {
//             if (j == i)
//             {
//                 cout << arr[i] << endl;
//             }
//         }