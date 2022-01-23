#include<bits/stdc++.h>
using namespace std;

void getbinary(int a[], int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j)) cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int x=4;
    int a[4]={5,20, 2 , 9};
    getbinary(a, x);
}

