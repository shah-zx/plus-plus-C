
// Here we will study about the copy constructor //
// Copy constructor as those constructors which copy the value of an object into another one //
// But the fact is that , whenever we are making an object , at that time only the copy cinstructor is initialized //

#include <iostream>
using namespace std;

class number
{

    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }

    // This is the copy constructor : //

    number(number &obj)
    {
        a = obj.a;
        cout << "Copy constructor is invoked " << endl;

    }

    void display()
    {
        cout << "The number for this object is :- " << a << endl;
    }
};

int main()

{

    number s(10), n, h , p;
    s.display();
    n.display();
    h.display();
    number h1(n); // copy constructor invoked //
    cout << "Copy constructor is called :- " << endl;
    h1.display();
    p = n;
    number r = p;
    r.display();
    
}
