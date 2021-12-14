#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main(){
   

   int arr[] = {10,16,7,14,5,3,2,9};
   vector<pair<int,int>> v;

   for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
   {
       v.push_back(make_pair(arr[i] , i));
   }
   sort(v.begin(), v.end() , myComparator);

   

}