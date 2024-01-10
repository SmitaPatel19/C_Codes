#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("c= ");
    scanf("%d",&c);

    if(a<b && a<c)
    {
        printf("a is smallest no.");
    }
    else if(b<a && b<c)
    {
        printf("b is smallest no.");
    }
    else
    {
        printf("c is smallest no.");
    }
return 0;
}