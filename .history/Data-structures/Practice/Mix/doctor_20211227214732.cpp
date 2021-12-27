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
    int total = 0;
    for (int i = 0; i < 20; i++)
    {
        cout<<"Enter person's age : "<<i;
        cin >> age[i];
        if (!age[i])
        {
            break;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (age[i] < 17)
        {
            countseventeen += age[i] * 200;
            return countseventeen;
        }
        else if (age[i] >= 17 && age[i] <= 40)
        {
            countsevtoforty += age[i] * 400;
            return countsevtoforty;
        }
        else
        {
            countmoreforty += age[i] * 300;
            return countmoreforty;
        }
    }

    total = countseventeen + countmoreforty + countmoreforty;
    cout << "Total Income" << total << " "
         << " INR";
}
