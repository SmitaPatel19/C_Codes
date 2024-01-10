#include<stdio.h>
int main()
{
    int a,b,*ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("sum=%d",*ptr1+*ptr2);

return 0;
}