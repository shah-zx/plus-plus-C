#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "Real part is " << real << endl;
        cout << "imaginary part is " << imaginary << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{

Complex c1;
// Complex *ptr = &c1;
Complex *ptr = new Complex;
// (*ptr).setdata(23,45);    is exactly same as 
ptr->setdata(23,45);
// (*ptr).getdata();
ptr->getdata();

// Making array of objects //
Complex *ptr1 = new Complex[4];
ptr1->setdata(1,5);
ptr1->getdata();
return 0;

}
