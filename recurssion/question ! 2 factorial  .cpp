 #include<bits/stdc++.h>
using namespace std;

int print(int n)
{
    if(n==0)  return 1;
    return n*print(n-1);
}

int main()
{
    long long n;
    cin>>n;

    cout<<print(n);
}

