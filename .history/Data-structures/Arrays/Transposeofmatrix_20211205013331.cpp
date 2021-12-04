#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"Enter the values of m and n";
    cin>>n>>m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
            cin >> array[i][j];
        }
    }
    cout << "This is our normal matrix :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
            cout << array[i][j] << " " << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }

    cout << "This is our matrix after transpose : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " " << endl;
        }
    }
}