#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    int **q = &p;  // A pointer pointing to another pointer //

    cout<<**q;

    
}