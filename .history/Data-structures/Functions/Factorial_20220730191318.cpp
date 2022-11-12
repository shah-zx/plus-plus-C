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


void Rev(string s , int n){
    int s = 0;
    int e = n -1;
    while(s < e){
        swap(s[s++] , s[e--]);
    }
}



int main()
{
    string s;
    cin >> s;

}
