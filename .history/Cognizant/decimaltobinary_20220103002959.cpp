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
    int i = 0;
    int ans = 0;
    while (num != 0) {
        int bitss = num & 1;

        ans = (bitss * pow(10, i)) + ans;

        num = num >> 1;
        i++;
    }
    cout<<"Answer is : "<<ans<<endl;
}
