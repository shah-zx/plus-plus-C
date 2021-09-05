# include<iostream>
using namespace std;

// int c = 45;  // Global  variable //


int main()
 {
// int a,b,c;
// cout<<"Enter the value of a:"<<endl;
// cin>>a;
// cout<<"Enter the value of b:"<<endl;
// cin>>b;
// c = a+b;
// cout<<"The sum of a and b is :- "<<c<<endl;
// cout<<"The value of the global variable is :- "<<::c; // Using the scope resolution operator //

long double e = 34.4;
float d = 34.4;
cout<<"The value of d is :"<<d<<endl;
cout<<"The value of e is :"<<e;
cout<<"The size of 34.4 float type is :- "<<sizeof(34.4)<<endl;
cout<<"The size of 34.4 float type is :- "<<sizeof(34.4f)<<endl;
cout<<"The size of 34.4 float type is :- "<<sizeof(34.4l)<<endl;
cout<<"The size of 34.4 float type is :- "<<sizeof(34.4L)<<endl;

// Built in data types  // // Above one //

// Rference variables //

float x = 32;
float &y = x;  // Creation of the reference variable // 
cout<<x<<endl;
cout<<y<<endl;

// Type casting //
// The process of convering one data type to another data type //
int a = 45;
float f = 34.78;
int c = int (f);
cout<<a<<endl;
cout<<"The int a is now interchanged to float :- "<<(float)a<<endl;
cout<<"The float a is now interchanged to int :- "<<(int)f;
cout<<"The value of c is  :- "<<c;
cout<<"The expression is :- "<<a+f<<endl;
cout<<"The expression is :- "<<a+int(f)<<endl;
cout<<"The expression is :- "<<a+(int)f;


return 0;

}




