#include<bits/stdc++.h>
using namespace std;

class queue_ll
{
public:
    int data;
    queue_ll *next;
}*first = NULL, *rare = NULL;

void enqueue(int x){
    queue_ll *t = new queue_ll;
    if(!t) cout<<"FULL"<<endl;
    else{
        t->data = x;
        t->next = NULL;

        if(!first){
            first = rare = t;
        }else{
            rare->next = t;
            rare = t;
        }
    }
}

int dequeue(){
    int x =-1;
    if(!first) cout<<"empty"<<endl;
    else{
        queue_ll *p =first;
        x = first->data;
        first = first->next;
        delete p;
    }

    return x;
}

void display()
{
    queue_ll *p = first;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    cout<<"The dequeue element is "<<dequeue()<<endl;;
    cout<<"The dequeue element is "<<dequeue()<<endl;
    cout<<"The dequeue element is "<<dequeue()<<endl;
    cout<<"The dequeue element is "<<dequeue()<<endl;
    cout<<"The dequeue element is "<<dequeue()<<endl;

    cout<<"The queue elements are .. ";
    display();

}

