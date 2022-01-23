#include<bits/stdc++.h>
using namespace std;

void print(int n, string s[])
{
    if(n==0) return;

    print(n/10, s);
    cout<<s[n%10]<<" ";
}
int main()
{
    int n;
    cin>>n;

    string s[10]={"zero" , "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    print(n, s);
    return 0;
}
