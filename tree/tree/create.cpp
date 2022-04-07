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

void display_pre(node *p){
    if(p){
        cout<<p->data<<" ";
        display_pre(p->lchild);
        display_pre(p->rchild);
    }
}

void display_in(node *p){
    if(p){
        display_in(p->lchild);
        cout<<p->data<<" ";
        display_in(p->rchild);
    }
}


void display_iteration_pre(){
    node *t = root;
    stack<node *> s;

    while(t || !s.empty()){
        if(t){
            cout<<t->data<<" ";
            s.push(t);
            t = t->lchild;
        }else{
            t = s.top();
            s.pop();

            t = t->rchild;
        }
    }
}

void display_iteration_in(){
    node *t = root;
    stack<node *> s;

    while(t || !s.empty()){
        if(t){

            s.push(t);
            t = t->lchild;
        }else{
            t = s.top();
            s.pop();

            cout<<t->data<<" ";

            t = t->rchild;
        }
    }
}


// count of a binary tree....
int count1(node *p){
    int x=0, y=0;
    if(p){
        x = count1(p->lchild);
        y = count1(p->rchild);

        return x+y+1;
    }
}

// HEIHGT OF A TREE.......
int height(node *p){
    int x=0, y=0;
    if(p){
        x = height(p->lchild);
        y = height(p->rchild);

        return (x>y ? x+1 : y+1);
    }
}

// ACCUMULATE OF A TREE.....

int accumulate(node *p){
    int x=0, y=0;
    if(p){
        x = accumulate(p->lchild);
        y = accumulate(p->rchild);

        return x + y + p->data;
    }
}

int counting_of_2deg(node *p){
    int x = 0, y = 0;
    if(p){
        x = counting_of_2deg(p->lchild);
        y = counting_of_2deg(p->rchild);

        if(p->lchild && p->rchild) return x+y+1;
        return x+y;
    }return 0;
}

int counting_of_0deg(node *p){
    int x = 0, y = 0;
    if(p){
        x = counting_of_0deg(p->lchild);
        y = counting_of_0deg(p->rchild);

        if(!p->lchild && !p->rchild) return x+y+1;
        return x+y;
    }return 0;
}

int counting_of_1deg(node *p){
    int x = 0, y = 0;
    if(p){
        x = counting_of_1deg(p->lchild);
        y = counting_of_1deg(p->rchild);

        if(p->lchild == NULL ^ p->rchild == NULL) return x+y+1;
        return x+y;
    }return 0;
}

int main()
{
    create();
    create_tree();

    display(root);
    //cout<<endl<<height(root) - 1; /// IT IS LEVEL AND WE KNOW THAT THE HEIGHT IS LEVEL -1;
    cout<<endl<<counting_of_2deg(root);
    cout<<endl<<counting_of_1deg(root);
    cout<<endl<<counting_of_0deg(root);
}
