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
    int size1;
    int top;
    int *a;
};

void create(stack1 *st)
{
    cout<<"size of array  ";
    cin>>st->size1;

     st->a = new int[st->size1];
     st->top = -1;
}

void push(stack1 *st, int x)
{
    if(st->top == st->size1-1){
        cout<<"stack overflow"<<endl;
    }else{
        st->top++;
        st->a[st->top] = x;
    }
}

int pop(stack1 *st)
{
    int x = -1;

    if(st->top == -1){
        cout<<"Stack is empty"<<endl;
    }else{
        x = st->a[st->top];
        st->top--;
    }

    return x;
}

void display1(stack1 st)
{
    for(int i = st.top; i>=0; i--)
    {
        cout<<st.a[i]<<" ";
    }
}

void peek(stack1 *st, int index)
{
    if(st->top+1-index <0) {
        cout<<"invlaid index"<<endl;
    }else{
        int x = -1;
        x = st->a[st->top+1-index];
        cout<<x<<endl;
    }
}

int main()
{
    stack1 st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);

    peek(&st, 6);
    display1(st);
}

