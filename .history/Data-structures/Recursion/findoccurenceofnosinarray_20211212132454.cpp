#include <iostream>
using namespace std;

int Firstoccur(int arr[], int n, int i, int key)  // i is the pointer which is taken to keep track of the position
{
    if (n==0)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return Firstoccur(arr, n, i + 1, key);
}

int main()
{
   int arr[] = {1, 7, 3, 2, 5};
   cout<<Firstoccur(arr , 5 , 0, 2 );

}