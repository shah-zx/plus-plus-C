#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void negativeorPositive(int n)
{
    if (n >= 0)
    {
        cout << "positive"<< endl;
    }
    else{
        cout <<"negative";
    }
}

int main()
{
    int n;
    cin >> n;
    negativeorPositive(n);
}