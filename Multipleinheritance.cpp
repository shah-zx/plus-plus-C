
// This is the practice of multiple inheritance //
// Containing more base classes and only one derived class //

#include <iostream>
using namespace std;

class mother
{
public:
    int ears = 2;
    int eyes = 2;
    int nose = 1;
    void apperance_m()
    {
        cout << "Ears are : " << ears << endl
             << "Eyes are :" << eyes << endl
             << "Nose is :" << nose << endl;
    }
};

class father
{
public:
    int ears = 2;
    int eyes = 2;
    int nose = 1;
    void apperance_f()
    {
        cout << "Ears are : " << ears << endl
             << "Eyes are :" << eyes << endl
             << "Nose is :" << nose << endl;
    }
};

class child : public father, mother // This is the multiple inheritance //  // Only one derived class and many base classes //
{
public:
    void display()
    {
        cout << "This is the child class derived from the father and mother class" << endl;
    }
    void mother_traits()
    {
        apperance_m();
    }
    void father_traits()
    {
        apperance_f();
    }
};

int main()

{

    child c1, c2;
    cout << "This is all for child 1 : " << endl;
    c1.display();
    c1.father_traits();
    c1.mother_traits();
    cout << "This is all for child 2 : " << endl;
    c2.display();
    c2.father_traits();
    c2.mother_traits();
    return 0;
}
