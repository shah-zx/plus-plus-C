#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

void ReadMatrix(int m, int n)
{
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int DisplayMatrix(int m , int n){
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; i < n; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    

}



int main()
{
    int row = 5;
    int col = 5;
    cout << "Input the elements of the matrix";
    ReadMatrix(row, col);
}