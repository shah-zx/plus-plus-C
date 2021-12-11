#include <iostream>
using namespace std;

int Inc(int n)
{
    if (n == 1)
    {
        cout<<"1"<<endl;
        return 1;
    }
    Inc(n - 1);
    cout << n << endl;
}

int main()
{
    int num;
    cin >> num;
    cout << Inc(num);
}
            