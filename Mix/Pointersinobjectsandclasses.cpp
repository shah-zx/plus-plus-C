#include <iostream>
using namespace std;

int main()

{
    // Basic example //
    // Pointers is a variab;e used to store the address of another variable //
    int a = 4;
    int *ptr = &a; // & --> ampersand operator //
    cout << "The value of a is :-" << *(ptr) << endl;
    // new operator //

    // int *p = new int(12);
    float *pt = new float(25.6);
    cout << "The value at p is :- " << *(pt) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    // Delete operator //
    delete arr;
    cout << "The value of arr[0] is  " << arr[0] << endl;
    cout << "The value of arr[1] is  " << arr[1] << endl;
    cout << "The value of arr[2] is  " << arr[2] << endl;

    return 0;
}
