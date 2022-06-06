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
#define loop(n)                     for(int i = 0; i<n; i++)
#define sort_inc(v)                 sort(all(v));
#define sort_dec(v)                 sort(all(v), greater<int>());
#define vivek_is_great              ios_base::sync_with_stdio(false) , cin.tie(NULL);

int main(){
    vivek_is_great

    test
    {
       int n, m;    cin>>n>>m;
       vector<vector<int > > v(n, vector<int> (m));

       loop(n){
           for(int j = 0; j<m; j++){
               cin>>v[i][j];
           }
       }

       vector<int> bad;

       for (int i = 0; i < n && bad.empty(); i++) {
           vector<int> a = v[i];
           for(int j = 0; j<m; j++){
               if(a[i] != v[i][j]) bad.pb(j);
           }
       }

       if(bad.size() == 0) cout<<1<<" "<<1<<endl;
       else if(bad.size() >2) cout<<-1<<endl;
       else{
           loop(n){
               swap(v[i][bad[0]], v[i][bad[1]]);
           }

           int temp = 0;

           loop(n){
               for(int j = 0; j<m-1; j++){
                   if(v[i][j] > v[i][j+1]){ temp = 1; break; }
               }
           }

           if(temp) cout<<-1<<endl;
           else cout<<bad[0]<<" "<<bad[1]<<endl;
       }

    }


}
