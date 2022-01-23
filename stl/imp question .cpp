#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string> ,vector<int> >  m;
    int n,q,x;
    string fn, sn;

    cin>>n;

    while(n--)
    {
        cin>>fn>>sn>>q;
        for(int i=0;i<q;i++)
        {
            cin>>x;
            m[{fn,sn}].push_back(x);
        }
    }

    for(auto &it: m)
    {
        auto &first = it.first;
        auto &second= it.second;

        cout<<endl<<first.first<<" "<<first.second<<" ";
        cout<<second.size()<<endl;

        for(auto &element : second)
        {
            cout<<element<<" ";
        }
    }



return 0;
}
