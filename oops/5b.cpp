#include <bits/stdc++.h>
using namespace std;

class complexn
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void sumoftwodata(complexn o1, complexn o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printdata()
    {
        cout << "your complex number is like this  ::  " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complexn c1,c2,c3;
    c1.setdata(3, 6);
    c1.printdata();

    c2.setdata(4, 2);
    c2.printdata();

    c3.sumoftwodata(c1, c2);
    c3.printdata();

return 0;
}
