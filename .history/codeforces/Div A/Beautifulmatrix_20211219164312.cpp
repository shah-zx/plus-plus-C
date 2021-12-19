#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;
    int arr[row][col];
    int count = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        cout << endl;
    }
    cout<< count;
}

// 1 1 1 1 1
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// 0 1 0 0 1