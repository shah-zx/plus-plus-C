#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, array[i]);
    }
        cout << mx << endl;

}