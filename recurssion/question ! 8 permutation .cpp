#include<bits/stdc++.h>
using namespace std;


void print_permutation(string str, int index)
{
    if(index == str.size())
    {
        cout<<str<<endl;
        return;
    }

    for(int i=index; i<str.length(); ++i)
    {
        swap(str[index], str[i]);
        print_permutation(str, index+1);

        swap(str[index], str[i]);
    }
}

int main()
{
    string s;
    cin>>s;

    cout<<"\n\n\n";
    print_permutation(s, 0);
}
