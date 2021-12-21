#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

void ReadMatrix(int m, int n)
{
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int DisplayMatrix(int m, int n , int arr[][])
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row = 5;
    int col = 5;
    int arr[row][col];
    cout << "Input the elements of the matrix";
    ReadMatrix(row, col);
    cout << "Your matrix is:"<<endl;
    cout << DisplayMatrix(row, col , arr);
}