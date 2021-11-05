#include <iostream>
using namespace std;

// Here we will be doing the multi level inheritance //

class grandfather
{
    int emotions = 10;
    int eyes = 2;
    int ears = 2;

public:
    int nose = 1;

    void face()
    {
        cout<<"eyes : "<<eyes<<endl<<"ears "<<ears<<endl<<"emotions : "<<emotions<<endl<<"nose : "<<nose<<endl;
    }
};

class father : protected grandfather
{
protected:
    int power = 90;

public:
    void traits()
    {
        face();
    }
    void emotions()
    {
        cout << "Emotions are :" << emotions;
    }
};

class child : protected father
{
public:
    void characteristics()
    {
        traits();
    }
    void power()
    {
        cout << "Power is :" << power;
    }
};

int main()
{
    // grandfather g;
    // g.face();
    father f;
    f.emotions();
    // father f;
    // f.traits();
    // child c;
    // c.characteristics();
    return 0;
}