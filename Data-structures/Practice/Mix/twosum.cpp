#include <iostream>
using namespace std;

void TrAdd(int arr[], int target, int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] + arr[i + 1] == target)
        {
            cout << "[" << i << "," << i + 1 << "]";
        }
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size] = {};
    for (int i = 0; i <=size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    TrAdd(arr, target, size);
}
