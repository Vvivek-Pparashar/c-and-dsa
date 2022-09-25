#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;

    long long z = 1;
    for(int i = 1; i<=n; i++){
        z = (i*z)%1000000007;
    }

    cout<<z<<endl;
}
