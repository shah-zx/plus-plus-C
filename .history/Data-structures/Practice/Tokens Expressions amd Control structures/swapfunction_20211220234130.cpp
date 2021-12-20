#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return a,b;
}

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout<<swap(a, b);
}