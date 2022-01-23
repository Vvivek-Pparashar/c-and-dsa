#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>  s;
    s.insert(4);
    s.insert(454);
    s.insert(45325432);
    s.insert(54);
    s.insert(35634);

    auto it =s.find(34);

    for(int al : s)
    {
        cout<<al<<endl;
    }

    s.erase(4);

    cout<<endl<<endl;

    for(int al : s)
    {
        cout<<al<<endl;
    }

//              ********* in multiset we can use multiple value in set ***************




}
