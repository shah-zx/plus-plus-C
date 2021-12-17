#include <iostream>
using namespace std;

int main()
{
    string s = "shahnawaz";
    int i;
    int n = 0;
    for (int i = 1; i < s.length() - 1; i++)
    {
        n += i;
    }

    cout << s[0] << n << s[s.length() - 1];
}