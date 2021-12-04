#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the rows";
    cin>> n;
    int m;
    cout<<"Enter the columns";
    cin>> m;

    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            cin>> array[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i];
    }

    
    
}