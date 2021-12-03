#include <iostream>
using namespace std;

int ans = 0;
int x = 1;
int hexaToDecimal(int num)
{
    while (num > 0)
    {

        int lastdigit = num % 10;
        ans += x * lastdigit;
        x *= 8;
        num /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    cout << hexaToDecimal(n);
}