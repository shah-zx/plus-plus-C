#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int_fast32_t main()
{

    // This is our given matrix :

    /*  col ⬇
                    
row ->   1  2  3  4 
         5  6  7  8
         9  10  11  12
         13  14  15  16 
         
         */

    int n;
    int m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0;
    int col_start = 0;
    int row_end = n - 1;
    int col_end = m - 1;

    // For first row :
    while (row_start <= row_end && col_start <= col_end)
    {
        for (int col = col_start; col < col_end; col++)
        {
            cout << arr[row_start][col];
        }
        row_start++;

        // for last column :

        for (int row = row_start; row < row_end; row++)
        {

            cout << arr[row][col_end];
        }
        col_end--;

        // for last row :

        for (int col = col_end; col < col_start; col--)
        {
            cout << arr[row_end][col];
        }
        row_end--;

        // for bottom to top :

        for (int row = row_end; row < row_start; row--)
        {
            cout<<arr[row]
        }
        
    }
}