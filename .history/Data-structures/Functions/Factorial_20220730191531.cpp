#include <iostream>
using namespace std;

int factorial = 1;
int fact(int num)
{
    for (int i = 2; i <= num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

string Rev(string sam, int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(sam[s++], sam[e--]);
    }
    return sam;
}

int main()
{
    string s;
    cin >> s;
    int y = s.length();
}
