#include<bits/stdc++.h>
using namespace std;

bool compaitor(pair<int,int> a, pair<int,int> b)
{
    if(a.first!=b.first)
    {
        if(a.first>b.first){
            return true;
        }
        return false;
    }

    else
    {
       if(a.second<b.second)
       {
           return true;
       }
       return false;
    }
}


int main()
{
    int n;
    cin>>n;

    vector<pair<int,int> > a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end(),compaitor);

    for(auto it : a)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
}
