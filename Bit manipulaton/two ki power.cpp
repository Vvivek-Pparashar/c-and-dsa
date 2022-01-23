#include<bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for(int i=10;i>=0;--i)   cout<<((num>>i) & 1);
    cout<<endl;
}

int main()
{
    // if we want to check that the number is ppower of 2 or not;
    // if the if condition give non zero than means n contain more than 1 1
    // 2 ki power walle  1000 10000 100000 10 100 1000 ;
    // n-1 1111 111 111 111  and 1 bit less so always zero

    int n=15;
    if(n&(n-1))  cout<<"NOt a power of 2"<<endl;
    else cout<<"YES"<<endl;

    // if we want to change/ and n-->n+1 0--> 1 on which that occur first and flip all right bit then it will  add by 1
    // if we n-->n-1 then we start from left and first 1 ko-->0 and right walle ko flip side same processor.
S
}
