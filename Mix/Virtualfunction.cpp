#include <iostream>
#include <string.h>
using namespace std;

// making a class channel // 

class channel
{
protected:
    string title;
    float rating;

public:
    channel(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};

// Video derived from channel //

class video : public channel
{
    int videolength;

public:
    video(string s, float r, float vl) : channel(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title" << title << endl;
        cout << "Ratings :" << rating << "Out of 5 star ratings" << endl;
        cout << "The length of the video is" << videolength << "minutes" << endl;
    }
};
// Channeltext derived from channel //

class channeltext : public channel
{
    int words;

public:
    channeltext(string s, float r, int wc) : channel(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing video with title" << title << endl;
        cout << "Ratings :" << rating << "Out of 5 star ratings" << endl;
        cout << "No. of words in the video is :-" << words << "words" << endl;
    }
};

int main()
{

    string title;
    float rating, vlen;
    int words;
    // For video //
    title = "Django tutorial";
    vlen = 10.56;
    rating = 4.78;
    video djv(title, rating, vlen);
    //   djv.display();

    // For text //
    title = "Django tutorial text";
    words = 456;
    rating = 4.71;
    channeltext djt(title, rating, vlen);
    // djt.display();
    channel *tuts[2];
    tuts[0] = &djv;
    tuts[1] = &djt;
    tuts[0]->display();
    tuts[1]->display();
    // These displays are working only because of virtual function //
    return 0;
}