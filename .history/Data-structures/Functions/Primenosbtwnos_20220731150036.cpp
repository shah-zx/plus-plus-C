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
    }
    return true;
}

int main()
{
    int s;
    int f;
    int sum = 0;
    cout << "Enter the two numbers on which you want";
    cin >> s >> f;
    for (int i = s; i <= f; i++)
    {
        if (isPrime(i))
        {
            
        }
    }
}
