#include <iostream>
using namespace std;

int Power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevpower = Power(n - 1, p);
    return n * prevpower;
}

int main()
{
    int num;
    int power;
    cin>>num>>power;
    cout<<Power(num , power)<<endl;
}
