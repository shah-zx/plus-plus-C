#include <bits/stdc++.h>
using namespace std;

int_fast32_t main()
{
    int num = 0;
    cin >> num;
    int digit;
    int rev = 0;
    while (num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

}