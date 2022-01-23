#include<bits/stdc++.h>
using namespace std;

//  int x=5;         give the same solun as the static variable

int func(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return func(n-1) + x;
    }
    return 0;
}

int main()
{
    cout<<func(5)<<endl<<func(5);   //     1st give -> 25    &     2nd give -> 50
}
