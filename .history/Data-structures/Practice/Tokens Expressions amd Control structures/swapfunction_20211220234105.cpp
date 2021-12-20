#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    swap(a, b);
    cout << a << " " << b << endl;
}