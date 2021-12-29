#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;

    int row_start = 0;
    int col_start = 0;
    int row_end = n - 1;
    int col_end = m - 1;

    cout << "Enter the values of m and n :";
    cin >> n >> m;
    int array[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    // Code for spiral movement :
    while (row_start <= row_end && col_start <= col_end)
    {

        for (int col = col_start; col <= col_end; col++)
        {
            cout << array[row_start][col];
        }
        row_start++;  // Will increase the row so that it points to the next row 

        // For top to bottom in last cloumn :

        for (int row = row_start; row <= row_end; row++)
        {
            cout << array[row][col_end];
        }
        col_end--;

        // For right to left in last row :

        for (int col = col_end; col >= col_start; col++)
        {
            cout << array[row_end][col];
        }
        row_end--;

        // For end to start in first row :

        for (int row = row_end; row >= row_start; row--)
        {
            cout << array[row][col_start];
        }
        col_start++;
    }
}