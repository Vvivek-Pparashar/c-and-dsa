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

void sortest_path_solver_bfs(vector<int> adj[], int start){
    queue<int>  q;
    vector<int> min_path(9, 99999999);

    min_path[start] = 0;
    q.push(start);

    while(!q.empty()){
        int n = q.front();
        q.pop();

        for(auto it : adj[n]){
            if((min_path[n] +1 ) < min_path[it]){
                min_path[it] = min_path[n] + 1;
                q.push(it);
            }
        }
    }

    for(auto it : min_path) cout<<it<<" ";
    cout<<endl;
}

//  Sortest path in directed graphs........

void topology_dfs(stack<int> &s, vector<int> &visited, vector<pair<int, int> > adj[], int i){
    visited[i] = 1;

    for(auto it : adj[i]){
        if(!visited[it.fi])    topology_dfs(s, visited, adj, it.fi);
    }

    s.push(i);
}

void list_for_directed(int src){
    vector<pair<int, int> > adj[6];
    adj[0].pb({1, 2});
    adj[0].pb({4, 1});
    adj[1].pb({2, 3});
    adj[2].pb({3, 6});
    adj[4].pb({2, 2});
    adj[4].pb({5, 4});
    adj[5].pb({3, 1});

    stack<int> s;
    vector<int> min_dis(6, 99999999), visited(6, 0);
    int inf = 9999999;

    loop(6){
        if(!visited[i]) topology_dfs(s, visited, adj, i);
    }

    min_dis[src] = 0;

    while(!s.empty()){
        int n = s.top();
        s.pop();

        if(min_dis[n] != inf){
            for(auto it : adj[n]){
                if((min_dis[n] + it.se ) < min_dis[it.fi])  min_dis[it.fi] = (min_dis[n] + it.se );
            }
        }
    }

    for(auto it : min_dis){
        if(it == inf) cout<<"inf"<<" ";
        else cout<<it<<" ";
    }

    cout<<endl;
}

void list_for_sortest_path(){
    vector<int> adj[9];
    adj[0].pb(1);
    adj[0].pb(3);
    adj[1].pb(0);
    adj[1].pb(2);
    adj[1].pb(3);
    adj[2].pb(1);
    adj[2].pb(6);
    adj[3].pb(0);
    adj[3].pb(1);
    adj[3].pb(4);
    adj[4].pb(3);
    adj[4].pb(5);
    adj[5].pb(4);
    adj[5].pb(6);
    adj[6].pb(2);
    adj[6].pb(5);
    adj[6].pb(7);
    adj[6].pb(8);
    adj[7].pb(6);
    adj[7].pb(8);
    adj[8].pb(6);
    adj[8].pb(7);

    sortest_path_solver_bfs(adj, 4);
}

void dijastra_algo(){
    int n=5,m=6,source=1;
	vector<pair<int,int> > g[n+1];

	g[1].push_back({2,2});
	g[1].push_back({4,1});
	g[2].push_back({1,2});
	g[2].push_back({5,5});
	g[2].push_back({3,4});
	g[3].push_back({2,4});
	g[3].push_back({4,3});
	g[3].push_back({5,1});
	g[4].push_back({1,1});
	g[4].push_back({3,3});
	g[5].push_back({2,5});
	g[5].push_back({3,1});


	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> pq;
	vector<int> distTo(n+1,INT_MAX);

	distTo[source] = 0;
	pq.push(make_pair(0,source));

	while( !pq.empty() ){
		int dist = pq.top().first;
		int prev = pq.top().second;
		pq.pop();
		for(auto it : g[prev]){
			int next = it.first;
			int nextDist = it.second;
			if( distTo[next] > distTo[prev] + nextDist){
				distTo[next] = distTo[prev] + nextDist;
				pq.push(make_pair(distTo[next], next));
			}
		}
	}
	cout << "The distances from source " << source << " are : \n";
	for(int i = 1 ; i<=n ; i++)	cout << distTo[i] << " ";
	cout << "\n";
}

int main(){
    list_for_sortest_path();
    list_for_directed(0);

    dijastra_algo();

}
