
// Inline function //
// Constant arguments are those values which cannot be changed by the funciton //
#include<iostream>
using namespace std;

inline int product(int a , int b )
{
return a*b;
}

float money_recieved(int currentmoney , float factor = 1.04) // Here we have a default value in the argument // 
// A default argument comes into existence when we dont pass any value in the function //

{
return currentmoney*factor;
}
// A type of constant argument //
// int strlen(const int *p)
// {

// }

// Inline functions are useful in making the function more time efficient  ,  they are usuallly used when we have to call a function many 
// times in our code and also the function is having less content in the code. //
// when the recursion is used , we shouldnt use the inline function //
// Inlinefunctions shouldnt be used with the inline function //
// A function never forgets the static variable //
// Making a function inline is not a command but is a request to the compiler //

int main()

{

int a , b;
int static c;
int money = 100000;
// cout<<"Enter the value of a and b";
// cin>>a>>b;
// cout<<"The product of a and b is :- "<<product(a,b)<<endl;
// cout<<"The product of a and b is :- "<<product(a,b)<<endl;
// cout<<"The product of a and b is :- "<<product(a,b)<<endl;
// cout<<"The product of a and b is :- "<<product(a,b)<<endl;
// cout<<"The product of a and b is :- "<<product(a,b)<<endl;
// cout<<"The product of a and b is :- "<<product(a,b)<<endl;
cout<<"If you have "<<money<<"in your account , you will recieve "<<money_recieved(money , 1.1)<<"Rs after one year";
return 0;

// The code if replaced in compile time //

}