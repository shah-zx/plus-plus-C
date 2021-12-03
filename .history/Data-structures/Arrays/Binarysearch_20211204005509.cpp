#include <iostream>
using namespace std;

int binarySearch(int n, int array[], int key)
{
    int s = 0; // start of our  array
    int e = n; // end of the array
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}

int main()
{
    int n;
    int key;
    cout << "Enter the size of the array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < arr[n]; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key";
    cin >> key;
    cout << binarySearch(n, arr, key);
}