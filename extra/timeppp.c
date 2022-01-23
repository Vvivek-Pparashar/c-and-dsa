#include<stdio.h>

int main()
{
    int i =4, j=-1, k=0, w, x, y, z;
    w = i || j || k;
    w = i  && j && k;
    w =  i || j && k;

    printf("%d", w);
}
