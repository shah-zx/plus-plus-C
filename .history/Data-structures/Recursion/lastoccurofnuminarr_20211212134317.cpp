#include <iostream>
using namespace std;

int Lastoccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int restArray = Lastoccur(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 5};
    cout << Lastoccur(arr, 5, 0, 2);
}