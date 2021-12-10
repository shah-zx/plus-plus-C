#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p; // A pointer pointing to another pointer //

    cout << **q << endl;
    cout << q;
}
