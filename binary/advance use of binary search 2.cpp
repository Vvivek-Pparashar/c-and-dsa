#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int n,cows;
int p[N];

bool canplacecows(int mindist)
{
    int lastp=-1;
    int cows_ct=cows;
    for(int i=0;i<n;i++)
    {
        if(p[i]-lastp>=mindist)
        {
            cows_ct--;
            lastp=p[i];
        }
        if(cows_ct==0)break;
    }

    return cows_ct==0;

}
int main()
{
    int t;
    cin>>t;
     int lo=0, hi=1e9,mid;
    while(t--)
    {
        cin>>n>>cows;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        //  ttttttttttffffffffff


        while(hi-lo>1)
        {
            int mid=(hi+lo)/2;

            if(canplacecows(mid))   lo=mid;
            else   hi=mid-1;
        }
    }

    if(canplacecows(hi))
    {
        cout<<hi;
    }

    else
    {
        cout<<lo;
    }

}
