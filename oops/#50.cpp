#include<bits/stdc++.h>
using namespace std;

class sum
{
    int x, y;
public:
    void setdata(int a, int b)
    {
        x=a;
        y=b;
    }

    void getdata()
    {
        cout<<"The value of x is equal to : "<<x<<endl;
        cout<<"The value of y is equal to : "<<y<<endl<<endl<<endl;

    }
};

int main()
{
   //sum v;
   //sum *ptr = &v;
   //(*ptr).setdata(1,2);
   //(*ptr).getdata();

    sum *ptr = new sum;

    //(*ptr).setdata(1,2);
    //(*ptr).getdata();

    //   or

    ptr->setdata(1,2);
    ptr->getdata();

     /*sum *ptr1 = new sum[3];
     ptr1->setdata(2,3);
     ptr1->getdata();

     (ptr1+1)->setdata(3,4);
     (ptr1+1)->getdata();

     (ptr1+2)->setdata(4,5);
     (ptr1+2)->getdata();*/

     sum *ptr1 = new sum[3];

     for(int i=0;i<3;i++)
     {
         (ptr1+i)->setdata(i+i+2,i+i+3);
         (ptr1+i)->getdata();
     }



}
