#include <iostream>
using namespace std;

bool Sort(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    int RestArray = (arr + 1, n - 1);
    return (arr[0] < arr[1] && RestArray);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n;
    cout << Sort(arr, 5);
}
