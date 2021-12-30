#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void Triangle(int n1, int n2, int n3)
{
    if (n1 == n2  && n2 == n3)
    {
        cout << "Triangle is equilateral";
    }
    else if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        cout << "Triangle is isoceles";
    }
    else
    {
        cout << "Triangle is scalene";
    }
}

int_fast32_t main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    Triangle(n1, n2, n3);
}