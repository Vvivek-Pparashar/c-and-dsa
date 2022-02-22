#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()


// MOST OF THE TIME WE USE THE POST ORDER FOR DOING ALL THE STUFF ON A TREE LIKE e.g. count, accumulate, etc........
class node
{
public:
    int data;
    node *lchild;
    node *rchild;
}*root;

class queue_arr{
public:
    int first;
    int rare;
    int size;

    node **a;
}*queue1;


void create(){
    queue1 = new queue_arr;
    queue1->first = queue1->rare = -1;
    queue1->size = 100;

    queue1->a = new node*[queue1->size];
}

void enqueue(node *p)
{
    queue1->rare++;
    queue1->a[queue1->rare] = p;
}

node* dequeue(){
    if(queue1->first == queue1->rare)  return NULL;
    else{
        queue1->first++;
        return queue1->a[queue1->first];
    }
}

int isempty(){
     return queue1->first == queue1->rare;
}

void create_tree(){
    node *p, *t;

    root = new node;
    cout<<"Enter the data for root ... ";
    cin>>root->data;

    root->lchild = root->rchild = NULL;

    enqueue(root);

    while(!isempty()){
        int x, y;
        p = dequeue();
        cout<<"enter the l-child of  "<<p->data<<endl;
        cin>>x;

        if(x != -1){
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;

            enqueue(t);
        }

        cout<<"enter the r-child of  "<<p->data<<endl;
        cin>>y;

        if(y != -1){
            t = new node;
            t->data = y;
            t->lchild = t->rchild = NULL;
            p->rchild = t;

            enqueue(t);
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
node *insert(node *p, int key){
    if(!p){
        node *t;
        t = new node;
        t->data = key;
        t->lchild = t->rchild = NULL;
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
