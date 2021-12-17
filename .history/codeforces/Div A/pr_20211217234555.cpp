#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    string arr[num];
    for (int i = 1; i < num; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i < num; i++)
    // {
    //     cout << arr[i];
    // }

    cout<<arr[1];
}