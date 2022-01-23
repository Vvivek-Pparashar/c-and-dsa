#include<stdio.h>

struct term
{
    int coeff;
    int exp;
};

struct poly
{
    int n;
    struct term *t;
};

int main()
{
    struct poly p;
    printf("Number of term  .. ");
    scanf("%d", &p.n);

    p.t=(struct term *)malloc(p.n*sizeof(struct term));
    printf("Enter poly term  .. \n");

    for(int i=0;i<p.n;i++)
    {
        printf("term  ..  ");
        scanf("%d %d", &p.t[i].coeff, &p.t[i].exp);
    }

    for(int i=0;i<p.n;i++)
    {
        printf("%dX^%d+", p.t[i].coeff, p.t[i].exp);
    }
}

