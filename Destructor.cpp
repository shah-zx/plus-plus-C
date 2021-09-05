
// Here we will learn about the destructors //
// Used to free the memory occupied unwantedly //
// Never takes an argument nor it returns a value //
// run implicitly by the compiler //
// When object is created comstructor is created and when object's work is over the destructor is called //
#include <iostream>
using namespace std;

int count = 0;

class num
{

public:
    num()
    {
        count++;
        cout << "This is the time when the constructor is called for object number." <<count<< endl;
    }

    // Destructor //
    ~num()
    { // Using a tilde sign in the beggining //
    count--;
        cout << "This is the time when my destructor is called for object number " << count << endl;
    }
};

int main()

{
    cout << "We are inside teh main function" << endl;
    cout << "Creating first object" << endl;
    num n1;
    {
        cout << "Entering the block" << endl;
        cout << "Creating two more objects" << endl;

        num n2, n3;
        cout << "Exiting this block" << endl;
    }
cout<<"Back to main"<<endl;
    return 0;
}