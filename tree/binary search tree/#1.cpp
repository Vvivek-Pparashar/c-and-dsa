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

int ceil_(node *p, int key){
    int ceil = -1;
    while(p){
            if(p->data == key){
                ceil = p->data;
                return ceil;
            }

            if(p->data > key){
                ceil = p->data;
                p = p->left;
            }else{
                p = p->right;
            }
    }
    return ceil;
}

void insertion(node *p, node *q, int val){
    if(!p){
        node *z = new node;
        z->data = val;
        z->left = z->right = NULL;
        if(root){
            if(q->data > val)   q->left = z;
            else    q->right = z;
        }else{
            root = z;
        }

        return;
    }

    if(p->data > val) insertion(p->left, p, val);
    else insertion(p->right, p, val);
}

void display(node * p){
    if(p){
        cout<<p->data<<" ";
        display(p->left);
        display(p->right);
    }
}

int main(){
    //create();
    root = NULL;
    insertion(root, NULL, 5);
    insertion(root, NULL, 3);
    insertion(root, NULL, 7);
    insertion(root, NULL, 2);
    insertion(root, NULL, 4);
    insertion(root, NULL, 6);
    insertion(root, NULL, 8);
    insertion(root, NULL, 1);

    display(root);
}

