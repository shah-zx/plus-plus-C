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
    string s;
    cin >> s;
    
}
