#include <iostream>
using namespace std;

int dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    dec(n - 1);
}

int main()
{
    int num;
    cin>>num;
    cout<<dec(num);
}