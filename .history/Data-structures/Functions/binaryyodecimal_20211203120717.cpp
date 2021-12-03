#include <iostream>
using namespace std;

int binaryToDecimal(int num)
{
    int ans = 0;
    int x = 1;
    while (num > 0)
    {

        int lastdigit = num % 10;
        ans += x * lastdigit;
        x *= 2;
        num /= 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number";
    cin >> num;
    cout << "The decimal of the given number is :" << binaryToDecimal(num);
}