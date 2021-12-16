
// Here we will study about object oriented programming in c++ //
// First of all classes //
// Classes is having private and the public members //
// Classes = structutres + more //
// We dont use typedef with c++ //
// structures is not having the hiding process //
// Functions cant be put into  the structure //
// For holding data we use structure //

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Classes is basically the extension of the structures //
// Making a class //

// class Employee //class is a user defined data type //
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setData(int a1, int b1, int c1); // Declaration of the function // // An object //
//     void getData()                        // Amother function //
//     {
//         cout << "The value of a is :- " << a << endl;
//         cout << "The value of a is :- " << b << endl;
//         cout << "The value of a is :- " << c << endl;
//         cout << "The value of a is :- " << d << endl;
//         cout << "The value of a is :- " << e << endl;
//     }
// };

// void Employee ::setData(int a1, int b1, int c1) // The definition of the function we made earlier //
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number :- ";
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones(void) // This function is used for finding the ones complement //
{
    chk_bin();   // Here we did the nesting of the function //

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number";
    {
        for (int i = 0; i < s.length(); i++)

            cout << s.at(i);
    }
    cout << endl;
}
int main()

{
    binary b;
    b.read();
    b.display();
    b.ones();
    b.display();

    // Employee shanu;
    // shanu.setData(1, 2, 3);
    // shanu.d = 34; // This variable is public so we are able to access it //
    // shanu.e = 45; // This variable is public so we are able to access it //
    // shanu.getData();
    // return 0;

    // Nesting of member function //
}