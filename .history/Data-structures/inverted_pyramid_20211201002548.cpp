#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of stars you want to print in descending order :";
    cin>>num;
    for (int  i = num; i >= 0; i--)
    {
        cout<<"*";
    }
    
}