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

    friend distance(Complex o1, Complex o2);

    void print(void)
    {
        cout<<"Point is  ::  ("<<a<<", "<<b<<")"<<endl;
    }
};

distance(Complex o1, Complex o2)
{
    double r= (o1.a-o2.a)*(o1.a-o2.a) + (o1.b-o2.b)*(o1.b-o2.b);

    cout<<"The distance between is  ::  "<<sqrt(r);
}

int main()
{
    Complex o1(3, 0);
    Complex o2(0, 5);

    o1.print();
    o2.print();
    distance(o1, o2);
}
