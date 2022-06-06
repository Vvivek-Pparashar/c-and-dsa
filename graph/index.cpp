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

// for matrix type this type is space kharchu....
void bfs(int a[][7], int i)
{
    int visited[7] = {0};
    cout<<i<<" ";
    visited[i] = 1;
    queue<int> q;
    q.push(i);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i = 1; i<= 6; i++){
            if(a[u][i] == 1 && visited[i] == 0){
                cout<<i<<" ";
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    cout<<endl;
}

void dfs(int a[][7], int u)
{
    static int visited[7] = {0};
    if(visited[u] == 0){
        cout<<u<<" ";
        visited[u] = 1;
        for(int i = 1; i<7; i++){
            if(a[u][i] == 1 && visited[i] == 0) dfs(a, i);
        }
    }
}

void dfs_iterative(int a[][7], int u)
{
    cout<<u<<" ";
    int visited[7] = {0};
    visited[u] = 1;
    stack<int> s;
    s.push(u);

    while(!s.empty()){
        u = s.top();
        s.pop();

        for(int i =1 ; i<7; i++){
            if(a[u][i] == 1 && visited[i] == 0){
                cout<<i<<" ";
                visited[i]= 1;
                s.push(u);  // this is for when all the elements are traveresed for that q and some of node is left so we have to go back
                s.push(i);
                break;
            }
        }
    }
}

int main()
{
    int a[7][7] = { {0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 1, 1, 0, 0, 0},
                    {0, 1, 0, 0, 1, 0, 0},
                    {0, 1, 0, 0, 1, 0, 0},
                    {0, 0, 1, 1, 0, 1, 1},
                    {0, 0, 0, 0, 1, 0, 0},
                    {0, 0, 0, 0, 1, 0, 0}
                  };
    cout<<"B.F.S of graph is iterative   ->   ";
    bfs(a, 2);
    cout<<"D.F.S of graph is recursive   ->   ";
    dfs(a, 2);
    cout<<endl;
    cout<<"D.F.S of graph is iterative   ->   ";
    dfs_iterative(a, 2);



}
