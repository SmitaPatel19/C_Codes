#include<stdio.h>
typedef struct distance
{
    int feet;
    float inch;
}dist;
void inpdist(dist *d1,dist *d2);

int main()
{
    dist d1,d2,sum;

    inpdist(&d1,&d2);

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    int count=0;
    for(int i=0;sum.inch>=12;i++)
    {
        count++;
        sum.inch=sum.inch-12.0;
    }
    sum.feet=sum.feet+count;
    printf("Sum of distances = %d'%.1f",sum.feet,sum.inch);
return 0;
}

void inpdist(dist *d1,dist *d2)
{
    printf("Enter 1st distance:\n");
    printf("feet=");
    scanf("%d",&(*d1).feet);
    printf("inch=");
    scanf("%f",&(*d1).inch);

    printf("Enter 2nd distance:\n");
    printf("feet=");
    scanf("%d",&(*d2).feet);
    printf("inch=");
    scanf("%f",&(*d2).inch);
}