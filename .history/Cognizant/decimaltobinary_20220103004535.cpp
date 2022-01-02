#include <iostream>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int num;
    cin >> num;
    int i = 1;
    int rem;
    int binary = 0;

    while (num != 0)
    {
        rem = num % 2;
        num /= 10;
        binary = binary + (rem * i);
        i = i * 10;
    }
    cout << binary << endl;
}
