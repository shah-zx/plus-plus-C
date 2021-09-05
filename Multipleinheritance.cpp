
// Here we will be learning about mi]ultiple level inheritance //
// Classes are templates for making objects //
#include <iostream>
using namespace std;

// Syntax for mutiple inheritance //

// class derived : visibility - mode base1 , visibility - mode base2
// {
//   class  bidy of class derived //
// };

class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setbase2int(int b)
    {
        base2int = b;
    }
};


class derived : public base1 , public base2  // inplemetation for the multiple inheritance //
{
   public:
   void show(void){
       cout<<"The value of base 1 is "<<base1int<<endl;
       cout<<"The value of base 2 is "<<base2int<<endl;
       cout<<"The sum of both the values is :- "<<base1int + base2int<<endl;

   }
};
// the derived class will look something like this //
// Base1int :- protected //
// Base2int :- protected //
// public derivation (data member functions) : public //
// setbase1int //
// setbase2int //

int main()
{

derived shanu;
shanu.setbase1int(23);
shanu.setbase2int(34);
shanu.show();
return 0;

}