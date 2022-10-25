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
#define loop(i, m, n)               for(int i = m; i<n; i++)
#define loop_dec(i, m, n)           for(int i = m; i>=n; i--)
#define sort_inc(v)                 sort(all(v));
#define sort_dec(v)                 sort(all(v), greater<int>());
#define vivek_is_gr8                ios_base::sync_with_stdio(false) , cin.tie(NULL);


void solver(int start, int end, int n, int sum, vector<int> &v, int s[], int count, int one){

    if(start > end) return;
    if(one == sum){
        v.pb(count);
        return;
    }

    solver(start+1, end, n, sum , v, s, count+1, one - (s[start]));
    solver(start, end-1, n, sum , v, s, count+1, one - (s[end]));
}


void solve(){
    int n, sum;  cin>>n>>sum;
    int s[n];

    int one = 0;

    loop(i, 0, n){
        cin>>s[i];
        if(s[i]) one++;
    }

    vector<int> v;

    solver(0, n-1, n, sum, v, s, 0, one);

    if(v.size()){
        sort_inc(v);
        cout<<v[0]<<endl;
        return;
    }

    cout<<-1<<endl;
}

int main(){
    vivek_is_gr8
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



    test
    {
        solve();
    }


}
