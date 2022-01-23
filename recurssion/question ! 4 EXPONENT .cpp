#include<bits/stdc++.h>
using namespace std;

int count=1;

int print(int n, int p)
{
    if(p==0) return 1;
    return n*print(n, p-1);
}

int main()
{
    int n, p;
    cin>>n>>p;

    cout<<print(n, p);
}
