#include<bits/stdc++.h>
using namespace std;

class employ
{
    private:
        int a;
    public:
        int b,c;

        void setdata(int a1,int b1,int c1);
        void getdata()
        {
            cout<<"The value of a is equal to  "<<a<<endl;
            cout<<"The value of b is equal to  "<<b<<endl;
            cout<<"The value of c is equal to  "<<c<<endl;
        }
};

void employ :: setdata(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}


int main()
{
    employ harry;
    harry.setdata(1,2,3);
    harry.getdata();
    return 0;
}
