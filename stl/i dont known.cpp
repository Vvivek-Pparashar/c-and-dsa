#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,multiset<string> > m;

    int n;
    cin>>n;

    while(n--)
    {
        int mar;
        string name;

        cin>>name>>mar;
        m[mar].insert(name);
    }

    map<int,multiset<string> > :: iterator  it;
    it=(--m.end());

    while(true)
    {
        auto &student =(*it).second;
        auto &marks  =(*it).first;

        for(auto v : student)
        {
            cout<<v<<" "<<marks<<endl;
        }

        if(it==m.begin())  break;
        it--;
    }
}
