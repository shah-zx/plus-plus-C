#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << &a;
    *ptr++;
    cout << ptr;
    *ptr = 30;
    cout << *ptr << endl;
}