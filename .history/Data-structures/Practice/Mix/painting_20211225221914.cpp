#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int counti = 0;
    int counte = 0;
    int num1;
    cout << "enter number interior walls";
    cin >> num1;
    float arr[num1];
    int num2;
    cout << "enter exterior walls";
    cin >> num2;
    cout << "Enter the surface area of interior walls";
    float arr2[num2];
    for (int i = 0; i < num1; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the surface area of exterior walls";
    for (int i = 0; i < num2; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < num1; i++)
    {
        counti += arr[i] * 18;
    }
    for (int i = 0; i < num2; i++)
    {
        counte += arr2[i] * 12;
    }
    cout << "Total estimated Cost :" << counti + counte << "INR" << endl;
}