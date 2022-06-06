

///////////////     ZIG ZAG, BOUNDARY, SIDE VIEW, VERTICAL, ROOT TO NODE, CHECK SYMM, LOWEST COMMON ANSESTOR      /////////////////////////////



#include<bits/stdc++.h>
using namespace std;

#define ll                          long long
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

///////////////////////////////////////////
///////////////////////////////////////////

/////  zigZag  //////////

void zigZag(){
    if(!root) return;

    vector<vector<int> > vf;
    queue<node *> q;

    q.push(root);

    bool left_right = 1;
    while(!q.empty()){
        vector<int> v(q.size());
        int n = q.size();
        loop(n){
            node *p = q.front();
            q.pop();

            int index = (left_right ? i : n - i - 1);
            v[index] = p->data;

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }

        left_right = !left_right;
        vf.pb(v);
    }

    for(auto it : vf){
        for(auto i : it){
            cout<<i<<" ";
        }

        cout<<endl;
    }
}

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

//boundry traversal

void addLeft(vector<int> &v){
    node *p = root->left;
    while(p){
        if(p->left || p->right)  v.pb(p->data);
        if(p->left) p = p->left;
        else p = p->right;
    }
}

void addRight(vector<int> &v){
    node *p = root->right;
    vector<int> temp;
    while(p){
        if(p->left || p->right)  temp.pb(p->data);
        if(p->right) p = p->right;
        else p = p->left;
    }

    for(int i = temp.size()-1; i>=0; --i)  v.pb(temp[i]);
}

void addLeaves(node *p, vector<int> &v){
    if(!p->left && !p->right){
      v.push_back(p->data);
      return;
    }

    if(p->left) addLeaves(p->left, v);
    if(p->right) addLeaves(p->right, v);
}

void boundary(vector<int> &v){
    if(!root) return;
    v.push_back(root->data);
    if(root->left || root->right){
        addLeft(v);
        addLeaves(root, v);
        addRight(v);
    }
}

//////////////////////////////////////////
//////////////////////////////////////////

////// VERTICLE ORDER TRAVERSAL ///////
void verticles(node *p, int i, int j, map<int, map<int, vector<int> > > &m){
    if(p){
        m[i][j].pb(p->data);
        verticles(p->left, i-1, j+1, m);
        verticles(p->right, i+1, j+1, m);
    }
}

//////////////////////////////////////////
//////////////////////////////////////////

//////  RIGHT / LEFT VIEW    /////////


void rightSideView(node *p){
    queue<node *> q;

    q.push(p);

    while(!q.empty()){
        int n = q.size();

        int last = 0;
        loop(n){
            node *p = q.front();
            q.pop();

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);

            last = p->data;
        }

        cout<<last<<" ";
    }
}

void leftSideView(node *p){
    queue<node *> q;

    q.push(p);

    while(!q.empty()){
        int n = q.size();

        int last = q.front()->data;
        loop(n){
            node *p = q.front();
            q.pop();

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }

        cout<<last<<" ";
    }
}

//////////////////////////////////////////
//////////////////////////////////////////

//////    check_symm      /////////

void check_symm(node *p, node*q, int &temp){
    if(p || q){
        if(p->data != q->data) {
            temp = 0;
            return;
        }

        check_symm(p->left, q->right, temp);
        check_symm(p->right, q->left, temp);

    }
}


/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

/////////////       ROOT TO NODE    /////////////////////

void find_path(node *p, vector<int> &v, int key){
    if(p){
        if(p->data == key){
            v.pb(p->data);
            return;
        }

        find_path(p->left, v, key);
        if(!v.size()) find_path(p->right, v, key);

        if(v.size()) v.pb(p->data);
    }
}

/////  2nd method  ///////

bool has_path(node *p, vector<int> &v, int x){
    if(!p) return false;

    v.pb(p->data);

    if(pl->data == x)  return true;

    if(has_path(p->left, v, x) || has_path(p->right, v, x))  return true;

    v.pop();
    return false;
}

// make func for its printing....


/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

/////////       LCA         //////////////////


node* lca(node *p, int a, int b){
    if(!p) return NULL;

    if(p->data == a || p->data == b) return p;

    node * left = lca(p->left, a, b);
    node * right = lca(p->right, a, b);

    if(!left) return right;
    else if(!right) return left;
    else    return p;
}


int main(){
    create();

    /*
    cout<<endl<<"ZIGZAG"<<endl;
    zigZag();

    ///////////////////////

    cout<<endl<<"verticles"<<endl;

    map<int, map<int, vector<int> > > m;
    verticles(root, 0, 1, m);

    cout<<"TOP"<<endl;
    for(auto it : m){
            for(auto i : it.second){
                for(auto j : i.second){
                    cout<<j<<" ";
                    break;
                }
                break;
            }
    }

    //////////////////////

    cout<<endl<<"bottom"<<endl;

    for(auto it : m){
        int last = 0;
        for(auto i : it.second){
            for(auto j : i.second){
                last = j;
            }
        }

        cout<<last<<" ";
    }

    /////////////////////////////

    cout<<endl<<endl<<"Side View"<<endl<<endl;

    cout<<"LEFT SIDE VIEW"<<endl;
    leftSideView(root);

    cout<<endl<<"RIGHT SIDE VIEW"<<endl;
    rightSideView(root);


    ///////////////////////
    cout<<endl<<endl<<"SYMM / MIRROR"<<endl;
    int temp = 1;
    check_symm(root->left, root->right, temp);

    if(temp) cout<<"YES SYMM / MIRROR"<<endl;
    else cout<<"NO it is symm"<<endl;


    */

    vector<int> v;
    find_path(root, v, 9);

    for(auto it : v) cout<<it<<" ";


}
