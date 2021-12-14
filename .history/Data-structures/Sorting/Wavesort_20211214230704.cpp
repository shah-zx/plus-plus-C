#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Wave(int array[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (array[i] < array[i - 1])
        {
            swap(array, i, i - 1);
        }
        if (array[i] > array[i + 1])
        {
            swap(array, i, i + 1);
        }
        i+=2;
    }
}

int main()
{

    int arr[] = {1,3,4,7,5,6,2};
    Wave(arr ,7 )
}