#include<iostream>
using namespace std;

int Lastoccur(int arr[] , int n , int i , int key) {
    if (n==0)
    {
        return -1;
    }
    if (arr[i]==key)
    {
        return i;
    }
    
    return Lastoccur(arr,n ,i-1,key);
    
}

int main()
{

}