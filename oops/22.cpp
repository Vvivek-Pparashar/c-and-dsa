#include<bits/stdc++.h>
using namespace std;

class base1
{
    int a;
public:
    void greet()
    {
        cout<<"Hlo bro how are you  "<<endl;
    }
};

class base2
{
    int b;
public:
    void greet()
    {
        cout<<"I am fine what's about you "<<endl;
    }
};

class derived : public base1, public base2
{
    int c;
public:
    void greet()
    {
        base1 :: greet();
        base2 :: greet();
    }
};

int main()
{
    derived d;
    d.greet();
}
