

// Here w will study about the functions and function prototyping //
// Breaking the program into many small parts and making those small parts work are known as functions //
// Do once use forever //
// Function prototyping //
// In this activity the compiler is told about an incoming functiom , wether it will be after main or before main or anywhere in the program //
// Formal parameters and actual parameters //
#include <iostream>
using namespace std;

// This is called function prototyping //
// int sum(int s, int p); - acceptable //
// int sum(int a,b); -- not acceptable //

int sum(int, int); // Function prototyping //
void g();
int main() // This is also a function //
{
    int num1, num2;
    g();
    cout << "Enter the first num ";
    cin >> num1;
    cout << "Enter the second num ";
    cin >> num2;
    cout << "The summ is: " << sum(num1, num2) << endl; // Here actual parameters are passed viz. num1 and num2 //
    return 0;
}

// Our function //

int sum(int a, int b) // These are the formal parameters //
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello there";
}
