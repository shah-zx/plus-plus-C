#include<iostream>
using namespace std;

// int funcAvg(int a , int b)
// {
//     float avg = (a+b)/2;
//     return avg;
// }


// float funcAvg2(int a , int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }


template <class T1  , class T2>
float funcAvg2 (T1 a , T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{

float a;
a= funcAvg2(10 , 8.90);
cout<<a;

// a = funcAvg(5,2);
// cout<<a<<endl;
// b = funcAvg2(7 , 2.3);
// cout<<b;
return 0;

}

