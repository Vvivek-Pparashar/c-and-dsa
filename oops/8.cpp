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

    friend void add(x, y);
};

class y
{
    int num;

public:
    void setdata(int value)
    {
        num = value;
    }

    friend void add(x, y);
};


void add(x o1, y o2)
{
    cout<<"sum of both is equal to  ::  "<<o1.data+o2.num;
}


int main()
{
    x a;
    a.setdata(4);

    y b;
    b.setdata(5);

    add(a, b);
}
