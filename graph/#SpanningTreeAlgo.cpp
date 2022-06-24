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

void prims_solver(){
    vpll adj[5];

    adj[0].pb({1,2});
	adj[0].pb({3,6});
	adj[1].pb({0,2});
	adj[1].pb({2,3});
	adj[1].pb({3,8});
	adj[1].pb({4,5});
	adj[2].pb({1,3});
	adj[2].pb({4,7});
	adj[3].pb({0,6});
	adj[3].pb({1,8});
	adj[4].pb({1,5});
	adj[4].pb({2,7});

	vll parent(5, -1), visited(5, 0), key(5, INT_MAX);

	key[0] = 0;
	parent[0] = -1;

	loop(k, 4){
        int mini = 99999999, u;

        loop(i, 5){
            if(!visited[i] && key[i] < mini){
                u = i;
                mini = key[i];
            }
        }

        visited[k] = 1;

        for(auto it : adj[u]){
            if(!visited[it.fi] && it.se < key[it.fi]){
                key[it.fi] = it.se;
                parent[it.fi] = u;
            }
        }
	}

	for(auto it : parent){
        cout<<it<<" ";
	}

	cout<<endl;
}



void prims_solver_optimiser(){
    vpll adj[5];

    adj[0].pb({1,2});
	adj[0].pb({3,6});
	adj[1].pb({0,2});
	adj[1].pb({2,3});
	adj[1].pb({3,8});
	adj[1].pb({4,5});
	adj[2].pb({1,3});
	adj[2].pb({4,7});
	adj[3].pb({0,6});
	adj[3].pb({1,8});
	adj[4].pb({1,5});
	adj[4].pb({2,7});

	vll parent(5, -1), visited(5, 0), key(5, INT_MAX);
	priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;

	key[0] = 0;
	parent[0] = -1;
	pq.push({0, 0});

	while(!pq.empty()){
        pair<int, int> p = pq.top();
        pq.pop();

        for(auto it : adj[p.se]){
            if(!visited[it.fi] && it.se < key[it.fi]){
                key[it.fi] = it.se;
                parent[it.fi] = p.se;

                pq.push({key[it.fi], it.fi});
            }
        }
	}

	for(auto it : parent) cout<<it<<" ";
	cout<<endl;
}

int main(){
    prims_solver();
    prims_solver_optimiser();
}
