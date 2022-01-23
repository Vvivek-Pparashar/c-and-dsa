#include <bits/stdc++.h>
using namespace std;

class y;

class x
{
    int data;

public:
    void setdata(int value)
    {
        data = value;
    }

    void display()
    {
        cout<<"the value of data is  :  :  "<<data<<endl;
    }

    friend void exchange(x &, y &);
};

class y
{
    int num;

public:
    void setdata(int value)
    {
        num = value;
    }

    void display()
    {
        cout<<"the value of num is  :  :  "<<num<<endl;
    }

    friend void exchange(x &, y &);
};

void exchange(x &a, y &b)
{
    int temp=a.data;
    a.data=b.num;
    b.num=temp;
}

int main()
{
    x a;
    a.setdata(4);

    y b;
    b.setdata(5);

    exchange(a, b);
    cout<<"the value of classes after exchange is  :::   ";
    a.display();

    cout<<"the value of classes after exchange is  :::   ";
    b.display();

}
