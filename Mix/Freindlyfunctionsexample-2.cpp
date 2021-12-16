#include<iostream>
using namespace std;


// Forward declaration for the num2 class //

class num2;

// Class 1 :-

class num1{
// variable declaration :-
     int data;
     // function declaration :-
     public:
     void setValue(int value){
       data = value;
     }
     // Definition of the freindly function :-
     friend int mul(num1 , num2);
};

// Class 2:-

class num2{
    // Variable declaration :-
    int data;
    // function declaration :-
    public:
    int setValue(int value){
        data = value;
    }
    //Definition of the freindly function :-
    friend int mul(num1 , num2);

};



// Declaration for the freindly function :-


int mul(num1 a , num2 b){
    return(a.data*b.data);
}



int main()

{
// Making new objects for storing values :-
num1 s;  // new object s //
num2 p;  // new object p //
s.setValue(34);
p.setValue(45);
cout<<"The multiplication of the two objects is :- "<<mul(s,p);



}