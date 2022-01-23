#include<bits/stdc++.h>
using namespace std;

// e^x= 1 + x/1! + x^2/2! + x^3/3! + ......   n term.

int fact(int n2)
{
    if(n2==0) return 1;
    else return n2*fact(n2-1);
}

int power(int x3, int n3)
{
    if(n3==0) return 1;
    return x3 * power(x3, n3-1);
}

int expo(int x1, int n1)
{
    if(n1==0) return 1;

    return power(x1, n1)/fact(n1)+expo(x1, n1-1);
}


int main()
{
    int x, n;
    cin>>x>>n;

    cout<<"The sum of e^"<<x<<" when the highest power is equal to "<<n<<"  ::  "<<expo(x, n);
}
