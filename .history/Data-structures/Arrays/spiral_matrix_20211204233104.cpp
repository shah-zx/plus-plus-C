#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"Enter the values of m and n :";
    cin>>n>>m;
    int array[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>array[i][j];
        }
        
    }
    
}