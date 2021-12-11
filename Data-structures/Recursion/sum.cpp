#include<iostream>
using namespace std;


int Sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    int Prevsum =  Sum(n-1);
    return n + Prevsum;
    
}


int main()
{
   cout <<Sum(5);
}