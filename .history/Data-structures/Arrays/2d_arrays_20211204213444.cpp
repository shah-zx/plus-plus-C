#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the rows";
    cin>>n;
    int m;
    cout<<"Enter the cols";
    cin>>m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>array[i][j];
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    

}