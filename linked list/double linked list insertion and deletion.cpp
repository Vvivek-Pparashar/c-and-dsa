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
    node *pre;
    int data;
    node *next;
}*first;


void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}

void insertion(node *p, int index){
    node *q, last;
    q = new node;
    q->data = 99;

    if(index == 0){
        q->pre = NULL;
        q->next = p;
        p->pre = q;
        first = q;
    }else{
        loop(i, 0, index)  p = p->next;

        q->next = p->next;
        p->next = q;
        q->pre = p;

        if(p->next) p->next->pre = q;
    }
}

void deletion(node *p, int index){
    node *q = first;
    if(index ==1){
        p->next->pre = NULL;
        //delete first;
        first = p->next;

    }else{
        loop(i, 1, index-1)  p = p->next;
        q = p->next;

        p->next = q->next;
        if(q->next) q->next->pre = p;
    }
}

void reverse_1(node *p){
    while(p->next) p = p->next;
    first = p;
}

void display_rev(node *p){
    while(p){
        cout<<p->data<<" ";
        p = p->pre;
    }
}

// reverse a doubly linked list..

void reverse1(){
    node *p = first;


    while(p){
        node *q = p->next;
        p->next = p->pre;
        p->pre = q;

        if(p->pre) p=q;
        else{
            first = p;
            p = q;
        }
    }
}


int main()
{
    node *last, *t;

    first = new node;
    first->pre = first->next = NULL;
    first->data = 1;
    last = first;

    loop(i, 1, 5){
        t = new node;
        t->data = i+1;
        t->pre = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }

    insertion(first, 5);
    //deletion(first , 2);

    //reverse_1(first);
    //display_rev(first);
    display(first);
}
