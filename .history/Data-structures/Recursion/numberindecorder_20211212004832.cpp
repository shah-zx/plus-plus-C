#include <iostream>
using namespace std;

int dec(int n)
{
    if (n==0)
    {
        return -1;
    }
    // cout << n << endl;
    return dec(n - 1);
}

int main()
{
    int num;
    cin>>num;
    cout<<dec(num);
}