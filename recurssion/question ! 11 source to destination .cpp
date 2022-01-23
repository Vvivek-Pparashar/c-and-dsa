#include<bits/stdc++.h>
using namespace std;

int task=0;

void trace(int x, int y, int z, int a)
{
    if(x==z && y==a)
    {
        task++;
        return;
    }

    else if(x>z || y>a) return;

    trace(x+1, y, z, a);
    trace(x, y+1, z, a);
}

int main()
{
    int x=0, y=0;
    int z, a;

    cin>>z>>a;

    trace(x, y , z, a);
    cout<<task;
}
