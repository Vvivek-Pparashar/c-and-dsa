#include <iostream>
using namespace std;
class Complex{
    int a, b;
    friend Complex sumofboth(Complex o1, Complex o2);

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

Complex sumofboth(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, c4;
    c1.setdata(3, 4);
    c1.printdata();

    c2.setdata(5, 1);
    c2.printdata();

    c4=sumofboth(c1, c2);
    c4.printdata();
}
