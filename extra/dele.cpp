#include<bits/stdc++.h>
using namespace std;

int main(){
    set<pair<int, int> > s;

    s.insert({1, 2});
    s.insert({1, 3});
    s.insert({2, 2});
    s.insert({3, 2});

    priority_queue<pair<int, int> > p;

    for(auto it : s) cout<<it.first<<" "<<it.second<<endl;
}
