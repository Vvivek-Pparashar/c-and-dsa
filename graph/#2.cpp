
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

////////////////////////////////////////////////////////////////////
//                CHECK IF BIPATHAHTE OR NOT                      //
////////////////////////////////////////////////////////////////////

bool solve_bipathate(vector<int> &visited, vector<int> adj[], int i){
    queue<int> q;
    q.push(i);

    while(!q.empty()){
        int n = q.front();
        q.pop();

        for(auto it : adj[n]){
            if(visited[it] == -1){
                visited[it] = visited[n]^1;
                q.push(it);
            }else{
                if(visited[it] == visited[n]) return false;
            }
        }
    }

    return true;
}

bool solver_for_bypathic(vector<int> adj[]){
    vector<int> visited(8, -1);

    for(int i = 1; i<8; i++){
        if(visited[i] == -1){
            visited[i] = 1;
            if(!solve_bipathate(visited, adj, i))   return false;

        }
    }

    return true;
}

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

bool bypathic_dfs(vector<int> &visited, vector<int> adj[], int i){
    for(auto it : adj[i]){
        if(visited[it] == -1){
            visited[it] = visited[i] ^ 1;
            if(!bypathic_dfs(visited, adj, it)) return false;
        }else{
            if(visited[it] == visited[i]) return false;
        }
    }

    return true;
}

bool solver_for_bypathic_dfs(vector<int> adj[]){
    vector<int> visited(8, -1);
    for(int i = 1; i<8; i++){
        if(visited[i] == -1){
            visited[i] = 1;
            if(!bypathic_dfs(visited, adj, i)) return false;
        }
    }

    return true;
}

////////////////////////////////////////////////////////////////////
//              CYCLIC CHECK IN DIRECTED GRAPH                    //
////////////////////////////////////////////////////////////////////

bool solve_directed_cycle(vector<int> &visited, vector<int> &dfsVis, vector<int> adj_dir[], int i){
    dfsVis[i] = 1;
    visited[i] = 1;

    for(auto it : adj_dir[i]){
        if(!visited[it]){
            if(solve_directed_cycle(visited, dfsVis, adj_dir, it))   return true;
        }else if(dfsVis[it]){
            return true;
        }
    }

    dfsVis[i] = 0;
    return false;
}

bool solver_for_directed_dfs(){
    vector<int> adj_dir[10];
    adj_dir[1].pb(2);
    adj_dir[2].pb(3);
    adj_dir[3].pb(4);
    adj_dir[3].pb(6);
    adj_dir[4].pb(5);
    adj_dir[6].pb(5);
    adj_dir[7].pb(2);
    adj_dir[7].pb(8);
    adj_dir[8].pb(9);
    adj_dir[9].pb(7);

    vector<int> dfsVis(10, 0), visited(10, 0);

    for(int i = 1; i<10; i++){
        if(!visited[i]){
            if(solve_directed_cycle(visited, dfsVis, adj_dir, i))   return true;
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
    //adj[2].pb(5);
    adj[3].pb(1);
    adj[3].pb(4);
    adj[4].pb(2);
    adj[4].pb(3);
    adj[4].pb(5);
    //adj[5].pb(2);
    adj[5].pb(4);
    adj[6].pb(7);
    adj[7].pb(6);

    if(solver_for_bypathic(adj))    cout<<"BIPATTE using bfs"<<endl;
    else cout<<"NOT BIPATTE using bfs"<<endl;

    if(solver_for_bypathic_dfs(adj))    cout<<"BIPATTE using dfs"<<endl;
    else cout<<"NOT BIPATTE using dfs"<<endl;

    ////////////////////////////////////////////////////////////////////
    //              CYCLIC CHECK IN DIRECTED GRAPH                    //
    ////////////////////////////////////////////////////////////////////

    if(solver_for_directed_dfs()) cout<<"DIRECTED CYCLIC"<<endl;
    else cout<<"DIRECTED NOT CYCLIC"<<endl;

}
