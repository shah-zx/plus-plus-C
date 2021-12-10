#include <iostream>
using namespace std;
int main()
{
    int n;
    char arr[n + 1];
    bool check = 1;
    for (int i = 0; i < n + 1; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout<<"The given word is a palindrome";
    }
}