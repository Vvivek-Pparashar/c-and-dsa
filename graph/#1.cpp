// DFS > BFS > CYCLIC FOR BOTH......

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


vector<int> bfs_tra(int v, vector<int> adj[]){
    vector<int> bfs;
    vector<int> visited(v, 0);
    for(int i = 1; i<v; i++){
        if(!visited[i]){
            queue<int> q;
            q.push(i);

            visited[i] = 1;

            while(!q.empty()){
                int n = q.front();
                q.pop();

                bfs.pb(n);

                for(auto it : adj[n]){
                    if(!visited[it]) {
                        q.push(it);
                        visited[it] = 1;
                    }
                }
            }
        }
    }

    return bfs;
}

void dfs(vector<int> &visited, vector<int> adj[], vector<int> &dfs_tr, int i){
    dfs_tr.pb(i);
    visited[i] = 1;

    for(auto it : adj[i]){
        if(!visited[it]){
            dfs(visited, adj, dfs_tr, it);
        }
    }
}

//FOR DFS CYCLIC

bool solve_cyclic(vector<int> &visited, vector<int> adj[], int prev, int i){
    visited[i] = 1;

    for(auto it : adj[i]){
        if(visited[it] && prev != it){
            return true;
        }

        if(!visited[it]){
            if(solve_cyclic(visited, adj, i, it))   return true;
        }
    }

    return false;
}

// FOR BFS CYCLIC
bool solve_cyclic_bfs(vector<int> &visited, vector<int> adj[], int i){
    queue<pair<int, int> > q;
    q.push({i, -1});

    while(!q.empty()){
        int t = q.front().fi;
        int prev = q.front().se;

        q.pop();

        for(auto it : adj[t]){
            if(visited[it] && it!= prev) return true;
            if(!visited[it]){
                q.push({it, t});
                visited[it] = 1;
            }
        }
    }

    return false;
}

bool solver_for_cyclic_BFS(vector<int> adj[]){
    vector<int> visited(8, 0);

    for(int i = 1; i<8; i++){
        if(!visited[i]){
                visited[i] = 1;
            if(solve_cyclic_bfs(visited, adj, i)) return true;
        }
    }

    return false;
}

int main()
{
    vector<int> adj[8];
    adj[1].pb(2);
    adj[1].pb(3);
    adj[2].pb(1);
    adj[2].pb(4);
    adj[2].pb(5);
    adj[3].pb(1);
    adj[3].pb(4);
    adj[4].pb(2);
    adj[4].pb(3);
    adj[4].pb(5);
    adj[5].pb(2);
    adj[5].pb(4);
    adj[6].pb(7);
    adj[7].pb(6);

    /*

    *******BFS SEARCH IN GRAPH

    vector<int> v = bfs_tra(8, adj);
    for(auto it : v) cout<<it<<" ";
    cout<<endl;

    *******DFS SEARCH IN GRAPH

    vector<int> visited(8, 0);
    vector<int> dfs_tr;

    for(int i = 1; i<8; i++){
        if(!visited[i]){
            dfs(visited, adj, dfs_tr, i);
        }
    }

    for(auto it : dfs_tr) cout<<it<<" ";

    */

    // Cyclic using DFS traversal..

    /*
    vector<int> visited(8, 0);
    int temp = 1;

    for(int i = 1; i<8; i++){
        if(!visited[i]){
            if(solve_cyclic(visited, adj, -1, i)) { cout<<"YES"<<endl;  temp = 0; break;  }
        }
    }

    if(temp) cout<<"NO"<<endl;
    */

    cout<<solver_for_cyclic_BFS(adj)<<endl;
}

