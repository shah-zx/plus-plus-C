#include <iostream>
using namespace std;

class student
{
    string name;

public:

    student con(string s , int a , int g)
    {
        name = s;
        age = a;
        roll = g;
    }
    int age;
    int roll;
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
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string s;
        cout << "name: ";
        cin >> s;
        arr[i].setName(s);
        cout << "age:";
        cin >> arr[i].age;
        cout << "roll:";
        cin >> arr[i].roll;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].PrintInfo();
    }


}
