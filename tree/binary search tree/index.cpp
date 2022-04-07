#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

class node{
public:
    int data;
    node *lchild;
    node *rchild;
}*root;

void create(){
    root = new node;
    cout<<"Value for root data  ..  ";
    cin>>root->data;
    root->lchild = root->rchild = NULL;

    queue<node *> q;
    q.push(root);

    while(!q.empty()){
        node *p = q.front();
        q.pop();

        int x, y;
        cout<<"Enter the lchild for  "<<p->data<<"  ...  ";
        cin>>x;

        if(x != -1){
            node *t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            q.push(t);

            p->lchild = t;
        }

        cout<<"Enter the rchild for  "<<p->data<<"  ...  ";
        cin>>y;

        if(y != -1){
            node *t = new node;
            t->data = y;
            t->lchild = t->rchild = NULL;
            q.push(t);

            p->rchild = t;
        }
    }
}

void display(node *p)
{
    if(p){
        cout<<p->data<<" ";
        display(p->lchild);
        display(p->rchild);
    }
}

// RECURSIVE SEARCH IN BINARY TREE....
node *recursive_search(node *p, int key){
    if(p){
        //return (p->data == key ? p : recursive_search((p->data > key ? p->lchild : p->rchild), key));  -------FOR ONE LINE CODE....-------
        if(key == p->data) return p;
        else if(key < p->data) return recursive_search(p->lchild, key);
        return recursive_search(p->rchild, key);
    }
    return NULL;
}

// ITERATIVE SEARCH IN BINARY TREE.....
node *iterative_search(node *p, int key){
    while(p){
        if(p->data == key) return p;
        else if(p->data > key) p = p->lchild;
        else p = p->rchild;
    }
    return NULL;
}

// INSERTION IN BINARY SEARCH TREE....
void inserting(int key){
    node *p = root;
    node *last = NULL;

    while(p){
        last = p;
        if(p->data == key) return;
        else if(p->data > key) p = p->lchild;
        else p = p->rchild;
    }

    node *new1 = new node;
    new1->data = key;
    new1->lchild = new1->rchild = NULL;

    if(key > last->data) last->rchild = new1;
    else last->lchild = new1;
}

// CREATE BINARY TREE BY INSERTION RECURSIVE......
/// isme humne root isiye nahi liya because this will always return root so main me root = insert(df) kar denge....
node *insert(node *p, int key){
    if(!p){
        node *t;
        t = new node;
        t->data = key;
        t->lchild = t->rchild = NULL;

        if(!root)
        return t;
    }

    else if(p->data > key){
        p->rchild = insert(p->rchild, key);
    }else if(p->data < key){
        p->lchild = insert(p->lchild, key);
    }

    return p;
}


// CREATE BINARY TREE BY INSERTION ITERATIVE......
void insert_iterator1(int key){
    node *p = root;
    node *r, *t;

    if(!p){
        t = new node;
        t->data = key;
        t->lchild = t->rchild = NULL;

        root = t;
        return;
    }

    while(p){
        r = p;
        if(p->data > key) p = p->lchild;
        else if(p->data < key) p = p->rchild;
        else return;

    }

    t = new node;
    t->data = key;
    t->lchild = t->rchild = NULL;

    if(key > r->data) r->rchild = t;
    else r->lchild = t;
}


int main()
{
    //create();
    //create_tree();

    //root = insert(root, 2);   // this is recursive type example......
    insert_iterator1(1);
    insert_iterator1(2);
    insert_iterator1(6);
    insert_iterator1(3);
    insert_iterator1(9);

    //inserting(12);

    display(root);
    //cout<<endl;
   //display(root);
}
