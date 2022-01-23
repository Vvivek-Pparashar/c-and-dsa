#include<bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for(int i=10;i>=0;--i)   cout<<((num>>i) & 1);
    cout<<endl;
}

// change the element into upper case to lower case.
// if we set the fifth bit then it would convert into lower case.
// if we unset it --> upper case.

int main()
{
    for(char c='A'; c<='E'; ++c)
    {
        cout<< c<< endl;
        printbinary(int(c));
    }

    for(char c='a'; c<='e'; ++c)
    {
        cout<< c<< endl;
        printbinary(int(c));
    }

    char c='A';
    char d='a';
    char a= (c | (1<<5));

    cout<<"Changing the element to lower case."<<endl;
    cout<<a<<endl;
    cout<<"Changing the element to upper case."<<endl;
    cout<<char(d & (~(1<<5)))<<endl;

    // the value of 1<<5 is occupy by space ' ';
    // we can change them ;

    cout<<char('C' | ' ')<<endl;
    cout<<char('c' & (~' '))<<endl;

    // or the ~' ' is '_' underscore so we can use it instead of ~space.

    cout<<char('c' & '_')<<endl;


    //last

    char B='B';
    cout<<(B |' ')<<endl;

    //upper case;

    cout<<char('c' & '_')<<endl;

}
