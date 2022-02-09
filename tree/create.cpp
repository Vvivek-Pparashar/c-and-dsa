#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

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


int main()
{
    create();
    create_tree();

    display(root);
}
