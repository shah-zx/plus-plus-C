#include <bits/stdc++.h>
using namespace std;

int_fast32_t main()
{

    int num;
    cin >> num;
    int n = num;
    int digit;
    int rev = 0;
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    if (n == rev)
    {
        cout << "Its a palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
}