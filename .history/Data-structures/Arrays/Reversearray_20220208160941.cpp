#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    cout << endl;
    cout << "This was the array before reversal" << endl;
    cout << "This is the array after reversal" << endl;
    for (int k = n; k >= 0; k--)
    {
        cout << array[k];
    }
}
