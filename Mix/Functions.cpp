
// here we will be learning the functions in detail.. 
// functions are those things which are used to divide the program into small differnt parts.
// Our first major function is the main function.
// We will first define the funcion then pass the arguments in it and then we will write the body of the function.

#include<iostream>
using namespace std;



int add(int a , int b);  // Here we first declared the function as :- data_type function_name (parameters)
void name();   // Here we did function prototyping //
void swap();
int mul();  

int main()

{
  cout<<"The addition of 3 and 4 is :-"<<add(3,4);   // Here we called the function to meet our program's needs
  name();


}

// Now what is function prototyping :-
// function prototyping allows us to access a function in the program  , (wherever the function might be then.)
// generally when we declare the function in the starting of the program , then we are able to access it in the main finction 
// but when we declare the function after the main function or at any other place in the program , then prototyping is used to
// access the function.

// example :-

// Our first function :-

void name()
{
    cout<<"my name is shahnawaz sayyed";
}

int add(int a , int b)  // Here we first declared the function as :- data_type function_name (parameters)
{
    int c = a+b;
    return c;          // Here is the body of the function which tells us what it does.
}

// Here we declared this function after the main function , so we will use function prototyping //


// Now we will learn call by value and call by reference :-

// Call by value :-

// int mul(int c , int d)
// {
// int e = c*d;
// return e;
// }

// This one is our normal function which will multiply both the integers by taking two integers from the user. //

