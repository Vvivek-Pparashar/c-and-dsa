#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// --------> count  and sum  ------------>

int count(struct node *p)
{
    static int x=0;
    if(p==NULL) return x;

    x+=p->data;
    return count(p->next);
}

// --------> display by recursion  ------------>

void display(struct node *ptr)
{
    if(ptr)
    {
        cout<<ptr->data<<" ";
        display(ptr->next);
    }
}

// --------> main function  ------------>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    struct node *first;
    first = (struct node *)malloc(sizeof(struct node));

    struct node *t, *last;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<5;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

    // --------> display by iteration  ------------>

    while(first!=NULL)
    {
        printf("%d ", first->data);
        first = first->next;
    }
}




