// Here we will study about arrays
   cout<<array[0];

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array";
    cin >> n;
    int array[n];

    for (int i = 0; i < array[n]; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < array[n]; i++)
    {
        cout<< array[i] << " ";
    }
    return 0;
}
