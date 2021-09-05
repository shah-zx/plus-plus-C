

// Here we will see that how a particular type of function is used for differnt purposes at different places in a program //

#include<iostream>
using namespace std;


// Here we created the prototypes of our function. //
int area(int);
int area(int , int);

// Here we are having only one function but it used two times , one for printing the area of square and other for printing the area of circle. //



int main()
{
cout<<"The area of the square with side 5 is "<<area(5)<<endl;
cout<<"The area of the rectangle with leangth 4 and breadth 6 is "<<area(4,6)<<endl;

}

// Here we are having our actual functions. //

int area(int a){
    return a*a;

}
int area(int a, int b){
    return a*b;
}
