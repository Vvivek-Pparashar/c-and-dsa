#include<bits/stdc++.h>
using namespace std;

/*
   given array a of n integer. all integer except 1 are present in even count .find that one integer which has odd count in
   o(n) time and  o(1) space;
*/

int main()
{
    // in this qusetion we can do xor so all the number which has a even count will cancel out x^x=0

    int x;
    int b=0;
    for(int i=0;i<9;i++)
    {
        cin>>x;
        b=b^x;
    }

    cout<<b;
}
