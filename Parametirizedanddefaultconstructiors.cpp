
// Here we will be learning about constructors //
// We wiil learn about default and parameterized constructors //
#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
    int a, b;

    // Constructor is a special member function  with same name as of the class used to initialize the objects of the class
    // It is automatically invoked.(called) whenever an object is created // Creating //
    // Objects are being constructed by the constructor //
public:
    Complex(int, int); // Constructor declaration //

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

class point
{
    int x, y;

public:
    point(int v, int w)
    {
        x = v;
        y = w;
    }

    void displaypoint()
    {
        cout << "The point is :- " << x << "," << y << endl;
    }

    float distance(float r, float s, float t, float u)
    {
        float m, n, g;
        m = pow(s - r, 2);
        n = pow(u - t, 2);
        g = sqrt(m + n);
        cout << "The distance between the two points is :- " << g << endl;
    }
};

Complex::Complex(int x, int y) // Constructor defnition // // This is a default constructor // // It is having two parameteres //
{
    a = x;
    b = y;
}
int main()

{
    // Implicit call //

    // Complex d(2,3); // Parameterized constructor //
    // d.printNumber();   // No matter what number of objects are there , the constructor will create everything for each object //

    // // Explicit call //
    // Complex a = Complex(5,7);
    // a.printNumber();
    point p(1, 3);
    p.displaypoint();
    point q(4, 6);
    q.displaypoint();
    p.distance(1,0,70,0);

    return 0;
}

// Default constructor :- //
// As soon as we made an object the constructor initialized //
// Runs behind the scene //

// Parmetized constuctors //
// Takes parameteres for opearting upon //
