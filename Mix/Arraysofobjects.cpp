
// Here we will study about , how we can make objects as arrays //

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)     // Function one 
    {
        salary = 122;
        cout << ":enter the id of the employee ";
        cin >> id;
    }
    void getId(void)     // Function two
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{

    // This is the traditional method for making objects through a class and accessing the functions.
    // Employee Shahnawaz , adarsh , mohit;
    // Shahnawaz.setId();
    // Shahnawaz.getId();
    // adarsh.setId();
    // adarsh.getId();
    // mohit.setId();
    // mohit.getId();

    // But if we are having more than 1000 or 10000 employees then we cannot apply the above code , instead we can create array of objects //
    // Like :- //

    Employee Fb[5];
    for (int i = 0; i<=5; i++)
    {
        Fb[i].setId();
        Fb[i].getId();
    }

    return 0;
}

