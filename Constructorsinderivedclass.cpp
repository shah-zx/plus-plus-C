#include <iostream>
using namespace std;

/*
case 1 :- 

class B: public A
{
    first A() then B()   # Order of execution of the constructor  # Base class constructor is executed first #
}
case 2:- 

class A : public B , public C
{
    first B() then C() then A() # 
};

case 3 :- 
class A: public B , virtual public C
{
    first C() then B()  then A()   # Virtual class's of constructor is executed first #
}

*/

class base
{
    int data;

public:
    base(int i)
    {
        data = i;
        cout << "Base class constructor is called "<<endl;
    }
    void printdatabase(void)
    {
        cout << "The value of data is " << data << endl;
    }
};

class base2
{

    int data1;

public:
    base2(int i)
    {
        data1 = i;
        cout << "Base2 class constructor is called "<<endl;
    }
    void printdatabase2(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class derived : public base2, public base
{

    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << " Derived class constructor is called " << endl;
    }
    void printdataderived(void)
    {
        cout << "Derived 1 value :" << derived1 << endl;
        cout << "Derived 2 value :" << derived2 << endl;
    }
};

int main()

{
    derived shanu(1, 2, 3, 4);
    shanu.printdatabase2();
    shanu.printdatabase();
    shanu.printdataderived();
    return 0;
}