
// Here we will learn about the classes in C++ //
// Classes are the things which bind the data and the functions together //
// Classes can also be , mentioned as data types defined by user and it also has variables which are known as objects // 
// It is very much helpful in hiding the data in the program through access specifiers namely :-
// public and private //

#include<iostream>
using namespace std;

// Now we will declare a class //

class Employee{

int a,b,c; // Variables declaration as private
public:
int d,e; // Variables declaration as public

 // These are by default private //

void setData(int w , int x , int y); // Here we have just defined the functions not declared them // // Manlo ki prototype hai // // Later on the program we will declare them //
void getData(){        // Here we properly decalred this function // 
    
    cout<<"The value of a is" <<a<<endl;
    cout<<"The value of b is" <<b<<endl;
    cout<<"The value of c is" <<c<<endl;
    cout<<"The value of d is" <<d<<endl;
    cout<<"The value of e is" <<e<<endl;
}   // Here we have defined the member function getData and it will act as inline function. //


};
// End of the class

// Now we will tell  the employee class that we are declaring the setData function here which is present in your functions //

void Employee :: setData(int w , int x , int y){ // :: this is scope resolution operator //
    a = w;
    b = x;
    c= y;
}

 // Now we come to the main function //

int main() 
{
// here we call our function :-
// First we create an object of our class //
Employee shahnawaz;
// Here we can directly access the public variables :- 
shahnawaz.d = 12;
shahnawaz.e = 15; // Here we are accessing our variable through our newly made object //
// But we cannot access the variables :- a,b,c because , they are private.
// These can be accessed as :-

// only through the member functions of the class.
shahnawaz.setData(6,8,9);
shahnawaz.getData();
return 0;
}
