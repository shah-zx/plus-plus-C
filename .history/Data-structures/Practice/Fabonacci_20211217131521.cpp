#include <iostream>
using namespace std;

int Fib(int n)
{
    
    if (n==1 || n==0)
    {
       return n;
    }
    
    return Fib(n - 1) + Fib(n - 2) ;
    
}

int main()
{
    cout << Fib(13);
}