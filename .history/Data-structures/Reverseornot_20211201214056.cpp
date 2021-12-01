#include<iostream>
using namespace std;
int main()
{
    int num;  
    cout<<"Enter the number to be reversed";
    cin>>num;
    int reverse = 0;
    while (num>0)
    {
        int lastdigit;   // This is the variable which will contain our last digit 
        reverse = reverse*10 + lastdigit;
        num = num/10;
    }
            
}