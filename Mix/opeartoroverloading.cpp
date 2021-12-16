// This is the practice of operator overloading //

#include <iostream>
using namespace std;

// Making the class //

class overload
{

    int d;
    int e;
    int f;

public:
    void overloadop(int, int, int); // Defined the functions //
    void dispalyop();
    void operator-(); // Opearator minus (-) //
};

// Declaring the functions //

void overload ::overloadop(int a, int b, int c)
{
    d = a;
    e = b;
    f = c;
}

void overload ::dispalyop()
{
    cout << "d is : " << d <<endl;
    cout << "e is : " << e <<endl;
    cout << "f is : " << f <<endl;
}
// Overloading the unary minus // 
void overload ::operator-()
{
    d = -d;
    e = -e;
    f = -f;
}
int main()
{

    overload s;
    s.overloadop(10, 20, 30);
    s.dispalyop();
    -s;  // Activates the minus operator //
    s.dispalyop();
    return 0;

}
