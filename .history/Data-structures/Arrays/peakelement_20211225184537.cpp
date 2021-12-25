#include<iostream>
using namespace std;


void PeakElem(int arr[] , int n)
{
     int s = 0;
     int e = s + (s-e)/2;
     int mid = s + (s-e)/2;
     while(s<e)
     {
         if(arr[mid] < arr [mid + 1])
         {
             s = mid +1;
         }
     }
     
}






int main()
{

}