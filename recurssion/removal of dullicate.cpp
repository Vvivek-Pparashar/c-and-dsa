#include<bits/stdc++.h>
using namespace std;

void print(string s)
{
    if(s.size()==0) return;

    if(s[0]!=s[1])
    {
        cout<<s[0];
        //return print(s.substr(1));
    }

    return print(s.substr(1));
}
int main()
{
    string s;
    cin>>s;

    print(s);
}
