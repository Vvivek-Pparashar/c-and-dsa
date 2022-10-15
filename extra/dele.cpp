//Code by Vivek Parashar
//      linkedin  -> vivek parashar

#include<bits/stdc++.h>
using namespace std;

#define fi                          first
#define se                          second
#define ll                          long long
#define pb                          push_back
#define po                          pop_back
#define mp                          make_pair
#define mod                         1000000007
#define ull                         unsigned long long
#define vll                         vector<long long>
#define endl                        "\n"
#define test                        int t;  cin>>t; while(t--)
#define vpll                        vector<pair<long long, long long> >
#define all(v)                      v.begin(), v.end()
#define prec(n)                     fixed<<setprecision(n)
#define bits(n)                     __builtin_popcount(n)
#define loop(i, n)                  for(int i = 0; i<n; i++)
#define sort_inc(v)                 sort(all(v));
#define sort_dec(v)                 sort(all(v), greater<int>());
#define vivek_is_great              ios_base::sync_with_stdio(false) , cin.tie(NULL);


void solve(){
    int n;  cin>>n;
    string s;   cin>>s;

    int temp[n+1];

    loop(i, n+1){
        if(i>0) temp[i] = (s[i-1] == '1');
    }

    int cost[n+1] = {0};

    for(int i = n; i>=1; i--){
        for(int j = i; j<=n; j+=i){
            if(temp[j]) break;
            cost[j] = i;
        }
    }

    ll count = 0;

    loop(i, n+1){
        if(!temp[i]) count += cost[i];
    }

    cout<<count<<endl;
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
