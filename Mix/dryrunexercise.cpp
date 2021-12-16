#include<iostream>
using namespace std;


int add (int p , int q)
{
    int r;
    r=p+q;
    return r;
}




int main()
{
int x=7 , y=5 , z;
z= add(7,2);
cout<<"result  1:- " <<z<<'\n' ;
cout<<"result  2:- " <<z+add(7,8)<<'\n' ;
cout<<"result  3:- " <<add(x,y)<<'\n' ;
z =4 +add(9,y);
cout<<"Result 4 :- "<<z<<'\n';

}

void fun(int count)
{
    if (count ==0)
    {
        cout<<count;
    }
    else
    {
        
        
        cout<<count<<endl;
        fun(--count);
        return;
    }
    
}
