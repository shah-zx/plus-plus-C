#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

bool negativeorPositive(int n)
{
    if (n >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void isPrime(int n)
{
    if (negativeorPositive)
    {
        for (int i = 0; i < sqrt(n); i++)
        {
            if (n % 2 == 0)
            {
                cout << "number is prime" << endl;
            }
            else
            {
                cout << "number is not prime" << endl;
            }
        }
    }
    else
    {
        cout << "please enter the positive number";
    }
}

int main()
{
    int n;
    cin >> n;
    isPrime(n);
}