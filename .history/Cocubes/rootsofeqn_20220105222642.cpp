#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int d = b * b - (4 * a * c);
    if (d == 0)
    {
        int r1 = -b / (2 * a);
        int r2 = -b / (2 * a);
        cout << "Roots are real and equal";
        cout << "Root 1: " << r1 << " "
             << "Root 2: " << r2 << endl;
    }
    else if (d > 0)
    {
        int r1 = -b + sqrt(d) / (2 * a);
        int r2 = -b - sqrt(d) / (2 * a);

        cout << "Roots are real and different";
        cout << "Root 1: " << r1 << " "
             << "Root 2: " << r2 << endl;
    }
    else{
        cout<<"Roots are imaginary";
    }
}