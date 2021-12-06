#include <iostream>
using namespace std;
int main()
{

    cout << "Enter the numbers :";

    int n1, n2, n3;
    cin>>n1>>n2>>n3;
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

    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    // Algo for multiplying the matrix :

    for (int i = 0; i < n1; i++) // The rows of first matrix
    {
        for (int j = 0; j < n3; j++) // The columns of second matrix
        {
            for (int k = 0; i < n2; k++) // These are the rows of both the first and second matrix : n2
            {
                ans[i][j] += m[i][k] * n[k][j];
            }
        }
    }

    // for displaying our multiplied matrix result :

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}