
// Here we will study about object oriented programming in c++ //
// First of all classes //
// We dont use typedef with c++ //
// structures is not having the hiding process //
// Functions cant be put into  the structure //
// For holding data we use structure //

#include <iostream>
using namespace std;

// Making a class //

class Employee //class is a user defined data type //
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration of the function // // An object //
    void getData()                        // Amother function //
    {
        cout << "The value of a is :- " << a << endl;
        cout << "The value of a is :- " << b << endl;
        cout << "The value of a is :- " << c << endl;
        cout << "The value of a is :- " << d << endl;
        cout << "The value of a is :- " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1) // The definition of the function we made earlier //
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    Employee shanu;
    shanu.setData(1, 2, 3);
    shanu.d = 34; // This variable is public so we are able to access it //
    shanu.e = 45; // This variable is public so we are able to access it //
    shanu.getData();
    return 0;
}