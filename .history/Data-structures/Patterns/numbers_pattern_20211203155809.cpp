#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cout<<"Enter the rows and cols:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout<<count;
            count+=1;
        }
    cout<<endl;        
    }
    
}
