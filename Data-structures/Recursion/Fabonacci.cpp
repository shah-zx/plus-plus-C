#include <iostream>
using namespace std;

int Fab(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }

    return Fab(n - 1) + Fab(n - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << Fab(num);
}