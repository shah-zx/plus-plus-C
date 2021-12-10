// As we make arrays , then basically the variable we make for the array points to the zeroeth element of the array

#include <iostream>
using namespace std;
int main()
{
    int array[3] = {10, 20, 30};
    int *ptr = array;
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }
}