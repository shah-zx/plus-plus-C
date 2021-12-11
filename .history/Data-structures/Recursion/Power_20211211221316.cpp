#include <iostream>
using namespace std;

int Powernum(int n, int p)
{
    if (p==0)
    {
        return 1;
    }
    int prevpower = Powernum(n - 1, p);
    return n * prevpower;
}

int main()
{
    int num = 4;
    int power = 4;
    cout << Powernum(num, power) << endl;
}
