#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int a = 1;
    virtual void display()
    {
        cout<<"Here derived class is invoked " <<endl;
        cout<<"The value of a in base is :: "<<a<<endl;
    }
};

class B : public A
{
public:
    int b = 2;
    void display()
    {
        cout<<"\nHere derived class is invoked " <<endl;
        cout<<"The value of a in derived is :: "<<a<<endl;
        cout<<"The value of b in derived is :: "<<b<<endl;
    }
};

int main()
{
    A * ptr_base;
    A vivek;
    B parashar;

    ptr_base= & vivek;
    ptr_base->display();

    ptr_base= & parashar;
    ptr_base->display();
}

