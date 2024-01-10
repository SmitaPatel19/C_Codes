#include<stdio.h>

int sum(int n);

int main()
{
    int n;

    printf("enter number=");
    scanf("%d",&n);

    printf("sum is=%d",sum(n));
    
    return 0;
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sum1=sum(n-1);
    return (sum1+n);
}