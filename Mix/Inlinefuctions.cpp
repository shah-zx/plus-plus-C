// Here we will study about inline function //
// inline functions are those functions through the help  of which we can run a particular function more than one time 
// without much use of the memory //
// but the function and its body should be small and not so much big that while executig the function more than 2 or 3 times
// it uses the whole cache memory of the function //

 // syntax for inline function :-
 // inline type function_name(arguments)


#include<iostream>
using namespace std;

// Now we will learn default arguments :-

// For that we will write a function :-


float moneyRecieved(int money , float factor =  1.04)   // Here factor is having a default argument //
// If we have given a value while calling the function then the default value is not used but if not then it is used. //
{
    return money*factor;
}


// Here we will  declare an inline function :-

 inline int mul(int a , int b)
{
    int c = a*b;
    return c;
}


int main()
{
    
    int money = 100000;
    cout <<"The multiplication of  f and g is \n :- "<<mul(4,5);
    cout<<"The money in your bank account is rs:- "<<money<<"and you will recieve "<<moneyRecieved(money)<<"in your account";
    // cout<<"The money in your bank account is rs:- "<<money<<"and you will recieve "<<moneyRecieved(money , 1.10)<<"in your account";
    // Here we have put the value by ourself  , so it will not take the default output //



}

// Now we will see constant arguments //

// constant qulaifier tells the compiler that the function should not change or modify the arguments //
