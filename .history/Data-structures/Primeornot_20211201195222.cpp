#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;

    bool flag;

    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "The given number is not prime";
            flag = 1;
            break;
        }
        if(flag == 0){
            cout << "The given number is prime";
            flag = 0;  
        }

    }
}
