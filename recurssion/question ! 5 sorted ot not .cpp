#include<bits/stdc++.h>
using namespace std;

bool binary(int a[], int m)
{
    if(a[m]>a[m+1]) return false;
    else if(m==0) return true;

    return binary(a, m-1);

}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int ans = binary(a, n-2);
    cout<<(ans==0 ? "NOT SORTED" : "YES SORTED");
}
