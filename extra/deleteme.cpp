#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

class queue_array
{
public:

    int size;
    int first;
    int rare;
    int *array_heap;
};


void create(queue_array *q)
{
    cout<<"Enter the size  ";
    cin>>q->size;

    q->array_heap = new int[q->size];
    q->first = q->rare = 0;
}

void enqueue(queue_array *q, int x)
{
    if((q->rare + 1)%q->size == q->first)    cout<<"Full"<<endl;
    else{
        q->rare = (q->rare +1)%q->size;
        q->array_heap[q->rare] = x;
    }
}

int dequeue(queue_array *q)
{
    int x = -1;
    if(q->first == q->rare) cout<<"emptyyyyy   ";
    else{
        q->first = (q->first +1)%q->size;
        x = q->array_heap[q->first];
    }

    return x;
}

void display(queue_array q)
{
    while(q.first != q.rare){
        q.first = (q.first+1)%q.size;
        cout<<q.array_heap[q.first]<<" ";
    }

    cout<<endl;
}

int main()
{
    queue_array q;
    create(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);

    display(q);

    dequeue(&q);
    enqueue(&q, 4);

    dequeue(&q);
    enqueue(&q, 4);

    display(q);
}
