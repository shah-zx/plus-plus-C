#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    int roll;
};


int main()
{
   student arr[3];
   for (int i = 0; i < 3; i++)
   {
       cout <<"name: ";
       cin>>arr[i].name;
       cout<<"age:";
       cin>>arr[i].age;
       cout<<"roll:";
       cin>>arr[i].roll;
   }
   
}