#include <iostream>
using namespace std;


void swap(int arr , int l, int m , int h)
{
    
}


void DNF(int arr, int n)
{
    int l = 0;
    int m = 0;
    int h = n - 1;

    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr, l, m);
            l++;
            m++;
        }
        else if (arr[m]==1)
        {
            m++;
        }
        else
        {
            swap(arr, m, h);
            h--;
        }
    }
}

int main()
{
}