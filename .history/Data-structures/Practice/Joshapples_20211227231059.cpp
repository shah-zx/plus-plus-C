#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int appleswanttobuy;
    cin >> appleswanttobuy;

    int applesinlotata, priceoflotata;
    cin >> applesinlotata >> priceoflotata;

    int applesinlotatb, priceoflotatb;
    cin >> applesinlotatb >> priceoflotatb;

    int rem = 0;
    while (rem!=5)
    {
       appleswanttobuy %=3;
       rem++;    
    }
    



}