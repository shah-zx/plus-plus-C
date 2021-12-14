#include<iostream>
using namespace std;


void swap(int arr[] , int i , int j) {
    int temp = arr[i];
    int arr[i] = arr[j];
    int arr[j] = temp;
}


int Wave(int arr[] , int n)
{
    for (int i =1; i < n-1; i++)
    {
        if (arr[i]<arr[i-1])
        {
            swap(arr,i,i-1);
        }
        
    }
    
    
}


int main()
{

}