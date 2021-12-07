#include<iostream>
// #include<string.h>
using namespace std;
struct a {
    int p;
};

struct b {
 int *x;
};
struct c: public a  , public b
{

};



int main()
{
c*p = new c;
p->x = 0;
cout<<"Inherited";
return 0;
}