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
    node *next;
}*first;



void display(node *p)
{
    if(!p) return;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=first);
}



void create(node *first, node *last){
    node *t;
    for(int i=0;i<4;i++){
        node *t;
        t = new node;
        t->data = (i+2);
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

void deletion(node *p, int index){
    node *q;
    if(index<0) return;

    if(index == 1){
        while(p->next != first)  p = p->next;
        if(first == p){   ///  ---->  ye first ke equal only when there is only 1 element/node ;
            delete first;
            first = NULL;
        }else{
            p->next = first->next;
            delete first;
            first = p->next;
        }
    }else{
        loop(i, 0, index-1){
            p = p->next;
        }

        q = p->next;
        p->next = q->next;
        delete q;
    }
}



int main(){
    first = new node;
    first->data = 1;
    first->next = first;
    node *last = first;

    create(first, last);

    first->next->next->next->next->next = first;

    deletion(first,1);
    display(first);
}
