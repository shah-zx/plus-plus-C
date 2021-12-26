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
    bool flag = 0;
    if (negativeorPositive)
    {
        for (int i = 2; i <=sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << "number is not prime" << endl;
                flag = 1; 
                break;
            }
            else
            {
                cout << "number is prime" << endl;
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
