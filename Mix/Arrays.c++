// Here we will study about arrays which are the data types which contain the elements of samd  data type //

#include <iostream>
using namespace std;
int main()

{

    // First type of initialization of the array //
    int marks[4] = {45, 56, 78, 89};
    // // Second type of initialization of the array //
    int my_marks[5];

    my_marks[0] = 56;
    my_marks[1] = 86;
    my_marks[2] = 89;
    my_marks[3] = 78;
    my_marks[4] = 74;

    // cout << "These are the my_marks" << endl;

    // cout << my_marks[0] << endl;
    // cout << my_marks[1] << endl;
    // cout << my_marks[2] << endl;
    // cout << my_marks[3] << endl;
    // cout << my_marks[4] << endl;
    // // marks[2] = 34; // By doing this we can change the value of array element //


// Printing the elements of the array using  for loop //
// // Printing the elements using while loop and do while loop //
// for (int i = 0; i < 4; i++)
// {
// cout<<"The value of marks is "<<marks[i]<<endl;
// }

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
// Pointers and arrays :- //

// Pointer arithmetic //
// New address = current address + i * sizeof data type //

int *p = marks;

// cout<<*(p++)<<endl;
// cout<<*(++p)<<endl;  
// cout<<"The value of marks 0 is :- "<<*p<<endl;
// cout<<"The value of marks 1 is :- "<<*p+1<<endl;
// cout<<"The value of marks 2 is :- "<<*p+2<<endl;
// cout<<"The value of marks 3 is :- "<<*p+3<<endl;


}
