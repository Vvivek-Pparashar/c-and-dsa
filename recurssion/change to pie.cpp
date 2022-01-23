#include<bits/stdc++.h>
using namespace std;

void print(string s)
{
    if(s.size()==0) return;

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        return print(s.substr(2));  // here substr m 1 condition iss liyae  h because ye hume end thek chaiyae...
    }

    else
    {
        cout<<s[0];
        return print(s.substr(1));
    }
}
int main()
{
    string s;
    cin>>s;

    print(s);
}
