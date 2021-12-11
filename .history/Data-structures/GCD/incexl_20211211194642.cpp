#include <iostream>
using namespace std;

int Div(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);
    return c1 + c2 - c3;
}

int main()
{
    int num;
    int numone;
    int numtwo;
    cin>>num>>numone>>numtwo;
    cout << Div(num, numone, numtwo);
}
