#include <iostream>
using namespace std;

int maximumValue(int array[], int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int main()
{
    int arr[] = {};
    for ( i = 0; i < 3; i++)
    {
        /* code */
    }
    
}