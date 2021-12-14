#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void DNF(int arr[], int n)
{
    int l = 0;
    int m = 0;
    int h = n - 1;

    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr, l, m);
            l++;
            m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr, m, h);
            h--;
        }
    }
}

int main()
{

int arr[] = {0,1,2,2,0,0,1,1};
DNF(arr ,8);
for (int i = 0; i < 8; i++)
{
 cout<<arr[i]<<endl;
}


}