
// Here we will see the pointers to derived classes //

#include <iostream>
using namespace std;

class baseclass
{
public:
    int var1;
    void display()
    {
        cout << "Displaying the base class variable var_base" << var1 << endl;
    }
};
class derivedclass : public baseclass
{

public:
    int var2;
    void display()
    {
        cout << "Displaying the base class variable var_base" << var1 << endl;
        cout << "Displaying the base class variable var_derived" << var2 << endl;
    }
};

int main()
{
    baseclass *base_class_ptr;
    derivedclass der_cl_obj;
    baseclass bs_cl_obj;
    base_class_ptr = &der_cl_obj;

    // Above we have ponted the pointer of the base class to the object derived class //
    base_class_ptr->var1 = 34;
    base_class_ptr->display(); // This will point to the object of the base class //

    // setting a pointer equal to the derived class object will throw an error //
    // setting the derived class pomter to access the objects thorugh the help of derived class //

    derivedclass *de_cl_ptr; // Pointer of derived class // 
    de_cl_ptr = &der_cl_obj;
    de_cl_ptr->var2 = 99;
    de_cl_ptr->display();

    return 0;
}