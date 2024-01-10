#include<stdio.h>
int main()
{
    int n,r,num,sum=0;
    printf("enter number=");
    scanf("%d",&n);
    printf("Number is %d\n",n);
    num=n;

    for(;n!=0;)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }

    if(sum==num)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }

    return 0;
}