#include <iostream>
using namespace std;

// Here we will see the pointers in cpp //

int main()
{
    // int *ptr, a = 8;  // This is normal pointer example //
    // ptr = &a;
    // cout << ptr << endl;
    // cout << *ptr;

    int *ptr1, **ptr2, b = 3;
    ptr1 = &b;
    ptr2 = &ptr1;
    cout << "The address of b is" << ptr2 << endl;
    cout << "The value of b is :" << *ptr1 << endl;
    cout << "The address of ptr1 is :" << ptr2 << endl;
    cout << "The value in ptr1 is :" << **ptr2 << endl;


    // Manipulation of the poiters //

    cout<<ptr1++<<endl;
    cout<<ptr1++;



     
}
