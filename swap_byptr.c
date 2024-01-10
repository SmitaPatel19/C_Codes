#include<stdio.h>
int swap(int *x,int *y);
//call by refernce
int main()
{
    int a ,b;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    swap(&a,&b);
    printf("a=%d & b=%d",a,b);

return 0;
}

int swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
    return *x,*y;
}