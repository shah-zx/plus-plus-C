#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int sum;
    cout << "Enter the number";
    cin >> num;
    sum = num * (num + 1) / 2;
    cout << sum << endl;
}