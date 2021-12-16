#include<iostream>
#include"Tempfile.h" // this is a file in our directory  //
// A header file //
// There are two types of header files : It comes with the compiler //
// User defined header files : It is written by the programmer // 

using namespace std;

int main()

{
    cout<<"This is the hello world program"<<endl;
    // Operators in c++ //
    // Following are the types of operators in c++
    int a = 3;
    int v = 4;

    cout<<"The value of a + v is - "<<a+v<<endl;
    cout<<"The value of a + v is - "<<a*v<<endl;
    cout<<"The value of a + v is - "<<a/v<<endl;
    cout<<"The value of a + v is - "<<a-v<<endl;
    cout<<"The value of a + v is - "<<a%v<<endl;
    cout<<"The value of a + v is - "<<a++<<endl;
    cout<<"The value of a + v is - "<<a--<<endl;
    cout<<"The value of a + v is - "<<++a<<endl;
    cout<<"The value of a + v is - "<<--a<<endl;
// Assignment opearators // // Used to assign the values //
    int c = 4 , b=9;


// comparison operator //
    cout<<"The value of a == b is :- "<<(a==c)<<endl;
    cout<<"The value of a != b is :- "<<(a!=c)<<endl;
    cout<<"The value of a < b is :- "<<(a<c)<<endl;
    cout<<"The value of a > b is :- "<<(a>c)<<endl;
    cout<<"The value of a <= b is :- "<<(a<=c)<<endl;
    cout<<"The value of a >= b is :- "<<(a>=c)<<endl;

// Logical operators //

    cout<<"The value of logical and operator is :- "<<((a==c) && (a<b))
    <<endl;
    cout<<"The value of logica or operaator is :- "<<((a==c) || (a>c))<<endl;
    cout<<"The value of logica not operaator is :- "<<(!(a==c))<<endl;


    return 0;

}

