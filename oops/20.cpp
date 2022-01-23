#include<bits/stdc++.h>
using namespace std;

class base1
{
protected:
    int a;
public:
    void setvaluea(int e)
    {
        a=e;
    }
};

class base2
{
protected:
    int b;
public:
    void setvalueb(int f)
    {
        b=f;
    }
};

class derived : public base1, public base2
{
public:
    void print()
    {
        cout<<"The value of a is ::  "<<a<<endl;
        cout<<"The value of b is ::  "<<b<<endl;
        cout<<"The value of c is ::  "<<a+b<<endl;
    }
};

int main()
{
    derived v;
    v.setvaluea(5);
    v.setvalueb(9);
    v.print();
}
