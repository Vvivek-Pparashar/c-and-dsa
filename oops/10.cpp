#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;
public:
    Complex(int , int);
    void print(void)
    {
        cout<<"the complex number is  ::  "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(int x, int y)
{
    b=x;
    a=y;

}
int main()
{
    Complex a(12,34);
    Complex b=Complex(43,56);
    a.print();
    b.print();
}
