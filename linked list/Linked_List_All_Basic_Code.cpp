#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

//----------------->   CLASS     <-----------------

class node
{
public:
    int data;
    node *next;
}*first;

//----------------->   DISPLAY   <-----------------

void display(node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

//----------------->   CREATE    <-----------------

void create(node *first)
{
    node *last, *t;

    last = first;

    for(int i=0;i<4;i++)
    {
        node *t;
        t = new node;
        t->data = (i+2);
        t->next = NULL;

        last->next = t;
        last = t;
    }
}


//----------------->   INSERTION  <----------------

void insert1(int index, int x)
{
    if(index==0){
        node *t;
        t = new node;

        t->data = x;
        t->next = first;
        first = t;
    }else{
        node *t;
        t = new node;
        t->data = x;
        node *p = first;
        for(int i=0; i<index-1; i++)  p=p->next;

        t->next = p->next;
        p->next = t;
    }
}

//-----------------> INSERTION IN SORTED LIST  <---

void insert_sorted(int x)
{
    node *p = first;
    node *t = new node;
    t->data = x;
    t->next = NULL;

    if(x<first->data || first == NULL){
        t->next = first;
        first = t;
        return;
    }

    while(p && (p->next)->data < x){
        p = p->next;
        if(p->next == NULL)  break;
    }

    t->next = p->next;
    p->next = t;
}

//----------------->   IS SORTED OR NOT  <---------

int is_sorted_not(node *p)
{
    node *q=first->next;

    while(q)
    {
        if(p->data > q->data) return 0;

        p = q;
        q = q->next;
    }

    return 1;
}

//--------> REMOVAL OF DUPLICATE IN SORTED L.L <---

void removal_duplicate(node *p)
{
    node *q = p->next;

    while(q){
        if(p->data == q->data){
            p->next = q->next;
            delete q;
            q = p->next;
        }else{
            p=q;
            q = q->next;
        }
    }
}

//--------> REMOVAL OF DUPLICATE IN SORTED L.L  2nd METHOD <---


void removal_of_duplicate(){
    node *last = first;
    node *p = first->next;

    while(p){
        if(p->data == last->data) p = p->next;
        else{
            last->next = p;
            last = p;
            p = p->next;
        }
    }
}

//----------------->   DELETETION    <-------------

int delete1(int index)
{
    node *p=first;
    node *q=first->next;

    int x;

    if(index == 0){
        first = first->next;
        x = p->data;
        delete p;
    }else{
        for(int i=0; i<index-1; i++){
            p=q;
            q = q->next;
        }

         p->next = q->next;
         x = q->data;
         delete q;
    }


    return x;
}

//----------------->   reverse REC    <-------------

void reversee_pointer_rec(node *q, node *p)
{
    if(p)
    {
        reversee_pointer_rec(p, p->next);
        p->next = q;
    }
    else first = q;
}

//----------------->   REVERSE BY ARRAY   <-------------

void reversee()
{
    node *p = first;
    node *q = first;
    int a[5];
    int i=0;

    while(p)
    {
        a[i++] = p->data;
        p = p->next;
    }

    p = q;

    while(p)
    {
        p->data = a[--i];
        p = p->next;
    }
}

//----------------->    REVERSE 3 POINTER   <-------------

void reversee_pointer( node *f)
{
    node *s, *t;
    f = first;
    s = NULL;
    t = NULL;

    while(f)
    {
        t = s;
        s = f;
        f = f->next;

        s->next = t;
    }

    first = s;
}


//----------------->   MAIN      <-----------------

int main()
{
    first = new node;
    first->data = 1;
    first->next = NULL;

    create(first);
    display(first);

    cout<<endl<<"DELETED ELEMENT IS :: "<<delete1(4)<<endl;

    display(first);
}


