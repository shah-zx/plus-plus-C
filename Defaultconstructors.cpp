#include<iostream>
using namespace std;

// Here we will learn about the default arguments passed to the constructors //


class simple{

    int data1;
    int data2;

    public:
    simple(int a , int b = 3){  // Default value of b is 3 , in case we have no value given for b then b will be 3 //
        data1 = a;
        data2 = b;
    }
void printdata()
{
    cout<<"This is your data 1 and data 2 :-"<<data1<<"and"<<data2;
}
};



int main()
{

simple s(1);
s.printdata();
return 0;
}