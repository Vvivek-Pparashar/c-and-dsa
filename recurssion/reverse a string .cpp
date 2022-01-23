#include<bits/stdc++.h>
using namespace std;

void print(string s, int n)
{
    if(n==s.size()) return;
    print(s, n+1);
    cout<<s[n];
}

int main()
{
    string s;
    cin>>s;

    print(s, 0);
}
