#include<bits/stdc++.h>
using namespace std;

class base1
{
    int data1;
public:
    base1(int a)
    {
        data1=a;
        cout<<"Base1 constructor is run "<<endl;
    }

    void printdata1()
    {
        cout<<"The value of data1 is  :  "<<data1<<endl;
    }
};


class base2
{
    int data2;
public:
    base2(int a)
    {
        data2=a;
        cout<<"Base2 constructor is run "<<endl;
    }

    void printdata2()
    {
        cout<<"The value of data2 is  :  "<<data2<<endl;
    }
};

class derived : public base2, public base1
{
    int der1, der2;
public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        der1=c;
        der2=d;

        cout<<"Derived class constructor is called ::"<<endl;
    }

    void printderived()
    {
        printdata1();
        printdata2();
        cout<<"The value of derived 1&2 is : "<<der1<<"  "<<der2<<endl;
    }
};

int main()
{
    derived vivek(1, 2, 3, 4);
    vivek.printderived();
}
