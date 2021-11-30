#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of stars you want to print in descending order :";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j<=num; j++)
        {
            if (j < num-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
}
