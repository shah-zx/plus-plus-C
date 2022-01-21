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
signed main()
{

    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row_start = 0;
    int col_start = 0;
    int row_end = n - 1;
    int col_end = m - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col];
        }
        row_start++;
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<arr[row][col_end];
        }
        col_end--;
        for (int col = col_end; col >= col_start; col++)
        {
            cout<<arr[row_end][col];
        }
        row_end--;
        for ( int row = row_end; row >= row_start; i--)
        {
            cout<<arr[row][col_start];
        }
        
        
    }
}