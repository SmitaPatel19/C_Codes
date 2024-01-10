#include<stdio.h>

void fn(int n);

int main()
{
    int x;
    printf("enter number till which output is required = ");
    scanf("%d",&x); 

    for(int i=1;i<x;i++)
    {
        fn(i);
        printf("\n");
    }
return 0;
}

void fn(int n)
{
    int fn=(n,n+1);
    printf("fn(%d) = (%d,%d)",n,n,n+1);
}