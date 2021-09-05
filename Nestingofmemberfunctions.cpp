// Here wewill learn about nestig of member functions //
// OOPS --> Classes and objects //
// C++ --> extension of structures ( in C)

// Structures had limitations
// --> members are public
// --> No members

// Classes --> structures + more
// Classes --> can have methods and properties
// Clases --> can make few members as private and few as public //
// Structures in C++ are typedefed
// Classes --> you can declare objects along with the class declaration

// Now nesting of member functions //

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomplement(void);
    void displayones(void);
};

void binary ::read(void)   // Defining the function //
{
    cout << "Enter a binary number";
    cin >> s;
}

void binary ::chk_bin(void)   // Defining the function 
{
    for (int i = 0; i < s.length(); i++) // Here we are using a for loop to check wether the string entered is really binary or not.
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        { // s.at(i) means that if the characters of the string is not having 1 or 0 as characters then print incorrect...//
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary :: onescomplement(void)   // Defining the function //
{
    chk_bin();   // This is known as nesting in which the function is checking that if the function is binary then do the loop process.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void binary ::displayones(void)     // Defining the function //
{
    onescomplement();    // Using the onescomplement function here in the dispalyones function //  // This is actually what is called as nesting the member function //
    cout << "The 1's complement of the above binary number is: " << s;
}
int main()
{
    binary b;
    b.read();    // Here we will take the number from the user.
    b.chk_bin(); // Here we will check wether the number is binary or not.
   // b.onescomplement();  // This function will give the complement of 1.
    b.displayones();   // This function will display the complement of that binary number.
}
