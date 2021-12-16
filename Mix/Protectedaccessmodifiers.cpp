// Here we wil learn about protected access modfiers //

#include<iostream>
using namespace std;


class base {
    private:
int b;
protected:  // Its simply a private member which can be inherited //
int a;

};




// For a protected member // :      // Public derivation //   // Private detivation   // Protected derivation //
// Private members :-                 Not inherited                Not inherited            Not inherited
// Protected members :-               protected                    private                  Protected
// Public members :-                  public                       private                  Protected 






class derived : protected base {

};

int main()

{
base b;
derived d;

}