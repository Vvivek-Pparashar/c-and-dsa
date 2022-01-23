#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

class stack1
{
public:
    int data;
    stack1 *next;
}*top = NULL;

void push(int x)
{
    stack1 *p = new stack1;
    if(!p) cout<<"Stack OverFlow"<<endl;
    else{
        p->data = x;
        p->next = top;
        top = p;
    }
}

void display1()
{
    stack1 *p = top;
    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}

void pop()
{
    stack1 *p = top;
    if(!p) cout<<"Stack is empty"<<endl;
    else{
        cout<<"pop "<<p->data<<endl;
        top = top->next;
    }
}

void peek(int index)
{
    stack1 *p = top;
    for(int i=0; i<index-1 && p; i++)   p = p->next;
    if(p) cout<<"Peek element is "<<p->data<<endl;
    else cout<<"Wrong index"<<endl;
}

int main()
{
    push(3);
    push(4);
    push(5);
    push(6);

    peek(8);

    cout<<"\nElements in stack is :: ";
    display1();
}

