#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string arr[num] = {};
    for (int i = 1; i <= num; i++)
    {
        cin >> arr[i];
    }
    for (int j = 1; j < num; i++)
    {
        cout << arr[i] << " " << endl;
    }
}