#include <iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    char arr[n + 1];
    cout<<"Enter the word";
    cin >> arr;
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
        cout << "The given word is a palindrome";
    else
    {
        cout << "The given number is not a palindrome";
    }
}
