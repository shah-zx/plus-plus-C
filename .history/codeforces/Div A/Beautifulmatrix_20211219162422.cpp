#include <iostream>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;
    int arr[row][col];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Your num is :" << endl;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
            cout << arr[3][3] << " ";
    //     }
    //     cout << endl;
    // }
}
