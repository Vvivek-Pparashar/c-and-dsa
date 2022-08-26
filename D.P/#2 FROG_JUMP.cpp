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

// ----------------------------     tabulation  -----------------------------------------------

int solver(int index, vector<int> a, vector<int> &dp){
    if(index == 0) return 0;
    if(dp[index] != -1) return dp[index];

    int left = solver(index - 1, a, dp) + abs(a[index] - a[index-1]);
    int right = INT_MAX;

    if(index > 1) right = solver(index - 2, a, dp) + abs(a[index] - a[index-2]);

    return dp[index] = min(left, right);
}

// ---------------------------------  Memorization  ---------------------------------------------
int solve(int ind, vector<int>& height, vector<int>& dp){
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int jumpTwo = INT_MAX;
    int jumpOne= solve(ind-1, height,dp)+ abs(height[ind]-height[ind-1]);
    if(ind>1)
        jumpTwo = solve(ind-2, height,dp)+ abs(height[ind]-height[ind-2]);

    return dp[ind]=min(jumpOne, jumpTwo);
}

//-------------------------------------   solver   -----------------------------------------
void solve(){
    int n;  cin>>n;
    vector<int> a(n);

    loop(i,n){
       cin>>a[i];
    }

    vector<int> dp(n+1, -1);

    cout<<solver(n-1, a, dp)<<endl;
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
