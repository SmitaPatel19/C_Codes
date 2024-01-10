#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a,b;
    printf("enter a=");
    scanf("%d",&a);

    printf("enter b=");
    scanf("%d",&b);

    printf("using function\n");
    swap(&a,&b);

   /* a=b-a;
    b=b-a;
    a=a+b;

    printf("after swaping\n");

    printf("a=%d\n",a);
    printf("b=%d\n",b);*/

return 0;
}

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("a=%d\n",*x);
    printf("b=%d\n",*y);
}