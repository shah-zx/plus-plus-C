#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char array[n + 1];
    cin.getline(array, n);
    cin.ignore();

    int currlen = 0;
    int Maxlen = 0;
    int i;
    while (1)
    {
        if (array[i] = ' ' || array[i] == '/0')
        {
            if (currlen > Maxlen)
            {
                Maxlen = currlen;
            }
        }
        currlen++;
        if (array[i] == '/0')
        {
            break;
        }
        i++;
    }
}
