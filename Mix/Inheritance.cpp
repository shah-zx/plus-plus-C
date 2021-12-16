// Notes // :-

// Here we will learn about inheritance //
// Reusability is a very important feature of oops//
// in cpp we can reuse a class and add additional features to it //
// reusing the classes saves the time and money //
// Reusing already tested amd debugged teh class will save a lot of time effort and developing and debugging teh same thing again //
// DRY :- dont repeat yourself //

// What is inheritance in cpp //

// The concept of reusability in cpp is supported using interface //
// We can reuse the properties of an existing class by  inheriting from it //
// The existing class is called the base class //
// The new class which is inherited os called the derived class //
// Reusing the classses saves time and moeny //
// there are duifferent types of inheritannce in cpp. //

// Signle inheritance // :- // one base and a derived class // // Employee and programmer //
// Multiple inheritance // :- //  A derived class and more than one base class //
// Hierarchical inheritance // Several derived classes from single base class //
// Multi level inheritance // Deriving a class from already derived class //
// Hybrid inheritance // Its a combianation of multiple inheritance and multi level inheritance //
// A class derived from two classes as in multiple inheritance //
// However thr parent classes is not a base class //

#include <iostream>
using namespace std;

// Base class //

class Employee
{
    char name;

public:
    float salary;
    int id;

    Employee(int Id)
    {
        id = Id;
        salary = 120.0;
    }
    Employee() {}

    // Derived class syntax //
    // class {{derived-class-name}} : {{visibility-mode}}
    // {{base class name}}  // By default visibility mode is private //
    // Private visibility mode :public member of the base class become private members of the derived class //
    // Public visibility mode :- public members of the base class become public members of the derived class //
    // Creating a derived class programmer with base class //
};

class programmer : public Employee
{

public:
    programmer(int inpid)
    {
        id = inpid;

        int salary;
        char lang;
    }
    int langcode = 9;
    void getdata(void)
    {
        cout<<id;
    }
};

int main()
{
    Employee shanu(2), rohan(3);
    cout << shanu.salary << endl;
    cout << rohan.salary << endl;
    cout << rohan.id << endl;

    programmer hamza(12);
    cout << hamza.langcode<<endl;
    hamza.getdata();
    return 0;
}













