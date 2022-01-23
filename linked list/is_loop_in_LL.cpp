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

bool is_loop()
{
    node *p = first;
    node *q = first;

    do{
        q = q->next;
        q = (q ? q->next : NULL);
        p = p->next;
    }while(p && q && p!=q);
    if(p==q) return 0;
    else 1;
}

int main()
{
    first = new node;
    first->data = 1;
    first->next = NULL;
    create(first);



    if(is_loop()) cout<<"NO LOOP"<<endl;
    else cout<<"LOOP"<<endl;

}


