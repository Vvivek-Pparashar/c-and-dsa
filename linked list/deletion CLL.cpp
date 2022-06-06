#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[7] = {3, 5, 7, 1, 6, 2, 4};

    int n = 7;

    for(int i = 1; i<n; i++){
        int j = i - 1;
        int key = a[i];

        while(j>=0 && a[j] >= key){
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
    }


    for(auto it : a)  cout<<it<<" ";
}
