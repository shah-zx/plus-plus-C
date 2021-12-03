#include <iostream>
using namespace std;

int linearSearch(int x, int arr[], int k)
{
    for (int i = 0; i < arr[x]; i++)
    {
        if (k == arr[i])
        {
            return i;
        }
        else
            cout << "Key not found";
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array:";
    cin >> n;

    int array[n];
    for (int i = 0; i < array[n]; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "Enter the key you want to search for:";
    cin >> key;

    cout<<linearSearch(n , array , key);
}
