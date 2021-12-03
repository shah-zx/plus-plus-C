#include <iostream>
using namespace std;
int main()
{
    int n;
    int array[n];
    cout << "Enter the size of the array :";
    cin >> n;
    int maxNo;
    int minNo;

    for (int i = 0; i < array[n]; i++)
    {
         maxNo = max(maxNo, array[i]);
         minNo = max(maxNo, array[i]);
    }
    cout << maxNo << " " << minNo << endl;
}
