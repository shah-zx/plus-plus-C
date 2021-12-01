#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of stars you want to print in ascending order :";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}