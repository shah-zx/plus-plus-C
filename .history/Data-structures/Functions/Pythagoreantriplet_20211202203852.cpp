#include<iostream>
using namespace std;

int Check(int x , int y , int z)
{
  int a = max(x , max(y,z));
  int b , c;
  if (a==x)
  {
      b = y;
      c = z;
  }
  
}


int main()
{
    int x , y , z;
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if (Check(x,y,z))
    {
        cout<<"Pythagorean triplet";
    }
    else
    {
        cout<<"Not a pythagorean triplet";
    }
    


}