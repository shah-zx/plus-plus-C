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

int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{

    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int key = b[i];
        if (s.find(key) != s.end())
        {
            count++;
            s.erase(key);
        }
    }
    return count;
}

signed main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    NumberofElementsInIntersection(arr, arr1, n, m);
}