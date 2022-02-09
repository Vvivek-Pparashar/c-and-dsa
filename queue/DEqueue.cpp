#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

class array_queue{
public:
    int first;
    int rare;
    int *heap_array;
    int size;
};

void create(array_queue *q){
    cout<<"Enter the size ....";
    cin>>q->size;
    q->heap_array = new int(q->size);

    q->first = q->rare = -1;
}

void insertion_by_first(array_queue *q, int x){
    if(q->first >= q->rare || q->first == -1){
        cout<<"Can't insert by first method"<<endl;
    }else{
        q->heap_array[q->first] = x;
        q->first--;
    }
}

void deletion_by_first(array_queue *q){
    if(q->first == q->rare) cout<<"Empty"<<endl;
    else{
        q->first++;
        cout<<"The deleted number by first is  "<<q->heap_array[q->first]<<endl;
    }
}

void insertion_by_rare(array_queue *q, int x){
    if(q->rare == q->size - 1) cout<<"FULL"<<endl;
    else{
        q->rare++;
        q->heap_array[q->rare] = x;
    }
}

void deletion_by_rare(array_queue *q){
    if(q->rare == -1){
        cout<<"EMPTY"<<endl;
    }else{
        cout<<"The deleted number by rare is  "<<q->heap_array[q->rare]<<endl;
        q->rare--;
    }
}

void display(array_queue *q){
    for(int i = q->first+1; i<=q->rare; i++){
        cout<<q->heap_array[i]<<" ";
    }cout<<endl;
}

int main(){
    array_queue q;
    create(&q);

    insertion_by_first(&q, 1);
    deletion_by_rare(&q);

    display(&q);
}
