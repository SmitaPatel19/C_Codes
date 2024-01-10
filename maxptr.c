#include<stdio.h>

void maxi(int x,int y,int *max);

int main()
{
    int a,b, max;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    maxi(a,b,&max);

    printf("maximum is %d",max);

return 0;
}

void maxi(int x, int y, int *max)
{
    if(x>y)
    {
        *max=x;
    }
    else{
        *max=y;
    }
}