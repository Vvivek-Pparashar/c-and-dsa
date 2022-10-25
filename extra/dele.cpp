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
#define vivek_is_gr8                ios_base::sync_with_stdio(false) , cin.tie(NULL);

int gcd(int a, int b)
{
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}


void solve(){
    int n;  cin>>n;
    int a[n];

    loop(i, n) cin>>a[i];

    if(a[n-1]%2 == 0){
        for(int i = n-2; i>=0; i--){
            if(a[i]%2){
                int check = gcd(a[n-1], a[i]);
                if(check == 1){
                    cout<<n+i+1<<endl;
                    return;
                }
            }
        }

        cout<<-1<<endl;
        return;
    }else{
        if(a[n-1] == 1) cout<<2*n<<endl;
        else{
            for(int i = n-2; i>=0; i--){
                if(a[i]%2){
                    int check = gcd(a[n-1], a[i]);

                    if(check == 1){
                        cout<<n+i+1<<endl;
                        return;
                    }
                }else{
                    cout<<n+i+1<<endl;
                    return;
                }
            }

            cout<<-1<<endl;
            return;
        }
    }
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
