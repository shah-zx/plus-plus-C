#include<iostream>
#include<iomanip>
using namespace std;

//  Constants in c++ are the constant values whose values cant be changed //



int main()

{
    
    // int a =3;
    // cout<<a<<endl;
    // a = 56;
    // cout<<"Second a "<<a;
    // const int b = 3; // a constant variable //
     // it cant be changed like b=4;
     // Manipulators  //
     int a =3 , b=56 , c=1234;

     cout<<"The value of a is "<<a<<endl;
     cout<<"The value of b is "<<b<<endl;
     cout<<"The value of c is "<<c<<endl;

     
     cout<<"The value of a is "<<setw(4)<<a<<endl;
     cout<<"The value of b is "<<setw(4)<<b<<endl;
     cout<<"The value of c is "<<setw(4)<<c<<endl;

    // setw is a function which sets the width of an output //

    // Operator precedence //

    int s = 4 , q = 5;
    int p = ((((s*2)+q)-20)+34);  // Here pecedence will work //
    cout<<p;
    return 0;

}



