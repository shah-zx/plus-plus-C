#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Please enter the number of rows" << endl;
    cin >> row;
    cout << "Please enter the number of columns" << endl;
    cin >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i ==1 || i == row)
            {
                cout<<"*";
            }
            else if (j == 1 || j == col)
            {
                cout<<"*";
            }
            
        }
        cout << n;
    }
}
