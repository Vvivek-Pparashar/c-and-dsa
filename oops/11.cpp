#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(int x, int y)
    {
         a=x;
         b=y;
    }

    Complex(int x)
    {
        a=x;
        b=007;
    }

    Complex()
    {
        a=0;
        b=0;
    }

    void print()
    {
        cout<<"Your input is  ::  "<<a<<", "<<b<<endl;
    }
};

int main()
{
    Complex o1(3, 34);
    Complex o2(5);

    o1.print();
    o2.print();

    Complex o3;
    o3.print();
}


// if we make 2 constructor and 1 take 1 argument and 2 take 1 int + int y=32;
// there fore here this cant work because both can possible to 1 case so our complier cant understand which one have to use...
