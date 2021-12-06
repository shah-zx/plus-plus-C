#include <iostream>
using namespace std;
int main()
{

    cout << "Enter the number of rows and columns:";
    int n1, n2, n3;
    int m[n1][n2];
    int n[n2][n3];

    // Our first matrix

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m[i][j];
        }
    }
    // Second matrix :
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> n[i][j];
        }
    }

    // Third matrix that is to be resulted out :
    int ans[n1][n3] = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            /* code */
        }
        
    }
    

}