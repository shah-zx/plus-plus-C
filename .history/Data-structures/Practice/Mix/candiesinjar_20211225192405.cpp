#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int k = 10;
    int n;
    cin >> n;
    if (k <= 5)
    {
        int left = k - n;
    }
    cout << "NUMBER OF CANDIES SOLD : " << n << endl;
    cout << "NUMBER OF CANDIES AVAILABLE :" << left;
}