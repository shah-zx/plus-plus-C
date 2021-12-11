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
                cout << arr[j] << " ";
            }
        }
        cout<<endl;
    }
}

int main()
{

    // int i = 4;
    // do
    // {
    //     cout<<"do loop";
    //     i++;
    // } while (i>=0);
    
    int arr[3] = {1, 2, 3};
    cout << Subsets(arr, 3);
}