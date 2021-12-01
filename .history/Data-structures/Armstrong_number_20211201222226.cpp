#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int num;
    cout << "Enter the number";
    cin >> num;

    int reverse = 0;
    int sum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += pow(10, lastdigit);
        num = num / 10;
    }

    if (sum == num)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an armstrong number" << endl;
    }
}