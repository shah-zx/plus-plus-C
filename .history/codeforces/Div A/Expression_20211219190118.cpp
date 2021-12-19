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

int minimumValue(int array[], int n)
{
    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

int main()
{
    int arr[3] = {};
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    int num;
    int maxval = maximumValue(arr , 3) 
    if (num >)
    {
        /* code */
    }
}
