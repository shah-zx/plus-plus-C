
// Here we will be making a progra which will take objects of two classes and will add them //

#include <iostream>
using namespace std;

// Class 1 :-

class y;  // Forward declaration //

class x
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend int add(x,y); // Declaraion that the function add is freind of this x class //
};

class y
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend int add(x,y);  // Declaraion that the function add is freind of this x class //
};


// Freind function declaration :-

 int add(x o1 , y o2){
     return(o1.num + o2.data);
 }

int main()
{
    x a;
    y b;
    a.setValue(23);
    b.setValue(45);
    cout<<"The addition of the two objects is:- "<<add(a,b);
    


}