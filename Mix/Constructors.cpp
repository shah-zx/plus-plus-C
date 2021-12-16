
// Here we will be learning about constructors //
// we have always being making functions inside the classes which was a tidious task but constructors give us the power to make those functions at the
// time of class initialization //
// We know that a class is a custom data type , so if we consider a small example :- int sum =2; then here what we are doing :- we are putting the value
// 2 into the variable sum where its type is int //
// same is the thing with the constructors //

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    // Constructor is a special member function  with same name as of the class used to initialize the objects of the class
    // It is automatically invoked.(called) whenever an object is created // Creating //
    // Objects are being constructed by the constructor //
public:
    Complex(void); // Constructor declaration //

     void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

Complex::Complex(void) // Constructor defnition // // This is a default constructor //
{
    a = 10;
    b = 20;
    cout<<"Shahnawaz";
}
int main()

{

Complex d , s , m;
d.printNumber();   // No matter what number of objects are there , the constructor will create everything for each object //
s.printNumber();
m.printNumber();
return 0;

}

// Properties of constructor //
// it should be declared in public section //
// they invoke automatically whenever an object is created //
// They dont have return type //
// It can have default arguments //
// We cant refer to the address //


