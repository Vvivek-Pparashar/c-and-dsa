#include<stdio.h>

struct vivek{
    int a;
};

int main(){
    struct vivek *p;
    p = malloc vivek;
    p->a = 5;

    printf("%d", p->a);

}

