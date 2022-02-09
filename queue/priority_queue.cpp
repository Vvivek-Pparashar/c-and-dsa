#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()

class p_queue
{
public:
    char *a1;
    char *a2;
    char *a3;

    int first1;
    int first2;
    int first3;

    int rare1;
    int rare2;
    int rare3;
};

void insertion(p_queue *p, char a, int x){
    if(x == 1){
        p->rare1++;
        p->a1[p->rare1] = a;
    }else if(x == 2){
        p->rare2++;
        p->a2[p->rare2] = a;
    }else{
        p->rare3++;
        p->a3[p->rare3] = a;
    }
}

void deletion(p_queue *p){
    if(p->first1 != p->rare1){
        p->first1++;
        cout<<"Deleted element is "<<p->a1[p->first1]<<endl;
    }else{
        cout<<"First is empty  ";
        if(p->first2 != p->rare2){
            p->first2++;
            cout<<"Deleted element is "<<p->a2[p->first2]<<endl;
        }else{
            cout<<"Second is empty  ";
            if(p->first3 != p->rare3){
                p->first3++;
                cout<<"Deleted element is "<<p->a3[p->first3]<<endl;
            }else{
                cout<<"Thirs is also empty  "<<endl;
            }
        }
    }
}

void display(p_queue p){
    loop(i, p.first1+1, p.rare1+1) cout<<p.a1[i];
    cout<<endl;
    loop(i, p.first2+1, p.rare2+1) cout<<p.a2[i];
    cout<<endl;
    loop(i, p.first3+1, p.rare3+1) cout<<p.a3[i];
    cout<<endl;
}

int main()
{
    p_queue p;
    p.a1 = new char[10];
    p.a2 = new char[10];
    p.a3 = new char[10];

    p.first1 = p.first2 = p.first3 = p.rare1 = p.rare2 = p.rare3 = -1;

    insertion(&p,'a',1 );
    insertion(&p,'g',1 );
    insertion(&p,'d',3 );
    insertion(&p,'t',2 );
    insertion(&p,'b',2 );
    insertion(&p,'f',1 );
    insertion(&p,'e',3 );

    deletion(&p);
    deletion(&p);
    deletion(&p);
    deletion(&p);

    insertion(&p,'f',1 );
    deletion(&p);
    deletion(&p);
    deletion(&p);
    display(p);

}

