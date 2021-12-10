#include<iostream>
using namespace std;


void swap()



int main()
{
    
    
    int a = 8;
    int b = 9;
    int *aptr = &a;
    int *bptr = &b;
    swap(aptr , bptr);
    cout<<a << b << endl;

}