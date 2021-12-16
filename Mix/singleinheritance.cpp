
// This is the practice of single inheritance in classes //
// In public mode //

#include <iostream>
using namespace std;

class  A
{
    int a;

public:
    int mul(int p, int r)
    {
        a = p * r;
        cout << a << endl;
    }
    int add(int k, int j)
    {
        a = k + j;
        cout << a << endl;
    }
};

// Inheriting the class A from B in public mode //

// class B : public A
// {
//     int d, e;

// public:
//     int getdata()
//     {
//         return d;
//         return e;
//     }
// };

// Inheriting the class B privately , in which the public members of the class B will be now private of class A //

// class B : private A
// {
//     int d, e;

// public:
//     int getdata(int d, int e)
//     {
//         return d;
//         return e;
//     }

//     void Amul()
//     {
//         mul(d, e); // This was a public member of class B , but it can accessed like this inside the member function //
//     }
//     int Aadd()
//     {
//         add(d, e);
//     }
// };

// Now we will be inherting the class B by A in protected mode // 

class B : protected A   // Derived class is B //   // Base class is A //
{
    int d, e;

public:
    int getdata(int d, int e)
    {
        return d;
        return e;
    }

    void Amul()
    {
        mul(d, e); // This was a public member of class B , but it can accessed like this inside the member function //
    }
    int Aadd()
    {
        add(d, e);
    }
};

int main()
{

    A elm1;
    // elm1.add(4, 5); // This is possible because the class A is having access to the public members of class B
    // elm1.mul(8, 7);
    // Now we will see what hapepns when we do the private inheritance of class B by class A //
    // These are the public members of the class A , which are now the private members of the class A //
    elm1.add(2, 3);
    elm1.mul(3, 4);
    return 0;
}