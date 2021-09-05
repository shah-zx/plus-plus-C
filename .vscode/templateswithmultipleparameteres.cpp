#include<iostream>
using namespace std;

// Class templates with multiple parameteres //
// one , two or more than two //

template <class T1 , class T2>   // T1  and T2 are custom built data type //
class myclass
{
public:
 T1 data1;
 T2 data2;
 myclass(T1 a , T2 b)
 {
     data1 = 2;
     data2 = '7';
 }
 void display()
 {
     cout<<this->data1<<this->data2;
 }

};

int main()
{
myclass <int , char> obj(1,'c');
obj.display();
return 0;

}