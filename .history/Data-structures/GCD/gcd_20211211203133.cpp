#include<iostream>
using namespace std;

int GCD(int a , int b)
{
    while (b!=0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}


int main()
{
    int numone , numtwo;
    cin>>numone>>numtwo;
    cout<<GCD(numone,numtwo)   ;
}