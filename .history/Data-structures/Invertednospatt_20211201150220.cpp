#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the  number";
    cin>>num;

    for (int i =1;i<=num;i++)  // Rows
    {
        for (int j = 1; j <= num+1-i; j++)  // columns
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
