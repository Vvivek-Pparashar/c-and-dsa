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

int solver(int index, vll a, vll &dp){
    if(index == 0) return a[index];
    if(index == 1) return a[index];

    if(dp[index] != -1) return dp[index];

    int left = solver(index - 2, a, dp) + a[index];
    int right = -1;

    if(index - 3 >= 0) right =  solver(index - 3, a, dp) + a[index];

    return dp[index] = max(left, right);
}

void solve(){
    int n;  cin>>n;
    vll dp(n+1, -1);
    vll a(n);

    loop(i, n) cin>>a[i];

    int left = solver(n-1, a, dp);
    int right = solver(n-2, a, dp);

    cout<<max(left, right)<<endl;
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
