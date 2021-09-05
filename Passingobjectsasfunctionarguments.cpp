
// Here we will learn about how to use objects as the arguments of functions //

#include <iostream>
using namespace std;

class Complex // Here we defined a class named complex number //
{
    int a;
    int b;

public:
    void setData(int v1, int v2) // Function one //
    {
        a = v1;
        b = v2;
    }
    void setDataSum(Complex o1, Complex o2) // Function two //  // In this function we have made objects as arguments. o1 and o2 are the objects of complex class //
    {
        a = o1.a + o2.a;    // Here we are accessing the variables through object.variable and adding the values of a //
        b = o1.b + o2.b;   // Here we are adding the values of b //
    }
    void printNumber()
    { // Function three
        cout << "Your complex number is" << a << "+" << b << "i" << endl;
    }
};


// Driver program //

int main()
{
    Complex c1, c2, c3;   // Three new objects by the user //
    c1.setData(2, 3);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataSum(c1, c2);
    c3.printNumber();

    return 0;
}