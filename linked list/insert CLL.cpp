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
        node *next;
}*first;


// FOR REVERSE THE CIRCULAR LINKED LIST

void reverse_loop(){
    node *third = NULL;
    node *second = NULL;
    node *head = first;

    node *rev = first;

    do{
        third = second;
        second = head;
        head = head->next;

        second->next = third;
    }while(head !=first);

    first = second;
    rev ->next = first;
}


void display(node *p)
{
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p!=first);
}

void insertion(node *t, int index)
{
    node *p = new node;
    p->data = 2;

    if(first == NULL){
        first = p;
        p->next = p;
    }else{
        if(index == 0){
                while(t->next != first)   t = t->next;
                t->next = p;
                p->next = first;
                first = p;
        }else{
            for(int i=0;i<index-1;i++){
                t = t->next;
            }

            p->next = t->next;
            t->next = p;
        }
    }
}

int main()
{
    first = new node;
    first->data = 1;
    first->next = NULL;
    node *last = first;

    for(int i=2; i<6; i++)
    {
        node *p = new node;
        p->data = i;
        p->next = NULL;
        last->next = p;
        last=p;
    }
    last->next = first;

    int index;  cin>>index;

    insertion(first, index);

    display(first);
}

