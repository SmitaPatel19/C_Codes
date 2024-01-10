#include<stdio.h>
int power(int x,int y);

int main()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("result is = %d",power(a,b));

return 0;
}

int power(int x,int y)
{
    int r=1;
    for(int i=1;i<=y;i++)
    {  
       r=r*x;
    }
    return r;
}