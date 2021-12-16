
// Here we will talk about virtual base class //
// It is used to solve the ambiguity //
/*
student --> Test
student --> sports
test --> result
sports --> result
*/

#include <iostream>
using namespace std;

// Class 1 //

class student
{
protected:
    int roll;

public:
    void setnum(int a)
    {
        roll = a;
    }
    void printnum(void)
    {
        cout << "Your roll number is " << roll << endl;
    }
};

// Class being inherited  //

class test : virtual public student
{
protected:
    float math, phy;

public:
    void setmarks(float m1, float m2)
    {
        math = m1;
        phy = m2;
    }
    void printmarks(void)
    {
        cout << "You have result :- "
             << "maths: " << math <<endl << "physics " << phy << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }
    void printscore(void)
    {
        cout << "Your score is :- " << score;
    }
};

class result : public test, public sports

{
private:
    float total;

public:
    void disp(void)
    {
        total = math + phy + score;
        printnum();
        printmarks();
        printscore();
        cout << "Your total score is :- " << total << endl;
    }
};

int main()

{
    result shanu;
    shanu.setnum(5011);
    shanu.setmarks(89.5, 86.7);
    shanu.setscore(9);
    shanu.disp();
    return 0;
}