#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 4 == 0 || num % 7 == 0 || num %47 == 0 || num%477)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}