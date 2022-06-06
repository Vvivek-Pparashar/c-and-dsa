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

class node{
public:
    int data;
    node *left;
    node *right;
}*root;


void create(){
    root = new node;
    root->data = 1;
    root->left = root->right = NULL;

    queue<node *> q;
    q.push(root);

    while(!q.empty()){
        node *p = q.front();
        q.pop();

        int x, y;
        cout<<"Enter the value for left of  "<<p->data<<endl;
        cin>>x;

        if(x != -1){
            node *qu = new node;
            qu->data = x;
            qu->left = qu->right = NULL;

            p->left = qu;

            q.push(qu);


        }

        cout<<"Enter the value for right of  "<<p->data<<endl;
        cin>>y;

        if(y != -1){
            node *qu = new node;
            qu->data = y;
            qu->left = qu->right = NULL;

            p->right = qu;

            q.push(qu);
        }
    }
}

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

/////////       width of the tree         //////////////////

void level(node *p){
    queue<pair<node *, int> > q;
    pair<node*, int> pa;
    pa.fi = p;
    pa.se = 1;

    q.push(pa);

    vector<vector<int> > v;

    while(!q.empty()){
        int n = q.size();
        int i = q.front().se;

        vector<int> temp;
        loop(n){
            int index = q.front().se;
            node *p = q.front().fi;
            q.pop();

            if(p->left)     q.push({p->left, 2*(index-1)});
            if(p->right)    q.push({p->right, 2*(index - 1) + 1});

            temp.pb(index);
        }

        v.pb(temp);
    }

    int width = 1;
    for(auto it : v){
        int first = it[0];
        int last = 0;
        for(auto i : it){
            last = i;
        }
        if((last - first + 1) > width)  width = last - first + 1;
    }

    cout<<width<<endl;
}



/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

/////////        CHILDREN SUM         //////////////////



void children_sum(node *p){
    if(p){
        int x = (p->left ? p->left->data : 0);
        int y = (p->right ? p->right->data : 0);

        if(x || y){
            if((x + y) < p->data){
                if(p->left)  p->left->data = p->data;
                if(p->right) p->right->data = p->data;
            }
        }

        children_sum(p->left);
        children_sum(p->right);

        int tot = 0;
        if(p->left) tot += p->left->data;
        if(p->right) tot += p->right->data;

        if(p->left || p->right) p->data = tot;
    }
}

void preorder(node *p){
    if(p){
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}
int main(){
    create();
    level(root);
    children_sum(root);

    preorder(root);
}
