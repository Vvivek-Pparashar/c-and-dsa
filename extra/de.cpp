#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin>>t;
    while(t--){

        int n;  cin>>n;
        string s;   cin>>s;

        set<char> se;

        for(int i =0; i<n; i++){
            se.insert(s[i]);
        }

        cout<<n+se.size()<<end;
    }
}
