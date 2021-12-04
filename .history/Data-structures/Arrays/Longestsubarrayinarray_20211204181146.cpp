
// Here we will be creating an arithmetic array in which the difference between the sub arrays is always same //

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
    int pd = array[1] - array[0];
    int current = 2;
    int ans = 2;
    int j = 2;

    while (j < n)
    {
        if (pd == array[j] - array[j - 1])
        {
            current++;
        }
        else
        {
            pd = array[j] - array[j - 1];
            current = 2;
        }
        j++;
    }
}
