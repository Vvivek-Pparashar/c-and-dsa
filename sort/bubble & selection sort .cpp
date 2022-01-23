#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define po pop_back
#define loop(i, a, b) for(int i=a; i<b; i++)
#define mp make_pair
#define vivek_is_great ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(v) v.begin(),v.end()


//----------------->  BUBBLE  <--------------------
void bubble(int a[], int n){
    loop(i, 0, n){
        loop(j, 0, n-i){
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

//------------- >  SELECTION  <--------------------
void selection(int a[], int n){
    loop(i, 0, n){
        int temp = a[i];
        int index = 0;

        loop(j, i, n){
            if(a[j] < temp){
                temp = a[j];
                index = j;
            }
        }

        if(index) swap(a[i], a[index]);
    }
}




//---------------->  DISPLAY  <--------------------

void display(int a[], int n){
    loop(i, 0, n) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int a[10] = {6, 3, 4, 9, 0, 1, 2, 7, 5, 8};
    selection(a, 10);
    display(a, 10);
}
