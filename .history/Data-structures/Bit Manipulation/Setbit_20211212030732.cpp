#include <iostream>
using namespace std;

int SetBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    cout << SetBit(5, 1) << endl;   // This will give the number which will come when the bit is set
}
