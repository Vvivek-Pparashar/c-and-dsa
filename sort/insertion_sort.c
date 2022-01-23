#include<stdio.h>

void insertion(int *a, int n)
{
    int key;
    int j;
    for(int i=1; i<n; i++)
    {
        key=a[i];
        j=i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }
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


    insertion(&a, n);
    for(int i=0; i<n;i++)  printf("%d ", a[i]);
}
