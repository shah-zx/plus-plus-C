#include <iostream>
using namespace std;
int main()
{
    // int n;
    // int m;
    // cout << "Enter the values of m and n";
    // cin >> n >> m;
    int array[3][3] = {{1,2,3} ,{4,5,6} , {7,8,9}};

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> array[i][j];
    //     }
    // }
    // cout << "This is our normal matrix :";
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Loading...";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }

    cout << "This is our matrix after transpose : ";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}