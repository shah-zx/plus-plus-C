#include <iostream>
using namespace std;

// Here in the program we can see that the functions defined in class calculator is also shared by other class complex.

// Forward declaration //

class Complex; // We have not declared this function yet so , we have done forward declaration for it. //

// Here we defined calculator class //

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex); // Here we have defined this function and not declared // // And also we cant write arguments for it here because we havent defined the whole function here //
};                                        // Actually this function is containing class as arguments //

class Complex
{
    int a, b;
    // Individually declaring the functions as freinds
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2); // Here we told the compiler that sumRealComplex is the freind of class Calculator and let it access the private data members of that class.
    friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

    // Alter : Declaring the entire calculator class as freind

    // friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that the non member function is allowed to do anything with my private members //

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2) // Here we defined this function //
{
    {
        return (o1.a + o2.a);
    }
}
int Calculator ::sumCompComplex(Complex o1, Complex o2) // Here we defined this function //
{
    {
        return (o1.b + o2.b);
    }
}

int main()
{
    Complex o1, o2;     // Here we made two objects with the name o1 and o2.
    o1.setNumber(1, 4); // object_name.function_name
    o2.setNumber(5, 7);
    Calculator calc;                       // Here we made an object of calculator class //
    int res = calc.sumRealComplex(o1, o2); // Here we made a variable res which will be containing the result of sum of real part of complex numbers. //
    cout << "The sum of real part of o1 and o2 is " << res << endl;
}
