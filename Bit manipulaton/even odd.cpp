#include<bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for(int i=6;i>=0;i--)   cout<<((num>>i) & 1);
    cout<<endl;
}

int main()
{
    for(int i=0;i<8;i++)
    {
        printbinary(i);

    // to check that number is even or odd.
    // & with number if 1 then odd else even.

    // %2 is very slow as compare to bit manipulation so we can use the this method for make is fast.
    // also (/) divisor is also slow.

    // if we want to multiply a number by 2 then we also can use the left shift to make it's multiplier.
    // if we want to divide the number by 2 then we also can use the right shift.
    //  cout<< (n>>1)<<endl; -- divide.
    //  cout<< (n<<1)<<endl; -- multiply.

        if(i&1) cout<<"ODD"<<endl;
        else cout<<"EVEN"<<endl;

    }
}
