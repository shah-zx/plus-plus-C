#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "The given number is not prime";
        }
        else
        {
            cout << "The given number is prime";
        }
    }
}
