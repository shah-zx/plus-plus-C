#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int age[20];
    int countseventeen = 0;
    int countsevtoforty = 0;
    int countmoreforty = 0;
    int i = 0;
    for (int i = 0; i < 20; i++)
    {
        cin >> age[i];
        if (age[i] == '\n')
        {
            break;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        /* code */
    }
    

    int total = countseventeen + countmoreforty + countmoreforty;
    cout << "Total Income" << total << " "
         << " INR";
}