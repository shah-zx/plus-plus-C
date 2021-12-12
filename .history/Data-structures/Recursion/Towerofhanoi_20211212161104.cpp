#include <iostream>
using namespace std;

void ToweroHan(int n, char src, char dest, char help)
{
    if (n == 0)
    {
        return;
    }
    ToweroHan(n, src, help, dest);
    cout << "Move from" << src << "to" << dest << endl;
    ToweroHan(n, help, dest, src);
}

int main()
{
    ToweroHan(3, 'A', 'C', 'B');
}
