#include<bits/stdc++.h>
using namespace std;

double vi=10e-7;

int main()
{
    double a;
    cin>>a;

    double hi=a,lo=0,mid;

    while(hi-lo>vi)
    {
        mid=(hi+lo)/2;
        {
            if(mid*mid<a)
            {
                lo=mid;
            }

            else
            {
                hi=mid;
            }
        }
    }

    cout<<lo<<endl;
    cout<<pow(a,1.0/2)<<endl;
}
