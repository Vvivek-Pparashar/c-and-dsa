#include<bits/stdc++.h>
using namespace std;

// using static variable.. In this we are approach to 0 then 1 then.... N ?  but in previous method we are adding the number from the last and
// end at base condition.

double tayler(int x, int n)
{
    static double p=1, f=1;
    double r;
    if(n==0)
        return 1;

    r=tayler(x, n-1);  // these are multiplied after this number so that the number is starting from the 0th.
    p*=x;
    f*=n;
    return r+p/f;
}

int main()
{
    int x, n;
    cin>>x>>n;

    cout<<tayler(x, n);
}
