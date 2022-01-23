#include<bits/stdc++.h>
using namespace std;

void print(vector<int>l s, int n, vector<int> v)
{
    if(n==s.size())
    {
        for(auto it : v)
        {
            cout<<it;
        }
        cout<<endl;
        return;
    }

    print(s, n+1, v);

    v.push_back(s[n]);

    print(s, n+1, v);
}

int main()
{
    vector<int> s;
    s={1, 2, 3};

    vector<int> v;
    print(s, 0, v);
}
