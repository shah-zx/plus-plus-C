#include<iostream>
#include<string.h>
using namespace std;


class aa{
    public: void print(){
        cout<<"In find";
    }
};

class course:public aa{
    public: void print(){
        cout<<"In course";
    }
};

class tech:public course {};


int main()
{

aa f;
course c;
tech t;

// string str1  ="ABC";
// string str2;

// strcpy(str1 ,str2);
// cout<<str2<<endl;
f.print();
t.print();
c.print();
return 0;
}