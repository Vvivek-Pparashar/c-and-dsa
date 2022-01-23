#include <iostream>
using namespace std;

class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumofreal(Complex , Complex );
    int sumofcom(Complex , Complex );
};

class Complex
{
    int a, b;

    // for individual
    // friend int calculator :: sumofreal(Complex , Complex );
    // friend int calculator :: sumofcom(Complex , Complex );

    // for whole class
    friend class calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printdata()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator :: sumofreal(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator :: sumofcom(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setdata(4, 5);
    o2.setdata(1, 7);

    calculator cal, ca;
    int res =cal.sumofreal(o1, o2);
    cout<<"The sum of real part of o1 and o2 is  ::  "<<res<<endl;

    res =ca.sumofcom(o1, o2);
    cout<<"The sum of real part of o1 and o2 is  ::  "<<res<<endl;
}
