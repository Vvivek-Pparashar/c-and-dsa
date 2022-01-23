#include<bits/stdc++.h>
using namespace std;

class cwh
{
protected:
    string title;
    float vl;
public:
    cwh(string s, float l )
    {
        title =s;
        vl=l;
    }
    virtual void display(){}
};

class cwhvideo : public cwh
{
    int rating;
public:
    cwhvideo(string s, float l, int r) : cwh(s, l)
    {
        rating =r;
    }
    void display()
    {
        cout<<"This is an amazing video having title: "<<title<<endl;
        cout<<"length of video is : "<<vl<<" min"<<endl;
        cout<<"And having rating : "<<rating<<" out of 5 "<<endl;
    }
};

class cwhtext : public cwh
{
    int words;
public:
    cwhtext(string s, float l, int w) : cwh(s, l)
    {
        words=w;
    }
    void display()
    {
        cout<<"\nThis is an amazing video having title: "<<title<<endl;
        cout<<"length of video is : "<<vl<<endl;
        cout<<"total words in this "<<words<<" words"<<endl;
    }
};
int main()
{
    string title="c++ in one video";
    int rating = 5;
    float videol=10;
    int words = 1000;

    cwhvideo cplus( title, videol, rating);
    //cplus.display();

    cwhtext text(title, videol, words);
    //text.display();

    cwh* tuts[2];
    tuts[0]= &cplus;
    tuts[1]= &text;

    tuts[0]->display();
    tuts[1]->display();

}
