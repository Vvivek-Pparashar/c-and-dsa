#include<stdio.h>
int main(){
    int n;  scanf("%d", &n);
    int a[n];

    long long boys = 0, girls = 0;
    for(int i = 0; i<n; i++) {
        scanf("%d", &a[i]);
        if(i%2 == 0) boys += a[i];
        else girls += a[i];
    }

    char c;   scanf(" %c", &c);
    if(c == 'b')  printf("%d", boys);
    else printf("%d", girls);
}
