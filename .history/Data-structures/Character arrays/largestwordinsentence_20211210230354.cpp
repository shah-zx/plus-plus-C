#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char array[n + 1];

    cin.getline(array, n);
    cin.ignore();

    int currlen = 0, Maxlen = 0;
    int i = 0;
    while (1)
    {
        if (array[i] = ' ' || array[i] == '\0')
        {
            if (currlen > Maxlen)
            {
                Maxlen = currlen;
            }
        }
        currlen++;
        if (array[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << Maxlen << endl;
}
