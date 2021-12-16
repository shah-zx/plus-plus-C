#include<iostream>
using namespace std;

class A{
int a;
public:
A& setdata(int a)
{
this->a = a;   // If we do this  , it will give us a garbage value //
// For solving this issue we can do : //
return *this;
}
void getdata()
{
    cout<<"The value of a is"<<a;
}
};




int main()
{

    // This : - it  is a keyword which is a pointer which points to the object which is being created //
A o;
o.setdata(3);
o.getdata();
return 0;

}