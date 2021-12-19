#include <iostream>
using namespace std;

void TrAdd(int arr[], int target, int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] + arr[i + 1] == target)
        {
            cout << "[" << arr[i] , arr[i + 1] << "]"<< endl;
        }
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size] = {2, 7, 11, 15};
    int target;
    cin >> target;
    TrAdd(arr, target, size);
}