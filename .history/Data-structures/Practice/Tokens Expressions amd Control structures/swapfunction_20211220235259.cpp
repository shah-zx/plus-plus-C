#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
}

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    swap(a, b);
}
