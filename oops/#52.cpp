#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    int a;
    void dispaly()
    {
        cout<<"The value of base class is "<<a<<endl;
    }
};

class derived : public base
{
public:
    int b;
    void dispaly()
    {
        cout<<"The value of base class is "<<a<<endl;
        cout<<"The value of derived class is "<<b<<endl;
    }
};

int main()
{
    base * base_pointer;
    base A;
    derived B;
    base_pointer = &B;

    base_pointer->a=59;
    base_pointer->dispaly();

   // base_pointer->b=09; throw error

   derived *derived_pointer;
   derived_pointer = & B;
   derived_pointer->a=12;
   derived_pointer->b=112;

   derived_pointer->dispaly();

}

