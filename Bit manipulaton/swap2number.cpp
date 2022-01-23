#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=4, b=6;

    /*
    properties
     1. x^x =0
     2. x^0 =x
     3. a^(a^b)= a^a^b= 0^b= b;
    */

    a=a^b;

    b=b^a;
    // b=b^(b^a) --> b^b^a --> 0^a --> a;

    a=a^b;
    // a=(a^b)^a --> 0^b--> b;

    cout<<a<<" "<<b;
}
