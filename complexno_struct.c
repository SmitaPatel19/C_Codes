#include<stdio.h>

struct comp
{
    int re;
    int im;
};

void printinfo(struct comp c[]);

int main()
{
    struct comp c[5];

    for(int i=0;i<5;i++)
    {
        printf("c[%d].re = ",i);
        scanf("%d",&c[i].re);

        printf("c[%d].im = ",i);
        scanf("%d",&c[i].im);
    }

    printinfo(c);

return 0;
}

void printinfo(struct comp c[])
{
    printf("complex numbers are = \n");
    for(int i=0;i<5;i++)
    {
        printf("%d + %di\n",c[i].re,c[i].im);
    }
}