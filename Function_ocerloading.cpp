
// Here we will learn the function overloading //
// Function overloading is the usage of a function more than one time //
#include <iostream>
using namespace std;

int add(int a, int b) // add function - 1 //
{
    return a + b;
}

int add(int a, int b, int c) // add function - 2 //
{
    return a + b + c;
}

int volume(int c, int d) // Volume of cylinder //
{
    return (3.14 * c * c * d);
}

int volume(int z) // Volume of cube //
{
    return z * z * z;
}
int volume(int l, int b, int h) // Volume of cuboid //

// Over loading the volume function above //

{
    return (l * b * h);
}
int main()

{

    // cout << "The sum of three numnbers is  , using 3 arguments:- " << add(2, 3, 4) << endl;
    // cout << "The sum of string is  ,  using 2 arguments:- " << add(2, 3) << endl;
    cout << "The volume of cylinder is :- " << volume(5, 10) << endl;
    cout << "The volume of cube is :- " << volume(2) << endl;
    cout << "The volume of cubid is :- " << volume(3, 7, 9) << endl;
    return 0;
}
