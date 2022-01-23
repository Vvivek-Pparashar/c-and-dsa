#include <stdio.h>
#include <stdlib.h>

void mergearr(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1=m-l+1;
    int n2=r-m;

    int L[n1], R[n2];

    for(i=0;i<n1;i++)  L[i]=a[l+i];
    for(i=0;i<n2;i++)  R[i]=a[m+1+i];

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }

        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void merge(int a[], int l, int r)
{
    if(l<r)
    {
        int m=(l+r)/2;

        merge(a, l, m);
        merge(a, m+1, r);

        mergearr(a, l, m, r);
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

    merge(a, 0, n-1);

    for(int i=0;i<n;i++) printf("%d ", a[i]);
}
