#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(void);
    void print(void)
    {
        cout<<"the complex number is  ::  "<<a<<" + "<<b<<"i";
    }
};

Complex :: Complex( void)
{
    b=9;
    a=509;
}
int main()
{
    Complex c;
    c.print();
}
