// Here we wil learn about  static members and methods in cpp //
// Static variables are also known as class variables //
// A static variable is shared by all the objects of the class //

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // A static variable //

public:
    void setData(void)
    {
        cout << "Enter the id of the employee  :- ";
        cin >> id;
        count++; // Use of static variable //
    };
    void getData(void)
    {
        cout << "The id of this employee is :-" << id << "and the employee number is :-" << count << endl;
    }
    // Static member functions //
    // Can access all the static members and variables //
    static void getCount(void){
    cout<<"The value of count is :- "<<count<<endl;
}
};

int Employee::count =1000;

int main()

{

    Employee shanu, hamza;
    // Count the static data members //
    shanu.setData();
    shanu.getData();
    Employee ::getCount();  // Accessing the static methods //
    hamza.setData();
    hamza.getData();
    Employee::getCount();
}
