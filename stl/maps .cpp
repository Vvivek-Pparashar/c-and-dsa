#include<bits/stdc++.h>

//***   all the value are unique in map and time complaxity of insertion is o(logN)  and access or print time is also o(logN)   *************************;
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}

void print1(unordered_map<int,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}


int main()
{
    map<int,string>  m;;
    m[1]="ABC";
    m[0]="CDF";
    m[0]="FDD";
    m.insert({4,"vivek"});

    string s;
    cin>>s;
    m.insert({5,s});

    print(m);

    auto it =m.find(3);

    if(it==m.end())
    {
        cout<<"NO VALUE ";
    }

    else{cout<<(*it).first<<" "<<(*it).second;}

    //********************unordered maps******************

    cout<<endl<<endl<<endl<<endl;

    unordered_map<int,string>  m1;
    m1[1]="ABC";
    m1[0]="CDF";
    m1[0]="FDD";
    m1.insert({4,"vivek"});

    print1(m1);




}

/*

m[name]=m[name]+marks;

m.erase(name)  right
m.erase("name")  wrong
*/
