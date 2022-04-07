#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *lchild;
    node *rchild;
}*root;


// creating the
void createpr(int a[], int n){
    stack<node *> s;
    node *p, *t;

    int i = 0;

    root = new node;
    root->data = a[i++];
    root->lchild = root->rchild =  NULL;
    p = root;

    while(i<n){
        if(p->data > a[i]){
            s.push(p);
            t = new node;
            t->data = a[i++];
            t->lchild = t->rchild = NULL;
            p->lchild = t;

            p = t;
        }else{
            if(s.empty()){
                t = new node;
                t->data = a[i++];
                t->lchild = t->rchild = NULL;
                p->rchild = t;
                p = t;
            }else{
                if(s.top()->data > a[i] && a[i] > p->data){
                    t = new node;
                    t->data = a[i++];
                    t->lchild = t->rchild = NULL;
                    p->rchild = t;
                    p = t;
                }else{
                    p = s.top();
                    s.pop();
                }
            }
        }
    }
}


////////////////////////////
////////////////////////////


// DELETION IN B.S.T........

int height(node *p){
    if(p){
        x = height(p->lchild);
        y = height(p->rchild);
    }
}

node *delete(node *p, int key)
{
    if(p == NULL){
        return NULL;
    }

    if(p->lchild == NULL && p->rchild == NULL){
        if(p == root) root = NULL;
        delete p;
        return NULL;
    }

    if(p->data > key) p->lchild = delete(p->lchild, key);
    else if(p->data < key) p->rchild = delete(p->rchild, key);
    else{
        if(height(p->lchild) < height(p->rchild)){
            node * q = inpre(p->lchild);
            p->data = q->data;

            p->lchild = delete(p->lchild, q->data);

        }
    }
}

//////////////////////////////
//////////////////////////////


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
    int a[8] = {30, 20, 10, 15, 25, 40, 50, 45};
    createpr(a, 8);

    display(root);

}

