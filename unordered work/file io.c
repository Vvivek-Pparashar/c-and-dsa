#include<stdio.h>

int main()
{
    int num=59;

    FILE *ptr;
    ptr=fopen("vivek.txt", "w");
    fprintf(ptr, "The number which is typed by vivek is %d", num);
}
