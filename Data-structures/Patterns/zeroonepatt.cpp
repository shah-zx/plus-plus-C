#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}
