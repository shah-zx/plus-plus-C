#include <iostream>
using namespace std;

class complex
{

    
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
         a = v1;
         b = v2;
    }

    void setdatabysum(complex o1, complex o2) // Here we are passing the objects of our class into a function //
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "Your complex number is "<<a<< "+i"<< b<<endl;
    }
};

int main()
{
    complex q1 , q2 , q3;
    q1.setdata(1, 2);
    q1.printnumber();

    q2.setdata(3,4);
    q2.printnumber();

    q3.setdatabysum(q1,q2);
    q3.printnumber();
    
}