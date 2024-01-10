#include<stdio.h>

struct vector 
{
    int x;
    int y;
}v1,v2;

void vecsum(struct vector v1, struct vector v2);

int main()
{
    printf("eneter x for v1 = ");
    scanf("%d",&v1.x);

    printf("eneter y for v1 = ");
    scanf("%d",&v1.y);

    printf("enetrr x for v2 = ");
    scanf("%d",&v2.x);

    printf("enetrr y for v2 = ");
    scanf("%d",&v2.y);

    vecsum(v1,v2);
return 0;
}

void vecsum(struct vector v1, struct vector v2)
{
    int x1=v1.x + v2.x;
    int y1=v1.y + v2.y;

    printf("sum is = %di + %dj",x1,y1);
}