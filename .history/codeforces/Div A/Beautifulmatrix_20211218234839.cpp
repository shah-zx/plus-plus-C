#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; i++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; i < 5; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}