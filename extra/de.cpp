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

int solver_dp(int sum_alice, int sum_bob, int count_alice, int count_bob, int i, int n, int a[], int &temp){
    if(i == (n+1)/2){
        if(count_alice >= count_bob){
            if(sum_alice %2) return 0;
            cout<<"HERE"<<endl;
            temp = 1;
            return 1;
        }

        return 0;
    }

    if(solver_dp(sum_alice + (a[i]%2), sum_bob, count_alice + 1, count_bob, i+1, n, a, temp)) return 1;
    if(solver_dp(sum_alice, sum_bob + (a[i]%2), count_alice, count_bob + 1, i+1, n, a, temp)) return 1;

    return 0;
}


void solve(){
    int n;  cin>>n;
    int a[n];

    loop(i, n) {
        cin>>a[i];
    }

    int temp = 0;
    solver_dp(0, 0, 0, 0, 0, n, a, temp);

    if(temp) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;



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
