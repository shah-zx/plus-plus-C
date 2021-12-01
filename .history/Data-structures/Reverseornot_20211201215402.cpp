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
        int lastdigit  = num%10;   // This is the variable which will contain our last digit 
        reverse = reverse*10 + lastdigit;  // This is our formula for checking out the reverse of the number
        num = num/10; // This will take out the number out of the series of numbers 
    }
            
    cout<<reverse<<endl;
}
