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
    int binary;

    while (num!=0)
    {
        re = num % 10;
        num /= 10;
        binary = binary + (re * i);
        i = i*10;
    }
    
}
