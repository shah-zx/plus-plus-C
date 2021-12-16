// Pointers //
// Pointer is a variable which stores the address of anaother variable //

#include<iostream>
using namespace std;

int main()

{
    int a = 3;
    int *ptr = &a; // This is ptr int type pointer variable which will store the address of  a in it //
    // & says the address and * is the dereferencing operator //
    cout << ptr << endl; // This will give the address of a //
    cout << "The address of a is :- " << &a << endl;
    cout << "The value of address a is :- " << *ptr << endl;
    // pointer to pointer //
    int **c = &ptr;
    cout<<"The value of b is :- "<<&ptr<<endl;
    cout<<"The value of b is :- "<<c<<endl;
    cout<<"The value at c is  :- "<<*c<<endl;
    cout<<"The value of c is :- "<<**c<<endl;

}

