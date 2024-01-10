#include<stdio.h>
void calcu(int x,int y,int *sum,int *prod,float *avg);

int main()
{
    int a,b,sum ,prod;
    float avg;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    calcu(a,b,&sum,&prod,&avg);

    printf("sum = %d , product= %d , average= %f ",sum,prod,avg);

return 0;
}

void calcu(int x,int y,int *sum,int *prod,float*avg)
{
    *sum=x+y;
    *prod=x*y;
    *avg=(x+y)/2;
}