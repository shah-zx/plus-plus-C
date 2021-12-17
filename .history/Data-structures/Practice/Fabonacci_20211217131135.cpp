#include<iostream>
using namespace std;

int Fib(int n)
{
    int ret = 0;
    for (int i = 0; i < n; i++)
    {
        ret += Fib(n-2) + Fib(n-1);
    }
    return ret;
    
}


int main(){
    cout<<Fib(5);
}