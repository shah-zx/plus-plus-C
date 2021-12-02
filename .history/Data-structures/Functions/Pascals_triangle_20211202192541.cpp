#include <iostream>
using namespace std;

int factorial = 1;
int fact(int num)
{
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    int r;

    cout << "Enter the numbers n";
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; i++)
        {
            cout << fact(i) / fact(j) * fact(i - j) << endl;
        }
        cout << endl;
    }
}