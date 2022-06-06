//Code by Vivek Parashar
//      linkedin  -> vivek parashar

#include<bits/stdc++.h>
using namespace std;

#define fi                          first
#define se                          second
#define ll                          long long
#define mod                         1000000007
#define ull                         unsigned long long
#define po                          pop_back
#define pb                          push_back
#define mp                          make_pair
#define all(v)                      v.begin(), v.end()
#define test                        int t;  cin>>t; while(t--)
#define loop(i, n)                  for(int i = 0; i<n; i++)
#define sort_inc(v)                 sort(all(v));
#define sort_dec(v)                 sort(all(v), greater<int>());
#define vivek_is_great              ios_base::sync_with_stdio(false) , cin.tie(NULL);

void print(ll l){
    cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
}

void solve(){
    ll l, r;    cin>>l>>r;
    for(int i = l; i<= r-3; i++){
        if(i ^( i+1) ^ (i+2) ^ (i+3) == 0){
            for(int j = i; j<=i+3; j++) cout<<j<<" ";
            cout<<endl;
            return;
        }
    }

    cout<<-1<<endl;
}

int main(){
    vivek_is_great
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



    test
    {
        solve();
    }


}
