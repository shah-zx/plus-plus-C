#include <iostream>
using namespace std;

// Here we will study about initialization  lists amd  initialization section //
/*

syntax for initialization list :

constructor(args lists) : initilization section 
{
    assignment + other code;
}
class test
{
    int a;
    int b;
    public:
    test(int i , int j) : a(i) , b(j) { constructor}



};

*/

class test
{
    int a;
    int b;

public:
    test(int i, int j) : a(i), b(i + j)
    // test(int i, int j) : a(i), b(j)
    // test(int i, int j) : a(i), b(2*j)
    // test(int i , int j)  : a(i) , b(a+j)
    //  test (int i , int j) : b(j) , a(i+b)   --> RED flag this will create a problem because a is initialized first //
    {
        cout << "Constructor executed " << endl;
        cout << "Your value of a is " << a << endl;
        cout << "Your value of b is " << b << endl;
    }
};

int main()
{

    test t1(4, 6);

    return 0;
}