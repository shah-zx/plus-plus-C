

// Here we will learn about static member functions //
// The static member function have by default value of 0. //
// If we used int count then it would have required :- int count = 0 and here the value is already 0.
// if we used int count then each object has there own count but here all the objects are sharing the count .
// They are also known as class variables //


#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id :- " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        
        cout <<"The id of this employee is " << id << "and this employee number is "<<count<<endl;

    }
};

int Employee ::count;

int main()

{
    Employee shahnawaz, sumit, adarsh;
    shahnawaz.setData();
    shahnawaz.getData();
    sumit.setData();
    sumit.getData();
    adarsh.setData();
    adarsh.getData();
    return 0;
}