#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 1;
    cout << "Enter the number of rows you want to print in ascending order :";
    cin >> num;
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
}
