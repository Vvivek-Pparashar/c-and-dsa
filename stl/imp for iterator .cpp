#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    for(int &value : v)
    {
        value++;
        cout<<value<< " ";
    }

    cout<<endl;
    for(int value : v)
    {
        cout<<value<<" ";
    }

    cout<<endl<<endl<<endl;

    vector<pair<int,int> > v1 {{1,2},{2,3},{3,4}};
    for(auto &value : v1)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

    auto a=1.023;

    cout<<endl<<a;




    /********** imp **********

    we can use auto at any place, where we  dont want to declare the data type of the value;

    like

    auto a=1.02;

    here a is float;


    vector<int> :: interator  iter;
    for(it=v.begin()

            use that
            for(auto it= v.begin();)


            pair<int,int>

            auto */
}
