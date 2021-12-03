#include <iostream>
using namespace std;

int ans = 0;
int x = 1;
int hexaToDecimal(string n)
{

    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] > '0' && n[i] < '9')
        {
            ans =+ x*(n[i]-'0');
        }
        else if (n[i] > 'A' && n[i] < 'F')
        {
            ans =+ x*(n[i]-'A' + 10);
        }
        x*= 16;
    }
    return ans;
}

int main()
{
    string s;
    cout << "Enter the number";
    cin >> s;
    cout << hexaToDecimal(s);
}
