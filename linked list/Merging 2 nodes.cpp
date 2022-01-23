#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
};

void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

node* merge_two_ll(node *first, node *second, node *third)
{
    node *last;

    if(first->data < second->data){
        last = third = first;
        first = first->next;
        last->next = NULL;
    }else{
        last = third = second;
        second = second->next;
        last->next = NULL;
    }

    while(first && second){
        if(first->data > second->data){
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }else{
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
    }

    while(first){
        last->next = first;
        last = first;
        first = first->next;
        last->next = NULL;
    }

    while(second){
        last->next = second;
        last = second;
        second = second->next;
        last->next = NULL;
    }

    return third;
}
int main(){
    node *second, *last_first, *last_second, *p, *third, *first;

    first = new node;
    first->data = 1;
    first->next = NULL;
    last_first = first;

    second = new node;
    second->data = 2;
    second->next = NULL;
    last_second = second;

    for(int i=1; i<5; i++)
    {
        p =new node;
        p->data = i+4;
        p->next = NULL;
        last_first->next = p;
        last_first = p;
    }

    display(first);

    for(int i=1; i<4; i++)
    {
        p =new node;
        p->data = i+2;
        p->next = NULL;
        last_second->next = p;
        last_second = p;
    }

    display(second);


    third = merge_two_ll(first, second, third);
    display(third);

}

