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

// int getCount(int arr[], int n, int sum)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == sum)
//             {
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
// }

// Approach two

int getCount(int arr[], int n, int sum)
{
    // Using hashing :
    int ans = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int b = sum - arr[i];
        if (m[b])
        {
            ans += m[b];
        }
        else
        {
            m[arr[i]]++;
        }
    }
    cout<< ans;
}

signed main()
{
    // Approach one :
    int sum = 6;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    getCount(arr, n, sum);
}
