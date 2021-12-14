#include<iostream>
using namespace std;


void Merge(int arr[] , int mid , int l  ,int r)
 {
     int n1 = mid-l+1;
     int n2 = r-mid;

     int arr1[n1];
     int arr2[n2];

     for (int i = 0; i < n1; i++)
     {
         arr1[i] = arr2[l+i];
     }
     for (int j = 0; j < n2; j++)
     {
         arr2[j] = arr1[mid+1+j];
     }
     
     
 }


void Mergesort(int arr[] , int mid , int l , int r)
{

}



int main()
{

}