#include<iostream>
using namespace std;


int FindUnique(int arr[] , int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}


int main()
{
   int arr[5] = {3,2,1,3,2};
   cout << FindUnique(arr , 5) << endl;
}