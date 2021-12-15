#include <iostream>
using namespace std;

class student
{

    public:
    int age;
    int roll;
    string name;
    

    student()
    {
        cout<<"Default constructor";
    }  // Default constructor

    student(string s, int a, int g)  // Parameterized constructor
    {
        cout<<"parameterized constructor";
        name = s;
        age = a;
        roll = g;
    }

    student(student &a) // Copy constructor
    {
       cout<<"copy constructor";
       name = a.name;
       age = a.age;
       roll = a.roll;
    }

    void PrintInfo()
    {
        cout << "Name:" << endl;
        cout << name << endl;
        cout << "Age:" << endl;
        cout << age << endl;
        cout << "Roll:" << endl;
        cout << roll << endl;
    }
    void setName(string s)
    {
        name = s;
    }
};

int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "name: ";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "age:";
    //     cin >> arr[i].age;
    //     cout << "roll:";
    //     cin >> arr[i].roll;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].PrintInfo();
    // }

    student a("shahnawaz",20,11);
    a.PrintInfo();
    student c; // This will call the default constructor
    student d = c;
    
}
