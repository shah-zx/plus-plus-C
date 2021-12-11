#include <iostream>
using namespace std;

int Subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & 1 << j)
            {
                cout << arr[j]<< " ";
            }
        }
    }
}

int main()
{
    int arr[4] = {1,2,3,4};
    cout<<Subsets(arr, 4);
}