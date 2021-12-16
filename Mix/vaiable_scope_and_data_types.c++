   
// A variable is a container to hold the data //
// Types :- int , float , char , double , boolean //
// syntax :- Data_type -variable_name = value; //
// Scope of variables :- kaha par koi cheez uplabdh hai //
// Local variables and global variables //
// Data types :- basic ,user defined  , derived //

#include<iostream>
using namespace std;

int z = 3;
int main()

{

// local variables //
// The variable which is made inside a function is the local variable //
// Local variabe has more precedence //
// int sum =2;
// Here the sum variable is holding the integer data type //
// Built in :
// int , float , char  , double , bool //
// derived :
// array , union , pointer //
// user defined :
// // structure , union  , enum //
// int a = 6;
// int b = 7;

int a = 3 , b = 4;
int glo = 76;
float pi = 3.14;
char c = 'u';
bool is_true = true;
cout<<"The value of a is :-" <<a<< "\nand the value of b is :-"<<b;
cout<<"\nThe value of pi is :-"<<pi;
cout<<"The value of c is :- "<<c<<"\n"<<is_true;
return 0;

}

// Rules for declaration of the variables //
// Variables names in C++ can range from 1 to 255 caharacters //
// begin with letter or underscore //
// case sensitive :- be aware //
// No spaces or special characters are allowed //
// key word cant be used as a variable name //

