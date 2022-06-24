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
    int a[4];
    int x;

    string s;   cin>>s;

    a[0] = s[0] - '0';
    a[1] = s[1] - '0';
    a[2] = s[3] - '0';
    a[3] = s[4] - '0';

    cin>>x;

    int t = 0;
    int y = x/60;
    int z = x%60;

    int count = 0;
    int prev =  a[2]*10 + a[3];

    if(a[0] == a[3] && a[1] == a[2])    count++;

    while((t+x) < 1440){
        t += x;

        int hr = a[0]*10 + a[1];
        int min = a[2]*10 + a[3];
        int power = ((min + z)/60 ? 1 : 0);

        if((min+z)%60 < 10){
            a[2] = 0;
            a[3] = (min+z)%60;
        } else{
            a[2] = ((min+z)%60)/10;
            a[3] = ((min+z)%60)%10;
        }

        if((hr + y + power)%24 < 10){
            int rr = (hr + y + power)%24;
            a[0] = 0;
            a[1] = (rr)%10;
        }else{
            int rr = (hr + y + power)%24;
            a[0] = (rr)/10;
            a[1] = (rr)%10;
        }

        if(a[0] == a[3] && a[1] == a[2])    count++;

        cout<<60 - prev-min<<endl;
        prev = min;

        cout<<a[2]<<a[3]<<endl;

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
