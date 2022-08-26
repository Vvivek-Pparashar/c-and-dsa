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

//  ---------------------------------------------------     MAIN CODE HERE   -------------------------------------------------------------------------  //

int fibo_dp(int n, vector<int> &dp){
    if(n<=1) return n;
    if(dp[n] != -1) return dp[n];

    return dp[n] = fibo_dp(n-1, dp) + fibo_dp(n-2, dp);
}
int main(){

    int n;  cin>>n;
    vector<int> dp(n+1, -1);

    cout<<fibo_dp(n, dp);
}
