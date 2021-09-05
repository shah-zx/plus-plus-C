
// Here we will be learning about single inheritance //
// Private members are not inherited //
#include <iostream>
using namespace std;

class base
{
    int data1; // Private member :- not inheritable //
public:
    int data2;
    void setdata2(void);
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};

void base::setdata2(void)
{
    cout << "This is setdata2 public member of base class" << endl;
}

void base::setdata(void)
{
    data1 = 10;
    data2 = 20;
};
int base::getdata1(void)
{ // As we are not directly able to use the value of data1 in our derived class because it is a private member of base class
    // therefore we are using a public method of base class only to access the data 1. //
    return data1;
};

int base::getdata2()
{
    return data2;
}

class derived : private base
{
    int data3;

public:
    void process();
    void display();
};

void derived::process() // Public method //
{
    setdata2(); // Now this public member of base class is now private beacause it is derived privately //
    setdata();
    data3 = data2 * getdata1(); // getdata1 = data1 //
}

void derived::display() // Public methods //
{
    cout << "Value of data 1 is :- " << getdata1() << endl; // This will give the value of data 1 //
    cout << "Value of data 2 is :- " << data2 << endl;
    cout << "Value of data 3 is :- " << data3 << endl;
}
int main()

{

    derived der;
    der.process();
    der.display();
}
