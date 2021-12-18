#include <iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int col;
    cin>>col;
    int arr[row][col];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"Your array is :"<<endl;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
