#include<bits/stdc++.h>
using namespace std;

class A
{
    int a;
public:
    void setdata(int a)
    {
       this-> a=a;
    }

    void getdata()
    {
        cout<<"The value of a is equal to : "<<a<<endl;
    }
};
int main()
{
    A a;
    a.setdata(3);
    a.getdata();

}
