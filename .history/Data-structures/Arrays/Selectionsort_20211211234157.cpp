#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[i] = array[j];
                array[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " " << endl;
    }
}