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
    int arr[size] = {3, 2, 4};
    int target;
    cin >> target;
    TrAdd(arr, target, size);
}
