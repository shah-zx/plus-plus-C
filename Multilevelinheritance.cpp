
// Here we will learn about multilevel inheritance //
// Class --> derived class one --> derived class two. //
// Class grandfather --> class father --> class us. //
// Class grandfather --> protected : fair skin , brown eyes ; public : angry; //
// Class father : public grandfather //
// Class child : public father //

#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setnum(int);
    void getnum(void);
};

void student::setnum(int r)
{
    roll = r;
}
void student::getnum(void)
{
    cout << "The roll no. is " << roll;
}
class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void setmarks(float, float);
    void getmarks(void);
};

class result : public exam
{
    float percentage;

public:
    void disp()

    {
        getnum();
        getmarks();
        cout << "Your percentsge is :- " << (maths + phy) / 2 << endl;
    }
};

void exam ::setmarks(float m1, float m2)
{
    maths = m1;
    phy = m2;
}

void exam ::getmarks(void)
{
    cout << "The marks obtained in maths is :-" << maths << endl;
    cout << "The marks obtained in maths is :-" << phy << endl;
}

int main()

{
// 1. If we are inheriting b from a and c from b --> {a-->b-->c} //
// a is the base class for b and b is the base class for c //
// abc is called the inheritance path //

result shanu;
shanu.setnum(12);
shanu.setmarks(94.0 ,96.0);
shanu.disp();
return 0;

}