#include<bits/stdc++.h>
using namespace std;

int total_ways(int n)
{
    if(n<0) return 0;
    else if(n==0) return 1;

    return total_ways(n-1)+ total_ways(n-2)+total_ways(n-3);
}

int main()
{
    int n;
    cout<<"Total number of stairs are : ";
    cin>>n;

    cout<<"Total number of jump is equal to  ::  "<<total_ways(n);
}
