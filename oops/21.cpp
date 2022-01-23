#include<bits/stdc++.h>
using namespace std;

class simple_caluculator
{
protected:
    int a, b;
public:
    void utility(int x, int y)
    {
        a=x;
        b=y;
    }

    void display1(void)
    {
        cout<<"The sum of 2 number is :: "<<a+b<<endl;
        cout<<"The subtract of 2 number is :: "<<a-b<<endl;
        cout<<"The multiple of 2 number is :: "<<a*b<<endl;
        cout<<"The dividor of 2 number is :: "<<a/b<<endl<<endl;
    }
};


class scientific_caluculator
{
protected:
    int c, d;
public:
    void utility2(int x, int y)
    {
        c=x;
        d=y;
    }

    void display2(void)
    {
        cout<<"The modolous of 2 number is :: "<<c%d<<endl;
        cout<<"The log of 2 number is :: "<<log(c+d)<<endl;
        cout<<"The sin of 2 number is :: "<<sin(c*d)<<endl;
        cout<<"The cos of 2 number is :: "<<cos(c/d)<<endl<<endl;
    }
};

class hybrid_calculator : public simple_caluculator, public scientific_caluculator
{
public:
    void display()
    {
        utility(100, 5);
        utility2(100, 5);

        display1();
        display2();
        cout<<"This is a multiple inheritance"<<endl;
        cout<<"This is a public"<<endl;
    }
};

int main()
{
    hybrid_calculator h;
    h.display();
}
