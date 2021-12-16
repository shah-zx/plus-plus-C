#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that the non member function is allowed to do anything with my private members //
    friend Complex Sumcomplex(Complex o1, Complex o2); // Declaring teh freind function //
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

Complex Sumcomplex(Complex o1, Complex o2) // This is the function which wants to make Complex its freind for accessing its private data members.
// Defining the freind function //
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    Complex c1, c2, sum;
    c1.setNumber(2, 7);
    c1.printNumber();

    c2.setNumber(10, 30);
    c2.printNumber();

    sum = Sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}

// Properties of freind fuctions :- //
// 1. Not in the scope of the class.
// 2. It is present outside the actual class.
// 3. since it is the scope of the class  , it cannot be called from the object of that class c1.sumcomplex() == Invalid
// 4. Can be invoked without the help of any object
// 5. Usually contains the objects as arguments.
// 6. Can be declared ionside the private or public part of the function.
// 7. It cannot access the members directly by thier named and need object_name.member_name. to access any member.

