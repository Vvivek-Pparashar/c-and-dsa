#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int t;    cin>>t;
    while(t--){
        int n;  cin>>n;
        int a[n];

        for(int  i = 0; i<n; i++) cin>>a[i];
        sort(a, a+n);

        bool flag = true;

        for(int  i = 1; i<n; i++){
            if((a[i] - a[i-1]) > 1) flag = false;
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
