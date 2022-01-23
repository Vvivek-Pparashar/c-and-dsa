#include<bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for(int i=10; i>=0;i--)  cout<<((num>>i) & 1);
    cout<<endl;
}

int main()
{
    // bit set meaning is to that is there is 1 on the iht place or not if yes then the bit is set else no;
    // if we want to make a binary to set bit binary then we have to apply a or to make it a set bit for ith position;

    int a=-10, i=1;
    printbinary(a);

    if((a & (1<<i)) !=0) cout<<"SET BIT"<<endl;
    else cout<<"NO BIT"<<endl;

// -----  to convert it into set bit binary;

    a=(a | (1<<i));
    cout<<"here we change the value of a to a+1 to ith position : "<<a<<endl<<endl;
     printbinary(a);

// ----- to unset the binary to ith position;
     // 1st we can can apply not opration so we can invert the (i<<i);

     // example;

     cout<<"number is this : ";
     printbinary(i<<3);
     cout<<"invert of up is : ";
     printbinary(~(i<<3));

     // then we can use & operation with number so it can give us correct answer;
     //  10010 --> 10000 unset at 1 th position;
     //& 11101
     //  _____
     //  10000 --> this is our answer.

     cout<<"Un set bit is this : ";
     printbinary(a &(~(i<<3)));

// ---- if we want to toogle the 1th position then us xor;
    //  toggle means cange 1-->0 or 0-->1;

    cout<<"\nthis is toggled number  of 11 : "<<endl;
    printbinary(a ^ (1<<2));
    printbinary(a ^ (1<<3));

    // for check that how many 1 0r 0 is

    int count=0;

    for(int i=31;i>=0;i--)  if(((a>>i) & 1)) count++;
    cout<<"it is for a=13 : "<<count<<endl;

    // or this is build in

    cout<<__builtin_popcount(a)<<endl;

    // if we want to change/ and n-->n+1 0--> 1 on which that occur first and flip all right bit then it will  add by 1
    // if we n-->n-1 then we start from left and first 1 ko-->0 and right walle ko flip side same processor.

}
