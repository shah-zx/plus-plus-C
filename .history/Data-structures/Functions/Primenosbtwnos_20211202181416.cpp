#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    int s;
    int f;
    cout << "Enter the two numbers on which you want";
    for (int i = s; i < f; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}
