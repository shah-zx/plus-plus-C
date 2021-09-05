// Here we will learn about array of objects in whhich if we want more than 10 or 20 obkects of a class then we can use it //

// The second part of this lesson is in Aofoapo.cpp //

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        cout << "Enter the id of the employee ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of the employee is  " << id << endl;
    }
};

int main()

{

    Employee hamza, shanu, rohan;
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {

        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}