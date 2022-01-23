#include<stdio.h>

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void quicksort(int a[], int l , int h)
{
    int j;
    if(l<h)
    {
        j=partition(a, l , h);
        quicksort(a, l, j-1);
        quicksort(a, j+1, h);
    }
}

int partition(int a[], int l , int h)
{
    int pivot=a[l];
    int i=l;
    int j=h;

    while(i<j)
    {
        while(a[i]<=pivot) i++; ;
        while(a[j]>pivot) j--;

        if(i<j)  swap(&a[i], &a[j]);
    }

    swap(&a[l], &a[j]);
    return j;
}

int main()
{
    int n;
    FILE *ptr;
    ptr=fopen("smaple.txt", "r");
    fscanf(ptr, "%d", &n);

    int a[n];

    for(int i=0;i<n;i++)  fscanf(ptr, "%d", &a[i]);
    fclose(ptr);

    quicksort(a, 0, n-1);

    for(int i=0; i<n;i++)  printf("%d ", a[i]);
}
