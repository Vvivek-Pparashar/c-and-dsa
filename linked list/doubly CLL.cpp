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
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=first);
}

void insertion(node *q, int index){

    node *p = new node;
    p->data = 69;

    if(index%5==0){  //  --- because 5  it is size of linked list;;;
        p->next = first;
        p->pre = first->pre;
        first->pre = p;
        p->pre->next = p;

        first = p;
    }else{
        loop(i, 0, index-1) q = q->next;

        p->next = q->next;
        q->next->pre = p;

        q->next = p;
        p->pre = q;
    }
}

int main()
{
    first = new node;
    first->data = 1;
    first->pre = NULL;
    first->next = NULL;
    node *last = first;

    loop(i, 2, 6){
        node *p = new node;
         p->data = i;
         p->next = NULL;
         p->pre = last;
         last->next = p;

         last = p;
    }
    last->next = first;
    first->pre = last;

    insertion(first, 5);
    display(first);
}
