// A recursive funciton is that which calls itself repeatedly until the base condition is met //

#include <iostream>
using namespace std;

// Factorial of a number //
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

// What is happening here //
factorial(4) = 4* factorial(3);
factorial(4) = 4* 3* factorial(2);
factorial(4) = 4*3*2*factorial(1);
factorial(4) = 24;
// End of the program //



int main()

{
    int p = 4;
    cout << "The factorial of the number is  :- " << factorial(p);
}
