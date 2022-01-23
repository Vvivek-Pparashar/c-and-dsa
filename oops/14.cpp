#include<bits/stdc++.h>
using namespace std;

class number
{
    int num;
public:
    number()
    {
        num=0;
    }

    number(int a)
    {
        num=a;
    }

    number(number &obj)
    {
        cout<<"Your number has called!!!!!!!";
        num=obj.num;
    }

    void display()
    {
        cout<<"your number is  "<<num<<endl;
    }
};

int main()
{
    number e(7), r, t(34);
    r.display();
    e.display();
    t.display();

    number z(e);
    z.display();

}
