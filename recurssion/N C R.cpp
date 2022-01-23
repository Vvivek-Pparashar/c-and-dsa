#include<bits/stdc++.h>
using namespace std;

int ncr(int x, int y)
{
    if(y==0 || y==x)
        return 1;
    else
        return ncr(x-1, y-1) + ncr(x-1, y);
}

int main()
{
    int x, y;
    cin>>x>>y;

    cout<<ncr(x, y);
}
