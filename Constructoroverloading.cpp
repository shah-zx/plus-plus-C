#include <iostream>
using namespace std;

// Here we will learn about constructors overloading //

class Complex
{
    int a, b;

public:

    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is :- " << a << "," << b << endl;
    }
};

int main()
{

    Complex c1(4, 6);
    c1.printNumber();
    Complex c2(4);
    c2.printNumber();
    Complex c(0,0);
    c.printNumber();

    
    

}