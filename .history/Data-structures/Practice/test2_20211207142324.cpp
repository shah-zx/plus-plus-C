#include<iostream>
// #include<string.h>
using namespace std;
void fun(int X , int Y)
{
    cout<<"##:" << X << " " << Y << endl;
}
void fun(int a = 8 , int b = 10)
{
    cout<<"$$:" << a << " " << b << endl;
}


int main()
{
fun('A' , 20);
return 0;
}