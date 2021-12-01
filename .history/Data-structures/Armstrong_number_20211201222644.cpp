#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int num;
    cout << "Enter the number";
    cin >> num;

    int sum = 0;
    int originaln = num;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += pow(lastdigit,3);
        num = num / 10;
    }

    if (sum == originaln)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an armstrong number" << endl;
    }
}
