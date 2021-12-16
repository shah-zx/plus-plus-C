#include<iostream>
using namespace std;

// Now for these type of functions we will need call by value method :-



// void swap(int &f , int &g)
// {
//     int temp = f;
//     f=g;
//     f=temp;
// }  // By this meyhod we are not able to get the correct output //

// by this method we will be getting the perfect output :-

// void swap(int *f , int *g)   // Here we are using  :- call by reference by using pointers //
// {
//     int temp = *f;
//      *f=*g;
//      *f=temp;

// }


void swapReferencevar(int &c , int &d)
{
    int temp = c;
     c=d;
     d=temp;
}


// Here we are having our main function.

int main(){
int a = 2 , b = 3;
  cout<<"The value of f is "<<a<<"The value of g is "<<b;
  // swap(&a,&b);          // Here we have given the address of these variables //         
  swapReferencevar(a,b);   // This will swap a and b using reference variables //

  // Where c is pointing towards the variable a and d is pointing towards the variable b in memory therefore it will swap the values //

  cout<<"The value of f is "<<a<<"The value of g is "<<b;
}

// Here we are giving the addresses of these variables to be accessed  using pointer reference. //







