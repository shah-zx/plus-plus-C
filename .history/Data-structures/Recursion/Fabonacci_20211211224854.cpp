#include<iostream>
using namespace std;

int Fab(int n)
{
    if (n==1)
    {
        return 1;
    }
    else return 0;

    int prevFab = Fab(n-1) + Fab(n-2);
    return n + prevFab;
    
}


int main()
{

}