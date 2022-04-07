#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    long long n = 1000;
    ll sum = 1;

    ll e = 998244353;

    for(int i = 1; i<=n/2; i++){
        ll max = (i*i)%e;
        sum *= max;
        sum %= e;
    }

    cout<<sum;
}

