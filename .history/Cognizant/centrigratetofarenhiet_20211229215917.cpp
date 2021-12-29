#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

float Celtofar(float c)
{
    // To convert temperatures in degrees Celsius to Fahrenheit, multiply by 1.8 (or 9/5) and add 32.

    int result = (c * 1.8) + 32;
    cout << result;
}

int_fast32_t main()
{
  float c;
  cin>>c;
  cout<< Celtofar(c);  


}