#include <iostream>
using namespace std;
int main()
{
    int n;
    int array[n];
    cout << "Enter the size of the array :";
    cin >> n;
    for (int i = 0; i < array[n]; i++)
    {
        int maxNo = max(maxNo, array[i]);
        int minNo = max(maxNo, array[i]);
    }
    cout<<maxNo<<" "<<minNo<<endl;
}