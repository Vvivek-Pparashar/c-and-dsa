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

int parent[100], rankk[100];

void makeset(){
    loop(i, 10){
        parent[i] = i;
        rankk[i] = 0;
    }
}

int findParent(int node){
    if(parent[node] == node) return node;

    return  parent[node] = findParent(parent[node]);
}

void unionn(int u, int v){
    u = findParent(u);
    v = findParent(v);

    if(rankk[u] < rankk[v])    parent[u] = v;
    else if(rankk[u] > rankk[v])    parent[v] = u;
    else{
        parent[v] = u;
        rankk[u]++;
    }
}

int main(){
    makeset();
    int m;  cin>>m;
    while(m--){
        int u, v;   cin>>u>>v;
        unionn(u, v);
    }

    if(findParent(2) != findParent(3)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
