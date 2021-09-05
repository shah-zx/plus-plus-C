
#include <iostream>
using namespace std;
// Here we will learn about defautlt parameteres in the templates //

template <class T1 = int, class T2 = float , class T3 = int>
class shanu
{
public:
    T1 a;
    T2 b;
    T3 c;
    shanu(T1 x, T2 y , T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
    }
};

int main()
{
    shanu<> s1(4,6.3 , 5);
    s1.display();
    return 0;

}